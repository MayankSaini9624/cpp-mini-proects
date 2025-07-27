#include <iostream>
using namespace std;
int main(){
    string username,password;
    cout<<"ENTER USERNAME:"<<endl;
    cin>>username;
    cout<<"ENTER PASSWORD:"<<endl;
    cin>>password;
    if ((username=="root")&&(password=="mayanksaini")){
        cout<<"YOU'R LOGGED IN"<<endl;
    }
    else if ((username=="root")&&!(password=="mayanksaini")){
        cout<<"INCORRECT PASSWORD"<<endl;
    }
    else if (!(username=="root")&&(password=="mayanksaini")){
        cout<<"INCORRECT USERNAME"<<endl;
    }
    else if (!(username=="root")&&!(password=="mayanksaini")){
        cout<<"INCORRECT USERNAME AND PASSWORD"<<endl;
    }
   
    
    return 0;
}