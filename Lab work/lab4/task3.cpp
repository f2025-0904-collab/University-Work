#include <iostream>
using namespace std;
int main()
{
    int area,radius,length,width,base,height;
    int shapes;
    cout<<"Enter shapes"<<endl;
    cin>>shapes;
    cout<<"1.circle"<<endl;
    cout<<"2.rectangle"<<endl;
    cout<<"3.triangle"<<endl;

    switch(shapes)
    {
        case 1:
        cout<<"Enter radius of circle"<<endl;
        cin>>radius;
        area=3.14*radius*radius;
        cout<<"area of circle is"<<area<<endl;
        break;
        case 2:
        cout<<"Enter length and width of rectangle"<<endl;
        cin>>length>>width;
        area=length*width;
        cout<<"area of rectangle is"<<area<<endl;
        break;
        case 3:
        cout<<"Enter base and height of triangle"<<endl;
        cin>>base>>height;
        area=base*height;
        cout<<"area of triangle is"<<area<<endl;
        break;
        default:
        cout<<"invalid input"<<endl;
        break;

    }
       return 0;
}