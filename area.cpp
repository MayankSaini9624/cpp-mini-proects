#include <iostream>
using namespace std;
int main(){
   cout<<"CHOOSE-\n1.AREA,\n2.VOLUME"<<endl;
   int aov;
   cout<<"SELECT -";
   cin>>aov;
   if(aov==1){
     cout<<"THIS IS A AREA CALCULATOR"<<endl;
     cout<<"SELECT THE AREA.\n1.RECTANGLE,\n2.SQUARE,\n3.TRIANGLE,\n4.CIRCLE,\n5.EXIT"<<endl;
     int option;
     cout<<"YOUR PREFRENCE=";
     cin>>option;
     if(option==1){
        double length;
        double width;
        cout<<"LENGTH=";
        cin>>length;
        cout<<"WIDTH=";
        cin>>width;
        cout<<"THE AREA IS = "<<(length*width)<<endl;
        exit(0);
     }
     else if(option==2){
        double length;
        cout<<"LENGTH=";
        cin>>length;
        cout<<"THE AREA IS = "<<(length*length)<<endl;
        exit(0);
     }
     else if(option==3){
        double base;
        double height;
        cout<<"BASE=";
        cin>>base;
        cout<<"HEIGHT=";
        cin>>height;
        cout<<"THE AREA IS = "<<(height*base)/2<<endl;
        exit(0);
     }
     else if(option==4){
        double radius;
        cout<<"RADIUS=";
        cin>>radius;
        cout<<"THE AREA IS = "<<(3.14*radius*radius)<<endl;
        exit(0);
     }
     else if(option==5){
        cout<<"YOU CHOOSE TO EXIT"<<endl;
        exit(0);
     }
     else{
        cout<<"INVALID PREFRENCE"<<endl;
        exit(0);
     }}
     else if(aov==2){
        cout<<"THIS IS A VOLUME CALCULATOR"<<endl;
        cout<<"SELECT-\n1.CUBOIDE,\n2.CUBE,\n3.CYLINDER,\n4.SPHERE,\n5.EXIT"<<endl;
        int optionforvol;
        cout<<"ENTER YOUR PREFRENCE =";
        cin>>optionforvol;
        if(optionforvol==1){
            double length;
            double width;
            double height;
            cout<<"ENTER THE VALUE OF LENGTH = ";
            cin>>length;
            cout<<"ENTER THE VALUE OF WIDTH = ";
            cin>>width;
            cout<<"ENTER THE VALUE OF HEIGHT = ";
            cin>>height;
            cout<<"THE VOLUME WIL BE = "<<(length*width*height)<<endl;
            exit(0);
         }  
         else if(optionforvol==2){
            double length;
            cout<<"ENTER THE VALUE OF LENGTH = ";
            cin>>length;
            cout<<"THE VOLUME WIL BE = "<<(length*length*length)<<endl;
            exit(0);
         }  
         else if(optionforvol==3){
            double radius;
            double height;
            cout<<"ENTER THE VALUE OF RADIUS = ";
            cin>>radius;
            cout<<"ENTER THE VALUE OF HEIGHT = ";
            cin>>height;
            cout<<"THE VOLUME WIL BE = "<<(3.14*radius*radius*height)<<endl;
            exit(0);
         }  
         else if(optionforvol==4){
            double radius;
            cout<<"ENTER THE VALUE OF RADIUS = ";
            cin>>radius;
            cout<<"THE VOLUME WIL BE = "<<(4.1867*radius*radius*radius*3.14)<<endl;
            exit(0);}
         else if(optionforvol==5){
            cout<<"YOU CHOOSE TO EXIT"<<endl;
            exit(0);
         }
         else{
            cout<<"INVALID PREFRENCE"<<endl;
            exit(0);}}
     else{
        cout<<"INVALID COMMAND"<<endl;
        exit(0);
     }
     system("pause");
     return 0;}
    