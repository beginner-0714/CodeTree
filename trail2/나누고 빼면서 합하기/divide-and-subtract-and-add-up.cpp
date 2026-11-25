#include <iostream>

using namespace std;

int n, m;
int A[100];

int s_sum(int n, int m, int x[100]){
    int sum = 0;
    while(m>=1){
        sum += x[m-1];
        if(m%2 == 0){
            m /= 2;
        }
        else{
            m -= 1;
        }
    }
    return sum;
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    cout << s_sum(n,m,A);

    return 0;
}