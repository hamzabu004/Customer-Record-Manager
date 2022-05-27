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
    else if (choice == 2)
    {
        c1.del_customer();
    }
    else if (choice == 3)
    {
        fstream file;
        file.open("customer.txt", ios::in);
        while(!file.eof())
        {
            file >> c1;
            c1.p_data();
        }
    }
}





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