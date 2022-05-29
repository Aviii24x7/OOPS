/*program to demonastrate the concept of destructor*/
#include <iostream>
using namespace std;
int count = 0;
class Number
{ // Creating class
public:
    Number()
    { // constructor
        count++;
        cout << "Constructor is called for " << count << endl;
    }

    ~Number()
    { // destructor

        cout << "constructor is destroyed for " << count << endl;
        count--;
    }
};

int main(int argc, char const *argv[])
{
    cout << "Entering the main function." << endl;
    cout << "Creating the first object." << endl;
    Number n1;
    {
        cout << "Entering the block." << endl;
        cout << "Creating two more objects." << endl;
        Number n2, n3;
        cout << "Exiting the block." << endl;
    }
    cout << "Coming back to the main block." << endl;
    return 0;
}