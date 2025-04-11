
#include <iostream>
using namespace std;
class Student
{

public:
    string name;
    int number;
    int grid;
    string course;
    int fees;

public:
    Student(string name, int number, int grid, string course, int fees)
    {
        this->name = name;
        this->number = number;
        this->grid = grid;
        this->course = course;
        this->fees = fees;
    }
    void print()
    {
        cout << "name -> " << this->name << " grid -> " << this->grid << endl;
    }
};

int main()
{

    Student *std = new Student("jay", 543543, 5433, "full stack", 43532);
    Student *std2 = new Student("jaydip", 543543, 5433, "full stack", 43532);
    std->print();
    std2->print();
    return 0;
}
