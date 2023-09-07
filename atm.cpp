#include<iostream>
using namespace std;
class atm 
{
    int a,b,choice1,balance=1000,f,g,pin1,pin2,num1,num2,num3;
    public: 
    atm()
    {
          cout<<"\v\v";
    cout<<"\t\t\t|| WELCOME TO SBI ATM ||\n\n";
    
    cout<<"Sorry for the inconvineance only english language is there\n\n";
    cout<<"Please insert your atm card \n\n";
    cout<<"Press 1 if you entered your chip card : ";
    cin>>a;
    while(a==1)
    {
        cout<<"\n";
        cout<<"You have sucessfully entered your atm card \n\n";
        break ;
    }
    while(a!=1)
    {
        cout<<"\n";
        cout<<"Invalid input\n";
        cout<<"Press 1 if you entered your chip card : ";
        cin>>a;
        if(a==1)
        {
            cout<<"\n";
            cout<<"You have sucessfully entered your atm card \n\n";
            break;    
        }
        
    }
    
    cout<<"Hi , Please do not remove your chip card during the whole transaaction\n\n";
    
    cout<<"Enter no. between 10 to 99 : ";
    cin>>b;
    
    while(b>=10 || b<=99)
    if(b>=10 && b<=99)
    {
        break;
    }
    else
    {
        cout<<"\n";
        cout<<"Invalid input\n";
        cout<<"Enter no. between 10 to 99 : ";
        cin>>b;
        
    }
    cout<<"\n";
       
        
    }
    
    void basicdata ()
    {
        atmpin1 ();
    cout<<"\n";
    
        cout<<"Choose the options whatever you want! \n\n";
        cout<<"Enter 1 for balance enquiry !\n";
        cout<<"Enter 2 for cash withdrawl !\n";
        cout<<"Enter 3 for cash deposit !\n";
        cout<<"Enter 4 for pin generation !\n";
        cout<<"Enter 5 for mini statement !\n";
        cout<<"Enter 6 for other information !\n";
        cout<<"Enter 7 for fund transfer !\n";
        cout<<"Enter 8 for exit !\n";
        cout<<"\n";
        cout<<"Please enter your choice : ";
        cin>>choice1;
        cout<<"\n";
        switch(choice1)
        {
            case 1 : 
            accounttype ();
            atmpin1 ();
            cout<<"\n";    
            cout<<"Your transaaction is being processed ,Please wait\n\n";
            
            cout<<"Balance available in your account is :  "<<balance;
            cout<<"\n\n";
            break;
            
            case 2 : 
            accounttype ();
            atmpin1 ();
            cout<<"\n";
            cout<<"Enter how much amount you want to withdrawl :";
            cin>>f;
            cout<<"\n\n";
            cout<<"Please wait your transaaction is being processed\n\n";
            
            if(f>balance)
            {
                cout<<"Insufficient balance \n\n";
            }
            else{
                cout<<"You get ruppees "<<f<<"  \n\n";
            cout<<"You have  "<<balance-f <<"  amount remaining \n\n";
            }
            break;
            
            case 3: 
            accounttype ();
            atmpin1 ();
            cout<<"\n";
            cout<<"Enter how much amount you want to deposit : ";
            cin>>g;
            cout<<"\n\n";
            cout<<"Please wait your transaaction is being processed\n\n";
            cout<<"You have sucessfully deposited amount : "<<g;
            cout<<"\n\n";
            cout<<"Now You have "<<balance+g <<" ruppees in bank account \n\n";
            break;
            
            case 4:
            accounttype ();
            atmpin1 ();
            cout<<"\n\n";
            cout<<"Enter your new atm pin : ";
            cin>>pin1;
            cout<<"\n";
            cout<<"Re-enter your atm pin : ";
            cin>>pin2;
            cout<<"\n";
            if(pin1== pin2)
            {
                cout<<"\n";
            }
            else 
            {
                while(pin1!=pin2)
                {
                    cout<<"Invalid input \n";
                    cout<<"Re-enter your atm pin : ";
                    cin>>pin2;
                    cout<<"\n";
                    
                }
            }
            cout<<"Your transaaction is being processed , Please wait \n\n";
                    cout<<"Your pin is changed \n\n";
                
            cout<<"Now your new atm pin is : "<<pin1;
            cout<<"\n\n";
            break;
            
            case 5: 
            accounttype ();
            atmpin1 ();
            cout<<"\n";
            cout<<"No transaaction till date\n\n";
            break;
            
            case 6:
            cout<<"For others information select the following alternatives : \n";
            cout<<" (i) Talk to our customer care helpline no. 1900 \n";
            cout<<" (ii) Visit the respective branch \n ";
            cout<<"\n\n";
            break;
            
            case 7:
            accounttype ();
            atmpin1 ();
            cout<<"\n";
            cout<<"Enter the 10 digit account no. of that person : ";
            cin>>num1;
            cout<<"\n";
            cout<<"Re-enter the 10 digit account no. of that person : ";
            cin>>num2; 
            cout<<"\n";
            if(num1==num2)
            {
                
            }
            else 
            {
             while(num1!=num2)   
            {
                cout<<"\n";
            cout<<"Invalid input \n";
                cout<<"Please Re-enter the correct 10 digit account no. of that person :";
                cin>>num2;
                
            }
            }    
                    cout<<"\n";
                
                
            cout<<"Enter the amount which you want to transfer : ";
            cin>>num3;
            
            if(num3>balance)
            {
                cout<<"\n";
                cout<<"Insufficient balance \n\n";
            }
            else 
            {
                atmpin1 ();
                cout<<"\n";
                cout<<"Your transaaction is being processed \n\n";
                cout<<num3<<" ruppees is transfer to that person \n\n";
                cout<<"remaining amount is "<<balance-num3;
                cout<<"\n\n";
            }
            break;
            
            case 8:
            break;        
            
        }
        cout<<"Please remove your atm card \n\n";
            cout<<"THANK YOU ";
        
}
void atmpin1 ( )
{
    int atmpin;
    cout<<"\n";
    cout<<"Please entered your four digit atm pin : ";
    cin>>atmpin;
    
    while(atmpin==1234)
    {
        
        break;
    }
    while(atmpin!=1234)
    {
        cout<<"\n";
        cout<<"Invalid input\n";
        cout<<"Please entered your correct atm pin : ";
        cin>>atmpin;
            
    }
  }

void accounttype ()

{   
    int e;
    cout<<"Press 1 for saving account and press 2 for current account : ";
    cin>>e;
    
     if(e==1 || e==2)
     {
         
     }
     else
    
    {
        while(true)
        {
            cout<<"\n";
        cout<<"Invalid input \n";
        cout<<"Press 1 for saving account and press 2 for current account : ";
        cin>>e;
        if(e==1 || e==2)
        {
            break;
        }
        }
    }

}


    
};

int main()
{
    atm a1;
    a1.basicdata();
}