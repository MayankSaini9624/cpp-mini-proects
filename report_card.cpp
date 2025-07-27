#include <iostream>
using namespace std;
int main(){
    string name;
    int studentClass;
    int marks_of_hindi;
    int marks_of_eng;
    int marks_of_phy;
    int marks_of_chem;
    int marks_of_math;
    char Grade;
   
     
     cout<<"THIS IS A REPORT CARD"<<endl;
     cout<<"ENTER THE NAME OF THE STUDENT = ";
     cin>>name;
      for (char c : name) {
        if (!isalpha(c)) {
            cout << "INVALID NAME: Name should not contain numbers and symbols !" << endl;
            exit(0);}}
     cout<<"ENTER THE CLASS OF THE STUDENT = ";
     cin>>studentClass;
    if(studentClass != 11 && studentClass != 12){
        cout<<"ONLY FOR CLASS 11th  AND  12th";
        exit(0);}
     else{
        cout<<"ENTER THE MARKS OF HINDI = ";
        cin>>marks_of_hindi;
        cout<<"ENTER THE MARKS OF ENGLISH = ";
        cin>>marks_of_eng;
        cout<<"ENTER THE MARKS OF PHYSICS = ";
        cin>>marks_of_phy;
        cout<<"ENTER THE MARKS OF CHEMISTRY = ";
        cin>>marks_of_chem;
        cout<<"ENTER THE MARKS OF MATHS = ";
        cin>>marks_of_math;
        int obtained=(marks_of_chem)+(marks_of_eng)+(marks_of_phy)+(marks_of_math)+(marks_of_hindi);
        double percentage=obtained/5.0;
        if((marks_of_hindi > 100 || marks_of_eng > 100 || marks_of_phy > 100 ||
            marks_of_chem > 100 || marks_of_math > 100 ||
            marks_of_hindi < 0 || marks_of_eng < 0 || marks_of_phy < 0 ||
            marks_of_chem < 0 || marks_of_math < 0)){
            cout<<"MARKS CAN'T GET HIGHER THAN 100"<<endl;
            exit(0);}
         else{
            cout<<"-----------------------------"<<endl;
            cout<<"TOTAL MARKS OBTAINED = "<<obtained<<endl;
            cout<<"-----------------------------"<<endl;
            cout<<"PERCENTAGE = "<<percentage<<"%"<<endl;
            cout<<"-----------------------------"<<endl;
            if(1==1){
                if(obtained>=90){
                    Grade='A';
                    cout<<"-----------------------------"<<endl;
                    cout<<"GRADE = "<<Grade<<endl;
                    cout<<"-----------------------------"<<endl;
                    cout<<"EXECELLENT"<<endl;
                    cout<<"-----------------------------"<<endl;
                 }
                 if((obtained>=70)&&(obtained<90)){
                    Grade='B';
                    cout<<"-----------------------------"<<endl;
                    cout<<"GRADE = "<<Grade<<endl;
                    cout<<"-----------------------------"<<endl;
                    cout<<"GOOD"<<endl;
                    cout<<"-----------------------------"<<endl;
                 }
                 if((obtained>=50)&&(obtained<70)){
                    Grade='C';
                    cout<<"-----------------------------"<<endl;
                    cout<<"GRADE = "<<Grade<<endl;
                    cout<<"-----------------------------"<<endl;
                    cout<<"AVERAGE"<<endl;
                    cout<<"-----------------------------"<<endl;
                 }
                 if((obtained>=33)&&(obtained<50)){
                    Grade='D';
                    cout<<"-----------------------------"<<endl;
                    cout<<"GRADE = "<<Grade<<endl;
                    cout<<"-----------------------------"<<endl;
                    cout<<"NEEDS IMPROVEMENT"<<endl;
                    cout<<"-----------------------------"<<endl;
                 }
                 if((obtained>30)&&(obtained<33)){
                    cout<<"GRADE = GRACED"<<endl;
                    cout<<"-----------------------------"<<endl;
                    cout<<"GRACED PASS"<<endl;
                    cout<<"-----------------------------"<<endl;
                 }
                 if(obtained<30){
                    Grade='F';
                    cout<<"-----------------------------"<<endl;
                    cout<<"GRADE = "<<Grade<<endl;
                    cout<<"-----------------------------"<<endl;
                    cout<<"FAILED"<<endl;
                    cout<<"-----------------------------"<<endl;
    system("pause");
    return 0;             }}}}}