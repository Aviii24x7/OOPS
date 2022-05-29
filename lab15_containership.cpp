#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string name;
    int weight;
    Animal(){};
    Animal(string nam, int wei)
    {
        name = nam;
        weight = wei;
    };
};
class Pet
{
public:
    Animal dog;
    void petHelth()
    {
        cout << "Enter the Name of the pet " << endl;
        getline(cin, dog.name);
        cout << "Enter the weight of pet " << endl;
        cin >> dog.weight;
    };
    void Display()
    {
        cout << "Name of the Pet is  " << dog.name << endl;
        cout << "The weight of the pet is  " << dog.weight << endl;
    };
};
int main(int argc, char const *argv[])
{
    Pet mypet;
    mypet.petHelth();
    mypet.Display();

    return 0;
}