#include <iostream>

using namespace std;

// Inline function to calculate the sum of squares of first n even and odd numbers
inline void sumOfSquares(int n, int &evenSum, int &oddSum) {
    evenSum = 0;
    oddSum = 0;
    
    for (int i = 1; i <= 2 * n; i++) {
        if (i % 2 == 0) {
            evenSum += i * i;
        } else {
            oddSum += i * i;
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int evenSum, oddSum;
    sumOfSquares(n, evenSum, oddSum);
    
    cout << "Sum of squares of the first " << n << " even numbers: " << evenSum << endl;
    cout << "Sum of squares of the first " << n << " odd numbers: " << oddSum << endl;
    
    return 0;
}

