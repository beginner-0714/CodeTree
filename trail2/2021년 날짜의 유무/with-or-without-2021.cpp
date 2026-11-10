#include <iostream>

using namespace std;

int M, D;
void Day(int m,int d){
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(days[m-1] >= d){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    Day(M,D);

    return 0;
}