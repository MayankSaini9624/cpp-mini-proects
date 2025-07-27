#include <iostream>
using namespace std;
int main(){
    cout<<"THIS IS A NUMBER GUSSING GAME I HAVE BUILT IN C++"<<endl;
    int a=25;
    cout<<"HINT:"<<endl;
    cout<<"1. IT IS A NUMBER THST IS ODD BUT NOT PRIME"<<endl;
    cout<<"2. IT THIS THE NUMBER WHICH IS A SQUARE OF A SINGLE DIGIT NUMBER"<<endl;
    cout<<"3. APPROXIMATLY IN EVERY LANGUAGE AND CURRENCY THERE IS A WORD FOR THIS NUMBER"<<endl;
    cout<<"4. AND THE IMPORTANT ONE THE NUMBER IS LSS THAN 100"<<endl;
    int b=0;
    while(1==1){
        cout<<"GUESS THE NUMBER:";
        cin>>b;
        if(b<100){
            if(a==b){
            cout<<"WOW! YOU GUESS IT"<<endl;
            exit(0);
        }
        else if(a<b){
            cout<<"GUESS LOWER!"<<endl;
        }
        else if(a>b){
            cout<<"GUESS HIGHER!"<<endl;
        }
    }
    else{
        cout<<"INVALID INPUT"<<endl;
    }
    }
    return 0;
    
}