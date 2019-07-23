#include<iostream>
using namespace std;

class bank {
    int ac;
    int reset=0;
    float balance, amount, shorta;

    public:
    void deposit();
    void withdraw();
    void chkbalance();
    int menu();
};
void bank::deposit() {
    cout<<"\nEnter Account Number:";
    cin>>ac;
    if(ac==1001)
    {
        cout<<"\nEnter Amount you want to Deposit:";
        cin>>amount;
        balance=balance+amount;
        cout<<"\n\nMessage: You have successfully deposited Rs."<<amount<<" into your account.\n\nYour Current Balance is:"<<balance<<"\n\n";
        reset++;
    }
    else
    {
        cout<<"You have entered invalid account number";
    }
}

void bank::withdraw() {
    cout<<"Enter Account Number:";
    cin>>ac;
    if(ac==1001)
    {
        cout<<"Enter Amount you want to Withdraw:";
        cin>>amount;
        if(amount>balance)
        {
            shorta=amount-balance;
            cout<<"\n\nYou cannot withdraw Rs."<<amount<<" as your account balance is Rs."<<balance<<"\n\nYou are short of Rs."<<shorta;
        }
        else
        {
            balance=balance-amount;
            cout<<"You have Withdrawn Rs."<<amount<<" Successfully\n\n Your account balance is:"<<balance<<"\n\n";
        }
    }
    else
    {
        cout<<"You have entered invalid account number";
    }
}

void bank::chkbalance() {
    cout<<"Enter Account Number:";
    cin>>ac;
    if(reset==0)
    {
        balance=0;
    }
    if(ac==1001)
    {
        cout<<"Your Account balance is Rs."<<balance<<"\n\n";
    }
    else
    {
        cout<<"Account Doesn't Exist!!";
    }
}
int main()
{
    bank ob;
    int ch;
   do {
        cout<<"\n\n\n1.Deposit\n2.Withdraw\n3.Balance Enquiry\n4.Exit\n\n";
        ch=ob.menu();
        switch(ch)
        {
        case 1:ob.deposit();
            break;
        case 2:ob.withdraw();
            break;
        case 3:ob.chkbalance();
            break;
        }
    }while(1);
}

int bank::menu()
{
    int ch;
    cout<<"\nEnter your Choice:";
    cin>>ch;
    return ch;
}
