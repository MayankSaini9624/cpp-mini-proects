#include <iostream>
using namespace std;
int main(){
    cout<<"THIS IS A SIMPLE CALCULATOR BUT IT ONLY CAN DO WITH 2 DIGIT AT A TIME"<<endl;
    while(1==1){
        cout<<"ENTER THE PREFRENCE"<<endl;
        cout<<"1.ADD"<<endl;
        cout<<"2.SUBT"<<endl;
        cout<<"3.PRODUCT"<<endl;
        cout<<"4.DIVISION"<<endl;
        cout<<"5.exit"<<endl;

        double a=0;
        double b=0;
        int option =0;
        cout<<"ENTER THE PREFRENCE:";
        cin>>option;
        if (option==1){
            cout<<"ENTER THE VALUE 1:"<<endl;
            cin>>a;
            cout<<"ENTER THE VALUE 2:"<<endl;
            cin>>b;
            cout<<"THE ADDITION="<<(a+b)<<endl;
           }
        else if (option==2){
            cout<<"ENTER THE VALUE 1:"<<endl;
            cin>>a;
            cout<<"ENTER THE VALUE 2:"<<endl;
            cin>>b;
            cout<<"THE SUBTRACT="<<(a-b)<<endl;
            }
        else if (option==3){
            cout<<"ENTER THE VALUE 1:"<<endl;
            cin>>a;
            cout<<"ENTER THE VALUE 2:"<<endl;
            cin>>b;
            cout<<"THE PRODUCT="<<(a*b)<<endl;
            }
        else if (option==4){
            cout<<"ENTER THE VALUE 1:"<<endl;
            cin>>a;
            cout<<"ENTER THE VALUE 2:"<<endl;
            cin>>b;
            cout<<"THE division="<<(a/b)<<endl;
            }
        else if (option==5){
            cout<<"YOU CHOOSE TO EXIT"<<endl;
            exit(0);
            }
        else{
            cout<<"INVALID COMMAND"<<endl;
            exit(0);
        }
    }
}