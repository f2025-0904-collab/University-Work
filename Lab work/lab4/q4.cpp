#include <iostream>
using namespace std;
int main()
{
    int bill,unitsconsumed,connectiontype;
    cout<<"Enter bill";
    cin>>bill;
    cout<<"Enter units consumed";
    cin>>unitsconsumed;
    cout<<"Enter connection type";
    cin>>connectiontype;
    cout<<"1.Domestic";
    cout<<"2.Commercial";

    switch(connectiontype)
    {
        case 1://domestic
        cout<<"Enter bill on domestic type";
        if(unitsconsumed <= 100)
           bill=unitsconsumed*10;
        else
           bill=(100*10)+((unitsconsumed-100)*15);
           break;
        case 2://commercial
        cout<<"Enter bill on commercial type";
        if(unitsconsumed <=100)
           bill=unitsconsumed*20;
        else
           bill=(100*20)+((unitsconsumed-100)*25);
           break;
        default:
           cout<<"invalid input";
    }
          return 0;
}


        
           
           

            
    


