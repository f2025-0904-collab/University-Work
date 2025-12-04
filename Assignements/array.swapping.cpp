#include <iostream>
using namespace std;
int main()
{
   int arr[5]= {7,8,9,10,11};
   for(int i=0;i<5;i++)
   {
     cout<<arr[i]<<endl;
   }
     arr[0]=arr[0]+arr[4];
     arr[4]=arr[0]-arr[4];
     arr[0]=arr[0]-arr[4];
     arr[1]=arr[1]+arr[3];
     arr[3]=arr[1]-arr[3];
     arr[1]=arr[1]-arr[3];

     for(int i=0;i<5;i++)
     {
       cout << "swaped" << arr[i] <<endl;
     }
    }

