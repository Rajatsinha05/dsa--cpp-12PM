#include <iostream>
using namespace std;
class Base
{
public:
    string name;
    Base(string name)
    {
        this->name = name;
    }
    void print()
    {
        cout << "hello " << this->name << endl;
    }
};

class Base2
{
public:
    int grid;
    Base2(int grid)
    {
        this->grid = grid;
    }
};
class A : public Base, public Base2
{
public:
    int number;
    A(int number, string name, int grid) : Base(name) , Base2(grid)

    {
        this->number = number;
    }

    void test()
    {
        cout << "test" << endl;
    }
};

int main()
{
    Base *b = new Base("ankit");
    A *a = new A(435234, "jaydip",675);
    a->print();
    a->test();
    return 0;
}