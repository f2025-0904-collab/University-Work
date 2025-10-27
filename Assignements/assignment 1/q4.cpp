#include <iostream>//library for input,output operations.
#include <iomanip>//library used to control format operators.
using namespace std;
int main()
{
    int x,y;
    //two integer type variable declared.
    x=2;
    y=3;
    //assigned value to variable.

    x=x+y;
    y=x-y;
    x=x-y;
    //operations for swapping the values.

    cout<<"first variable is:"<<x<<endl;
    cout<<"second variable is"<<y<<endl;
    //printed the swapped values.
    return 0;

}