#include "base.h"

void Name::set_name(string f_n, string l_n)
{
    strcpy(f_name, f_n.c_str());
    strcpy(l_name, l_n.c_str());
}

Name::Name()
{
    f_name = new char[50];
    l_name = new char[50];
}


Person::Person()
{
    DOB = new Date;
}

void Person::set_person(string f_n, string l_n, int AGE, string dob)
{
    name.set_name(f_n, l_n);
    age = AGE;

     int d, m, y;
     d = stoi(dob.substr(0, 2));
     m = stoi(dob.substr(3, 2));
     y = stoi(dob.substr(6, 4));
     DOB->set_date(d, m, y);

}

void Date::set_date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void operator <<(ostream &out, Date &d)
{
    out << d.day << "/" << d.month << "/" << d.year;
}

char* Name::get_name()
{
    return strcat(strcat(f_name, " "), l_name);
}

char * Date::get_date()
{
    string date = to_string(day) + "\\" + to_string(month) + "\\" + to_string(year);
    char * d = new char[50];
    strcpy(d, date.c_str());
    return d;
}