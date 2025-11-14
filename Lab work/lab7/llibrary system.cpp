#include <iostream>
using namespace std;
int main()
{
    int numbooks;
    cout<<"Enter number of books " << endl;;
    cin>>numbooks;
    int totalfine=0;
    for(int i=1;i<=numbooks;i++)
    {
        int numberdays;
        int fine=5;
        cout <<"Enter how many days book is late "<5<i<<endl;
        cin>>numberdays;
        for(int j=2;j<=numberdays;j++)
        {
            fine=fine*2;
            if(fine>1000)
            {
                fine=1000;
            }
        }
        cout<<"Bookfine"<< i <<": "<<fine<<endl;
        totalfine += fine;
    }
    cout<<"Your total fine is"<<totalfine<<endl;
    return 0;
}
      