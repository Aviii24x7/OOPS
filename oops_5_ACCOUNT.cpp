#include<iostream>
using namespace std;
class account{

    public:
    int accNo;
    double balance;

    void deposit(int addmoney){                           //addmoney=money deposited
        cout<<"\n\n-Account No.="<<accNo<<endl;
    
    cout<<"\n****************computing total balance*******************";
cout<<"\nbalance before action:"<<balance<<endl;
    balance= balance + addmoney;                          //updating balance

    cout<<"\ntotal balance is:"<<balance<<endl;
    }


        void withdraw(int negmoney){                       //negmoney= money withdrawwd
    cout<<"_\n\n-Account No.="<<accNo<<endl;        
    cout<<"\n****************computing total balance*******************";
cout<<"\nbalance before action:"<<balance<<endl;
    balance= balance - negmoney;

    cout<<"\ntotal balance is:"<<balance<<endl;
    }

    void simpleinterest(int rate){
            cout<<"_\n-Account No.="<<accNo<<endl;
        cout<<"\nthe interest money of the year is:"<<((balance*rate)/100);     //S.I.= Principle moneyxRatexTime/100
        cout<<"\n****************computing total balance*******************";
cout<<"\nbalance before action:"<<balance<<endl;
    balance= balance + ((balance*rate)/100);
    
    cout<<"\ntotal balance is:"<<balance<<endl;
    }

};
int main()
{
    account avi;                                        //making an object avi
    avi.accNo=1234556;
    avi.balance= 23456.23;

    avi.simpleinterest(2);                              //function calling from class account
    avi.withdraw(10000);
    avi.deposit(5000);

    
return 0;
}