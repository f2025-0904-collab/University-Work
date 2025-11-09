#include <iostream>
using namespace std;
int main()
{
    int secretnumber =7;
    int guess;
    cout<<"Enter secret number =7"<<endl;
    cin>>secretnumber;
    cout<<"guess the number between 1 and 10"<<endl;
    cin>>guess;

    while(guess!=secretnumber)
    {
    switch(guess>secretnumber)
    {
        case 1:
        cout<<"Too high:try again"<<endl;
        break;
        case 0:
        switch(guess<secretnumber)
        {
              case 1:
              cout<<"Too low:try again"<<endl;
              break;
        }
           break;
    }
          cin>>guess;
    }
           cout<<"Congratulations! correct guess"<<endl;
           return 0;

}