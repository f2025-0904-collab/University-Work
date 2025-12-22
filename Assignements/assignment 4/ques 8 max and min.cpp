#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int maxVal = numbers[0];
    int minVal = numbers[0];

    for (int i = 1; i < N; i++) {
        if (numbers[i] > maxVal)
            maxVal = numbers[i];
        if (numbers[i] < minVal)
            minVal = numbers[i];
    }

    cout << "Maximum: " << maxVal << "\n";
    cout << "Minimum: " << minVal << "\n";

    return 0;
}
