#include<iostream>
using namespace std;

int countones(int arr[][100], int m, int n) {
    int rowno = -1;
    int ja = INT_MAX;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1) {
                if (j < ja) {
                    rowno = i;
                    ja=j;
                }
                break;
            }
        }
    }
    return rowno;
}

int main() {
    int m;
    cout << "Enter the number of rows in the array: ";
    cin >> m;
    int n;
    cout << "Enter the number of columns in the array: ";
    cin >> n;
    int arr[100][100];  // Assuming maximum size of 100x100
    cout << "Enter the elements of the array (0 or 1):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int rowno = countones(arr, m, n);
    cout << "Row number with maximum ones: " << rowno+1 << endl;
    return 0;
}

