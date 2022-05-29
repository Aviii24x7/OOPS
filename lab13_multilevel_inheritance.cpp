/*Program to show multilevel inhertitance*/
#include <iostream>
using namespace std;
class RBI
{
public:
    RBI()
    {
        cout << " Reserve Bank of India " << endl;
    }
};
class SBI : public RBI
{
public:
    SBI()
    {
        cout << " State Bank of India " << endl;
    }
};
class BMB : public SBI
{
public:
    BMB()
    {
        cout << " Bhartiya Mahila Bank " << endl;
    }
};
int main(int argc, char const *argv[])
{

    BMB associateBank;

    return 0;
}