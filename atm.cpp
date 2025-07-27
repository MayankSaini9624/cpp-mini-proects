#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    float balance=10000;
    cout<<"WELCOME TO SIMPLE ATM MACHINE"<<endl;
    int pin=1234;
    string input_pin;
    float withdraw;
    float deposit;
    cout<<" "<<endl;
    cout<<"ENTER YOUR 4 DIGIT PIN=";
    cin>> input_pin;
     if(input_pin.length()!=4){
         cout<<"INVALID LENGTH OF PIN"<<endl;
         exit(0);     }

     
     else{ 
         if (stoi(input_pin)==pin){
             int options;
                 while(1==1){
                    cout<<"---MENU---"<<endl;
                    cout<<"1. Check Balance"<<endl;
                    cout<<"2. Withdraw Money"<<endl;
                    cout<<"3. Deposit Money"<<endl;
                    cout<<"4. Exit"<<endl;
                    cout<<"ENTER YOU'R PREFRENCE=";
                    cin>>options;
                     if (options==1){
                         cout<<"YOU'R CURRENT BALANCE IS "<<balance<<endl;
                         break;
                     }
                     else if (options==2){
                         cout<<"ENTER THE AMMOUNT FOR WITHDRAW = ";
                         cin>>withdraw;
                          if (withdraw>balance){
                             cout<<"nhi hai itna paise tere pass nalle ja kama ke aa"<<endl;
                             cout<<"current balance"<<endl;
                             cout<<balance<<endl;
                             break;
                         }
                         else{
                        
                            cout<<"WITHDRAWED AMMOUNT = "<<withdraw<<endl;
                            cout<<"REMAING AMMOUNT = "<<(balance-withdraw)<<endl;
                            break;
                         }
                     }
                     else if (options==3){
                         cout<<"ENTER THE CURRENT AMMOUNT TO DEPOSITE= ";
                         cin>>deposit;
                         cout<<"YOU'R CURRENT AMMOUNT=";
                         cout<<(balance+deposit)<<endl;
                         break;
                     }
                     else if (options==4){
                         cout<<"YOU CHOOSE TO EXIT"<<endl;
                         break;
                     }
                     else{
                         cout<<"INVALID COMMAND"<<endl;
    
         }}}}}