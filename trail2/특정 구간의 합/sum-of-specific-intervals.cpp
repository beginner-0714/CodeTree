#include <iostream>

using namespace std;

int n, m;
int arr[101];
int queryA1[101];
int queryA2[101];

void hap(int m,int x[101]){
    int sum;
    for(int i=0;i<m;i++){
        sum = 0;
        for(int j=queryA1[i];j<=queryA2[i];j++){
            sum += x[j];
        }
        cout << sum << endl;
    }
}
int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> queryA1[i] >> queryA2[i];
    }

    // Please write your code here.
    hap(m,arr);

    return 0;
}