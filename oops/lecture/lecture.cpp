#include <iostream>
using namespace std;

class Bank
{

protected:
    string name;
    int number;
    int amount;

public:
    Bank(string name, int number)
    {
        this->name = name;
        this->number = number;
        this->amount = 0;
    }

    int checkBal()
    {
        return this->amount;
    }
    virtual void deposit(int amount) = 0;
    virtual void withdraw(int amount) = 0;
};

class Saving : public Bank
{
public:
    Saving(string name, int number) : Bank(name, number)
    {
    }

    void deposit(int amount) override
    {
        if (amount > 0 && amount < 50000)
        {
            this->amount += amount;
        }
        else
        {
            cout << "you cant depost greather then 50K" << endl;
        }
    }

    void withdraw(int amount) override
    {
    }
};

class Salary : public Bank
{
public:
    Salary(string name, int number) : Bank(name, number)
    {
    }

    void deposit(int amount) override
    {
        if (amount > 0 && amount < 150000)
        {
            this->amount += amount;
        }
        else
        {
            cout << "you cant depost greather then 50K" << endl;
        }
    }

    void withdraw(int amount) override
    {
    }
};

int main()
{

    Bank *bank = new Saving("ankit", 34534565);
    Bank *salary = new Salary("jay", 2354564);
    bank->deposit(50000);
    salary->deposit(90000);
    cout << "salary" << salary->checkBal() << endl;
    cout << bank->checkBal() << endl;
    return 0;
}