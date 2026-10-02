#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4] = {};
    int matrix_arr = 0;
    int row_arr[4] = {};

    cout << fixed;
    cout.precision(1);

    for(int i=0;i<2;i++){
        int column_arr = 0;
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
            matrix_arr += arr[i][j];
            column_arr += arr[i][j];
            row_arr[j] += arr[i][j];
        }
        cout << (float)column_arr/4 << ' ';
    }
    cout << endl;

    for(int i=0;i<4;i++){
        cout << (float)row_arr[i]/2 << ' ';
    }

    cout << endl;
    cout << (float)matrix_arr/8;
    return 0;
}