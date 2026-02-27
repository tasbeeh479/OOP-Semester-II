#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double balance)
    {
        SetBalance(balance);
    }

    void SetBalance(double balance)
    {
        if (balance >= 0)
            this->balance = balance;
        else
            this->balance = 0.0;
    }
    double GetBalance() const
    {
        return balance;
    }
};

class SavingAccount : public Account
{
private:
    double InterestRate = 10;

public:
    SavingAccount(double balance) : Account(balance)
    {
    }

    double CalculateInterest()
    {
        return GetBalance() * InterestRate / 100;
    }
};

int main()
{
    SavingAccount s1(354454.00);
    cout << s1.CalculateInterest();

    return 0;
}