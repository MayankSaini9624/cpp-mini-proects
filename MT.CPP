#include <iostream>
using namespace std;
void mt(int a,int b){

    if((a>0)&&(b>0)&&(b>a)){
    for(int i=a;i<=b;i++){
        cout<<"TABLE OF "<<i<<endl;
        for(int p=1;p<=10;p++){
            
            cout<<i<<"X"<<p<<" = "<<p*i<<endl;
        }
        cout<<endl;
        
    }}
    else{
        cout<<"Numbers must be greater than 0 and 'to' must be greater than 'from'";
        exit(0);
    }
}
int main(){
    int a,b;
    cout<<"from = ";
    cin>>a;
    cout<<"to = ";
    cin>>b;
    
    mt(a,b);
    return 0;
}