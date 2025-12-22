#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cout<<"Enter numbers of elements:";
    cin>>N;

    vector<int> numbers(N);
    int value;

    for(int i=0; i<N ;i++){
        cin>>value;
        numbers.push_back(value);
    }
      return 0;
}