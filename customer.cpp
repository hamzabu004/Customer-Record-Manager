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

void operator <<(fstream& s, Customer &c)
{

    s << c.get_id() << endl << c.get_name() << endl << c.get_age()
    << endl << c.get_date() << endl;
}

void Customer::set_id(int id)
{
    cId = id;
}

void operator >> (fstream& file, Customer& c)
{
    string str;
    getline(file, str);
    c.set_id(stoi(str));

    getline(file, str);
    int pos = str.find(' ');
    c.name.set_name(str.substr(0, pos), str.substr(pos+1, str.length()-1));

    getline(file, str);
    c.set_age(stoi(str));

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

char* Customer::get_name()
{
    return name.get_name();
}
int Customer::get_id()
{
    return cId;
}
int Customer::get_age()
{
    return age;
}
char* Customer::get_date()
{
    return DOB->get_date();
}
bool is_exist(int id)
{
    fstream file;
    file.open("customer.txt", ios::in);

}
void Customer::del_customer(int id)
{
    fstream file;

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
