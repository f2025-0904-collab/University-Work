#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

     cout<<"using simple for loop"<<endl;
     for(int i=0; i<numbers.size() ;i++)
    {
        cout << numbers[i] << " ";
    }
      cout<<"using range-based for loop"<<endl;
      for(int value : numbers)
      {
        cout << value << " ";
    }
      return 0;
  }
       
      