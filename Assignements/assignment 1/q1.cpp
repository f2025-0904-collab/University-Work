#include <iostream>
//library is used for input,output operations.
#include <iomanip>
//library used to contol format operator
using namespace std;
int main() 
{ 
    float a,b;
    // two floating variables declared.
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    //input taken from the user.
    cout<<fixed<<setprecision(3);//3 decimal places.
    cout<<"Sum="<<a+b<<endl;
    cout<<"Difference="<<a-b<<endl;
    cout<<"Product="<<a*b<<endl;
    cout<<"Quotient="<<a/b<<endl;
    //floating point numbers are printed.
    int c=(int)a,d=(int)b;
    //two integer variables declared and type casted.
   
    cout<< "\n sum="<<c+d<<endl;
    cout<< "difference="<<c-d<<endl;
    cout<<"product="<<c*d<<endl;
    cout<<"quotient="<<c/d <<endl;
    //integer numbers are printed.
    return 0 ;

}
