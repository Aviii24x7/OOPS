#include<iostream>
using namespace std;
class math{
    public:
    int power(double m, int n)
    {int i; double ans=1;
    for(i=1;i<=n;i++){
        ans=ans*m;
    }
    return ans;
    }
    };
    int main()
        {
            double result =0;
            math p;
            result= p.power(2,4);
         cout<<"2 raise to the power 4 is equals to" << result;
            return 0;
        }

