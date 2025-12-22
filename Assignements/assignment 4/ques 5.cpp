#include <iostream>
using namespace std;
int main()
{
    int m=4,n=4;
    int original[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
      int rotated[4][4];

      for(int i=0; i<m ;i++){
        for(int j=0; j<n ;j++){
            rotated[n-1-j][i]=original[i][j];
        }
      }

      cout<<"rotated matrix(90 degree counterclockwise)"<<endl;
      for(int i=0; i<m ;i++){
        for(int j=0; j<n ;j++){
            cout<<rotated[i][j]<<" ";
        }
        cout<<endl;
      }
 
}