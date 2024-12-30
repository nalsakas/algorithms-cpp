#include "Account.h"

Account::Account(double amount)
{
    this->amount = amount;
}

void Account::deposit(double amount)
{
    if (amount > 0)
    {
        this->amount += amount;
    }
}

double Account::getBalance(void)
{
    return this->amount;
}

void Account::withdraw(double amount)
{
    if (amount <= this->amount)
    {
        this->amount -= amount;
    } 
}