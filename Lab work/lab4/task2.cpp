#include <iostream>
using namespace std;
int main()
{
    char grade;
    int percentage;
    cout<<"Enter percentage"<<endl;
    cin>>percentage;
    cout<<"Enter grade"<<endl;
    cin>>grade;

    switch(percentage/10)
    {
       case 10:
       case 9:
       cout<<"grade =A"<<endl;
       break;
       case 8:
       cout<<"grade =B"<<endl;
       break;
       case 7:
       cout<<"grade =C"<<endl;
       break;
       case 6:
       cout<<"grade =D"<<endl;
       break;
       default:
       cout<<"grade =F"<<endl;
       break;
    }
      return 0;
}