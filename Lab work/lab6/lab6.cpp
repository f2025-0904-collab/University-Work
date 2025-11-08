#include <iostream>
using namespace std;
int main()
{
    string password;
    bool loopbreak=false ;
    do{
        cout<<"Enter password"<<endl;
        cin>>password;
        if(password=="python123"){
            break;
        }
        
    } while(true);
    return 0;
}

    
     


