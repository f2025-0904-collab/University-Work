#include <iostream>
using namespace std;
int main()
{
    int marks;
    char grade;
    cout<<"Enter marks of students"<<endl;
    cin>>marks;
    cout<<"Enter grade"<<endl;
    cin>>grade;
    
    if(marks>=90 && marks<=100)
    cout<<"grade=A";
    else if(marks>=80 && marks<=89)
    cout<<"grade=B";
    else if(marks>=70 && marks<=79)
    cout<<"grade=C";
    else if(marks>=60 && marks<=69)
    cout<<"grade=D";
    else
    cout<<"grade=F";
       return 0;

     
}