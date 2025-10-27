#include <iostream>//library used for input,output operations.
#include <iomanip>//library used for contol format of data.
using namespace std;
int main()
{
    int a,b,c;
    //three integers type variable are declared.
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    //input taken.
    
   if(a>b&&a>c)
   cout<<"the largest number is:"<<a<<endl;
   if(b>a&&b>c)
   cout<<"the largest number is:"<<b<<endl;
   if(c>a&&c>b)
   cout<<"the larger number is:"<<c<<endl;
   else
   cout<<"None of them is larger:"<<endl;
//conditions for printing largest number.

   if(a<b&&a<c)
   cout<<"the smaller number is:"<<a<<endl;
   if(b<a&&b<c)
   cout<<"the smallest number is:"<<b<<endl;
   if(c<a&&c<b)
   cout<<"the smallest number is:"<<c<<endl;
   else if (a==b || a==c)
   cout<<"None of them is smaller:"<<endl;
//conditions for printing smallest number.
   
   

    if(a==b && b==c)
    cout<<"All numbers are equal:"<<endl;
     else
     cout<<"All numbers are not equal:"<<endl;

     //conditions for weather the numbers are printing or not.
     return 0;
}