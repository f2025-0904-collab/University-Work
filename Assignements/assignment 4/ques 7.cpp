#include <iostream> 
#include <vector>
using namespace std;
int main()
{
  int n;
  cout<<"Enter size of square matrix"<<endl;
  cin>>n;

  vector<vector<int>> matrix(n, vector<int>(n));

  cout<<"Enter matrix elements row by row:"<<endl;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
        cin>>matrix[i][j];
    }
  }
    cout<<"Matrix in snake pattern:"<<endl;
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0){
            for(int j=0; j<n; j++)
            {
            cout<<matrix[i][j]<<" ";
        }
    }
       else{
       for(int j=n-1; j>=0; j--)
       {
         cout<<matrix[i][j]<<" ";
       }    
    }
}
   cout<<endl;
   return 0;
}
