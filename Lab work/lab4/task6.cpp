#include <iostream>
using namespace std;
int main()
{
    int num;
    int even,odd;
    cout<<"Enter number(0 to stop)"<<endl;
    cin>>num;

    while(num!=0)
    switch(num%2)
    {
        case 0:
          even++;
          break;
        case 1:
         odd++;
         break;
}
     cout<<"Enter number(0 to stop)"<<endl;
     cin>>num;
       return 0;
}






