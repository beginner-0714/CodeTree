#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            if(A[j]<A[j+1]){
                int temp = A[j+1];
                A[j+1] = A[j];
                A[j] = temp;
            }
        }
    }

    cout << A[0] << ' ' << A[1];

    return 0;
}
