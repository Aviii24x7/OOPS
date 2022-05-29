/*Program to show the concept of run time polymorphism using virtual function.*/

#include <iostream>
using namespace std;

class Car // Declaration of Base class
{
public:
    virtual void feature() // Usage of virtual constructor
    {
        cout << "Price of your Car ";
    }
};

class Mustang : public Car // Declaration of Derived class
{
public:
    void feature()
    {
        cout << "This is a mustang.\n";
        cout << "It's price is 45 lakh.\n";
    }
};
class Mercedes : public Car // Declaration of 2nd derived class
{
public:
    void feature()
    {
        cout << "This is a mercedes.\n";
        cout << "It's price is 47 lakh\n";
    }
};

int main()
{

    // base class pointer
    Car *C;
    Mustang a;

    // initilization of reference variable
    C = &a;

    // calling of mustang function
    C->feature();

    Mercedes b;

    // initilization of reference variable
    C = &b;

    // calling of mercedes function
    C->feature();

    return 0;
}