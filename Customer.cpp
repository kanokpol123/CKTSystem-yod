#include "Customer.h"
Customer::Customer(string telephone, string address, string firstname, string lastname, int age, Account* a) : Person(firstname, lastname, age)
{
    this->telephone = telephone;
    this->address = address;
    this->custAccount = a;
}
Customer::Customer(string telephone, string firstname, string lastname, Account* a) : Person(firstname, lastname)
{
    this->telephone = telephone;
    this->custAccount = a;
}
string Customer::getAddress() {return address;}
string Customer::getTelephone() {return telephone;}
void Customer::setAddress(string address) {this->address = address;}
void Customer::setTelephone(string telephone) {this->telephone = telephone;}
Account* Customer::getAccount() {return custAccount;}