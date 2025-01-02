#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
class Account
{
private:
    double amount = 0;

public:
    explicit Account(double amount);
    void deposit(double amount);
    double getBalance(void);
    void withdraw(double amount);
    operator double();
};
#endif