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
    cout<<"\n deposited money:"<<addmoney<<endl;
    cout<<"\ntotal balance is:"<<balance<<endl;
    }


        void withdraw(int negmoney){                       //negmoney= money withdrawwd
    cout<<"_\n\n-Account No.="<<accNo<<endl;        
    cout<<"\n****************computing total balance*******************";
cout<<"\nbalance before action:"<<balance<<endl;
    balance= balance - negmoney;
    cout<<"\n withdrawed money:"<<negmoney<<endl;
    cout<<"\ntotal balance is:"<<balance<<endl;
    }

    void simpleinterest(int rate){
            cout<<"_\n-Account No.="<<accNo<<endl;
        cout<<"\nthe interest money of the year is:"<<((balance*rate)/100);     //S.I.= Principle moneyxRatexTime/100
        cout<<"\n****************computing total balance*******************";
cout<<"\nbalance before action:"<<balance<<endl;
    balance= balance + ((balance*rate)/100);
    cout<<"\nthe yearly interest is:"<<((balance*rate)/100)<<endl;
    cout<<"\ntotal balance with added interest is:"<<balance<<endl;
    }

    void insufficientBalance(void){
        if(balance<1000){
            cout<<"\n\t\t\t\t******IMPORTANT MESSAGE******\n"<<endl;
            cout<<"you have insufficient Balance in your account. Kindly deposit some money.\n THANK TOU"<<endl;
        }
    }

};
int main()
{
    account avi;                                        //making an object avi
    avi.accNo=1234556;                                  //giving an account no.
    avi.balance= 23456.23;                              //money in account before any action

    avi.simpleinterest(2);                              //function calling from class account
    avi.withdraw(23000);                                //function calling from class account
    avi.insufficientBalance();
    avi.deposit(5000);  
    avi.insufficientBalance();                                //function calling from class account

    
return 0;
}