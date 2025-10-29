#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int quantity1,quantity2;
    string name1,name2;
    float price1,price2,total1,total2;
    cout<<"Enter first product name:";
    cin>>name1;
    cout<<"Enter price:";
    cin>>price1;
    cout<<"Enter quantity:";
    cin>>quantity1;
    cout<<"Enter second product name:";
    cin>>name2;
    cout<<"Enter price:";
    cin>>price2;
    cout<<"Enter quantity:";
    cin>>quantity2;
    total1=quantity1*price1;
    total2=quantity2*price2;
    cout<<left<<setw(15)<<"item"<<right<<setw(10)<<"quantity"<<right<<setw(10)<<"price"<<right<<setw(10)<<"total"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<left<<setw(15)<<quantity1<<right<<setw(10)<<price1<<right<<setw(10)<<total1<<endl;
    cout<<left<<setw(15)<<quantity2<<right<<setw(10)<<price2<<right<<setw(10)<<total2<<endl;
    return 0;
 

}