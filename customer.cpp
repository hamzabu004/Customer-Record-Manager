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

void operator >> (fstream& file, Customer& c)
{
    string name;
    int id;

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
    file.
}