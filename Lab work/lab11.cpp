#include <iostream>
using namespace std;
void weather(int temp[7][4]){
    string days[7]={
        "Monday","Tuesday","Wednesday",
        "Thursday","Friday","Saturday","Sunday"
    };
    for(int i=0; i<7; i++){
        cout<<"enter 4 temperature for "<< days[i] <<" ";
        for(int j=0; j<4; j++){
            cin >> temp[i][j];
        }
    }
}
void temperature(int temp[7][4]){
    int maxTemp=temp[0][0];
    int minTemp=temp[0][0];
    for(int i=0; i<7; i++){
        for(int j=0; j<4; j++){
            if(temp[i][j] > maxTemp){
                maxTemp = temp[i][j];
            }
            if(temp[i][j] < minTemp){
                minTemp = temp[i][j];
            }

            cout<<"Maximum Temperature"<<maxTemp<<endl;
            cout<<"Minumum Temperature"<<minTemp<<endl;
        }
    }
}
int main()
{
    int temp[7][4];
    weather(temp);
    temperature(temp);
    return 0;
}