#include <iostream>

using namespace std;

int y;
bool IsY(int y){
    if(y%4 != 0){
        return false;
    }
    if(y%100 == 0 && y%400 != 0){
        return false;
    }
    return true;
}

int main() {
    cin >> y;
    
    if(IsY(y)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    
    return 0;
}