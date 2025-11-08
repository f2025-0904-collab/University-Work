#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter choice(1-5)";
    cin>>choice;
    float num1,num2;
    cout<<"Enter num1 and num2";
    cin>>num1>>num2;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Exit";
    while(true)
    switch(choice)
    {
        case 1:
         cout<<"Addition is ="<<num1+num2<<endl;
         break;
        case 2:
         cout<<"Subtraction is ="<<num1-num2<<endl;
        break;
        case 3:
         cout<<"Multiplication is ="<<num1*num2<<endl;
         break;
        case 4:
         cout<<"Division is ="<<num1/num2<<endl;
         break;
        default:
         cout<<"invalid choice";
         break;
    }
           return 0;
}



