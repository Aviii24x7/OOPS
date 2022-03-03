#include <iostream>
using namespace std;
inline int add(int a, int b) //Inline function definition
{
return a+b;
}
 
int main()
{
cout<<".\n The addition of 562 and 451 gives the value:"<<add(562,451)<<"\n."; //Inline function call
return 0;
} 