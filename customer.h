#include <iostream>
#include <fstream>

#include "base.h"

using namespace std;
#ifndef CUSTOMER_
#define CUSTOMER_

class Customer: public Person
{
private:
    int cId;
public:
    void add_customer();
    void p_data();
    friend void operator << (fstream& file, Customer& c);
    char* get_name()
    {
        return name.get_name();
    }
    int get_id()
    {
        return cId;
    }
    int get_age()
    {
        return age;
    }
    char* get_date()
    {
        return DOB->get_date();
    }
};

#endif