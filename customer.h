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
    void del_customer(int id);
    void p_data();
    friend void operator << (fstream& file, Customer& c);
    friend void operator >> (fstream& file, Customer& c);
    char* get_name();
    int get_id();
    int get_age();
    char* get_date();
    bool is_exist();
};

#endif