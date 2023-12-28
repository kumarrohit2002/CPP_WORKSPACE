#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int count_sort(int n, const vector<double>& a, const vector<double>& b) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (abs(a[i] - a[i - 1]) >= b[i - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n - 1);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) cin >> b[i];
    cout << count_sort(n, a, b) << endl;
    return 0;
}

