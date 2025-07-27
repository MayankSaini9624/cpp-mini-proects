#include <iostream>
using namespace std;
int main(){
    cout<<"THIS A SMALL PROGRAMM THAT DICIDE THAT ARE YOU ELIGIBLE FOR VOTING I INDIA OR NOT"<<endl;
    int age;
    cout<<"ENTER YOU'R AGE"<<endl;
    cin>>age;
    if(age<=0){
        cout<<" invalid age"<<endl;
    }
    else if(age<18){
        cout<<"NO , YOU ARE NOT ELIGIBLE FOR VOTING"<<" WAIT FOR "<<(18-age);
    }
    else {
        cout<<"YES , YOU ARE ELIGIBLE FOR VOTING ";
    }
    return 0;
}