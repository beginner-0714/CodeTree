#include <iostream>

using namespace std;

int Y, M, D;

void Ymd(int y,int m,int d){
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(y%4 == 0 && y%100 == 0 && y%400 == 0){
        days[1] = 29;
    }
    else if(y%4 == 0 && y%100 == 0){
    }
    else if(y%4 == 0){
        days[1] = 29;
    }
    else{
    }

    if(days[m-1]>=d){
        if(m>=3 && m <=5){
            cout << "Spring";
        }
        else if(m>=6 && m<=8){
            cout << "Summer";
        }
        else if(m>=9 && m<=11){
            cout << "Fall";
        }
        else if(m==12 || m<=2){
            cout << "Winter";
        }
    }
    else{
        cout << -1;
    }
}
int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    Ymd(Y,M,D);

    return 0;
}