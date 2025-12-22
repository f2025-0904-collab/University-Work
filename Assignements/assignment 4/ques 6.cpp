#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cout<<" Enter size of square matrix: "<<endl;
    cin>>N;

    vector<vector<int>> matrix(N, vector<int>(N));

    cout<<" Enter matrix of distinct elements: "<<endl;
    for(int i=0; i<N ;i++)
    {
        for(int j=0; j<N ;j++)
        {
            cin>>matrix[i][j];
        }
    }
      vector<int> flattenmatrix;
      for(int i=0; i<N ;i++)
      {
        for(int j=0; j<N ;j++)
        {
            flattenmatrix.push_back(matrix[i][j]);
        }
      }  
        sort(flattenmatrix.begin() , flattenmatrix.end());
        
        vector<vector<int>> sortedmatrix(N, vector<int>(N));
        int index = 0;
        for(int i=0; i<N ;i++)
        {
            for(int j=0; j<N ;j++)
            {
                sortedmatrix[i][j] = flattenmatrix[index];
                index++;
            }
         }
           for(int i=0; i<N ;i++)
           {
             for(int j=0; j<N ;j++)
             {
                cout<<sortedmatrix[i][j]<<" ";
             }
             cout<<endl;
           }
             return 0;
}