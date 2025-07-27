#include <iostream>
using namespace std;
int main(){
    int salary=0;
    cout<<"ENTER THE AMMOUNT OF YOU'R SALARY:"<<endl;
    cin>>salary;
    if(salary<300000){
        cout<<"YOU HAVE TO PAY inr="<<endl;
        float tax=salary*0;
        cout<<tax<<endl;
     }
     else if((300000<=salary)&&(salary<600000)){
        cout<<"YOU HAVE TO PAY inr="<<endl;
        float tax=salary*0.05;
        cout<<tax<<endl;
     }    
     else if((600000<=salary)&&(salary<900000)){
        cout<<"YOU HAVE TO PAY inr="<<endl;
        float tax=salary*0.1;
        cout<<tax<<endl;
     }    
     else if((900000<=salary)&&(salary<1200000)){
        cout<<"YOU HAVE TO PAY inr="<<endl;
        float tax=salary*0.15;
        cout<<tax<<endl;
     }    
     else if((1200000<=salary)&&(salary<1500000)){
        cout<<"YOU HAVE TO PAY inr="<<endl;
        float tax=salary*0.2;
        cout<<tax<<endl;
     }    
     else if(1500000<=salary){
        cout<<"YOU HAVE TO PAY inr="<<endl;
        float tax=salary*0.3;
        cout<<tax<<endl;
     }    
    return 0;
}