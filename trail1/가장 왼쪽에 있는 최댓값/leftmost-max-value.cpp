#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int end = N - 1;

    while (end >= 0) {

        int max = a[0];
        int maxIndex = 0;

        for (int i = 1; i <= end; i++) {
            if (a[i] > max) {
                max = a[i];
                maxIndex = i;
            }
        }

        cout << maxIndex + 1 << " ";

        end = maxIndex - 1;
    }

    return 0;
}