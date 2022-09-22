#include "account.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Account::Account(): id(0), name(""), balance(0.00) 
{

}

void Account::get_name_and_balance() const {
    cout << "Enter the name : " << endl;
    cout << "Enter the balance : " << endl;
}

void Account::display_acc_info() const {
    cout << "Account ID : " << id << "  Name: " << name << "  Balance: $" << balance << endl;
}