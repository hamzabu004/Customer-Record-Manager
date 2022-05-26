#include <iostream>
#include <cstring>

using namespace std;
#ifndef BASE_
#define BASE_


class Name{
private:
    char * f_name;
    char * l_name;
public:
    Name();
    void set_name(string f_n, string l_n);
    char * get_name();
};



class Date{
    int day;
    int month;
    int year;
public:
    void set_date(int , int, int);
    friend void operator <<(ostream &out, Date &d);
    char * get_date();

};
class Person {
protected:
    Name name;
    Date * DOB;
    int age;
public:
    Person();

    void set_person(string f_n, string l_n, int age, string dob);
};
#endif