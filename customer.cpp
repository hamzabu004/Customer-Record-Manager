#include "customer.h"



void Customer::add_customer()
{
    string f_name, l_name, dob;
    int age;

    cout << "Enter Id: ";
    cin >> cId;

    cout << "Enter fName: ";
    cin >> f_name;
    cout << "Enter lName: ";
    cin >> l_name;

    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Date of Birth(dd/mm/yyyy): ";
    cin >> dob;

    set_person(f_name, l_name, age, dob);
}

void operator << (fstream& s, Customer &c)
{

    s << c.cId << endl << c.name.get_name() << endl << c.age
    << endl << c.DOB->get_date() << endl;
}

void Customer::set_id(int id)
{
    cId = id;
}

//get each customer from file
void operator >> (fstream& file, Customer& c)
{
    string str;
    getline(file, str);
    c.cId = stoi(str);

    getline(file, str);
    int pos = str.find(' ');
    c.name.set_name(str.substr(0, pos), str.substr(pos+1, str.length()-1));

    getline(file, str);
    c.age = stoi(str);

    //get date in indiviual variable without /
    getline(file, str);
    pos = str.find("\\");
    int d = stoi(str.substr(0, pos));
    str.erase(0, pos+1);
    pos = str.find("\\");
    int m = stoi(str.substr(0, pos));
    str.erase(0, pos+1);
    int y = stoi(str.substr(0, str.length()));
    c.DOB->set_date(d, m, y);

}

//char* Customer::get_name()
//{
//    return name.get_name();
//}
//int Customer::get_id()
//{
//    return cId;
//}
//int Customer::get_age()
//{
//    return age;
//}
//char* Customer::get_date()
//{
//    return DOB->get_date();
//}
bool Customer::is_exist(int id) {
    fstream file;
    file.open("customer.txt", ios::in);
    Customer c;
    while (!file.eof())
    {
        file >> c;
        if (c.cId == id)
        {
            return true;
        }
    }
    return false;

}
void Customer::del_customer()
{
    int id;
    cout << "Enter Id of Customer: ";
    cin >> id;
    if (is_exist(id))
    {
        Customer c;
        fstream file1, file2;
        file1.open("customer.txt", ios::in);
        file2.open("temp.txt", ios::out);

        while (!file1.eof())
        {
            file1 >> c;
            if (c.cId != id)
                file2 << c;
        }
        remove("customer.txt");
        rename("temp.txt", "customer.txt");

    }
    else
    {
        cout << "Invalid ID!"<< endl;
    }

}

void Customer::set_age(int AGE)
{
    age = AGE;
}

void Customer::p_data()
{
    cout << "ID: " << cId << endl;
    cout << "Name: " << name.get_name() << endl;
    cout << "Age: " << age << endl;
    cout << "DOB: " << DOB->get_date() << endl;
}
