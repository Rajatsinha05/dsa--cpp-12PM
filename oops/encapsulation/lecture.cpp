#include <iostream>
using namespace std;

class Bank
{

private:
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
    void setName(string name)
    {
        if (name.length() >= 3)
        {
            this->name = name;
        }
        else
        {
            cout << "length must be 3 char..." << endl;
        }
    }

    string getName()
    {
        return this->name;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            this->amount += amount;
        }
        else
        {
            cout << "amount must be greather then 0" << endl;
        }
    }

    int checkBal()
    {
        return this->amount;
    }

    void withdrawal(int amount)
    {
        if (this->canWithdrawal(amount))
        {
            this->amount -= amount;
            cout << " amount withdrawal...." << endl;
        }
        else
        {
            cout << " check your bank bal...." << endl;
        }
    }

private:
    bool canWithdrawal(int amount)
    {
        if (this->amount >= amount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Bank *bank = new Bank("jay", 56346534);
    bank->setName("ankit");
    cout << bank->getName() << endl;
    bank->deposit(1000);
    bank->withdrawal(500);
    cout << bank->checkBal() << endl;
    return 0;
}