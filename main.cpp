#include<iostream>
#include<cstring>
#include <fstream>
#include "customer.h"

using namespace std;

int welcome();

int main()
{
    int choice;
    Customer c1, c2;
    choice = welcome();
    if (choice == 1)
    {
        fstream file;
        file.open("customer.txt", ios::out | ios::app);
        c1.add_customer();
        file << c1;
        file.close();
    }


}



// void Customer::p_data()
// {
//    cout << "First Name: " << f_name << endl;
//    cout << "Last Name: " << l_name << endl;
//    cout << "ID: " << cId << endl;
//    cout << "Age: " << age << endl;;
// }


int welcome()
{
    int ch;
    cout << "Welcome To Transport Manager" << endl << endl;
    cout << "\t1. Add a Customer" << endl;
    cout << "\t2. Delete a Customer" << endl;


    cout << "Choose the desired options" << endl;
    cin >> ch;

    return ch;
}