#include <iostream>
#include <fstream>
#include <stdio.h>

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
    void del_customer();
    void p_data();
    friend void operator << (fstream& file, Customer& c);
    friend void operator >> (fstream& file, Customer& c);
    void set_id(int id);
    void set_age(int age);
    char* get_name();
    int get_id();
    int get_age();
    char* get_date();
    bool is_exist(int id);
};

#endif