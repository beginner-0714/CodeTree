#include <iostream>

using namespace std;

int a;
int c;
char o;

void Caculate(int a,char o, int c){
    if(o == '+'){
        cout << a << " + " << c << " = " << a+c;
    }
    else if(o == '-'){
        cout << a << " - " << c << " = " << a-c;
    }
    else if(o == '*'){
        cout << a << " * " << c << " = " << a*c;
    }
    else if(o == '/'){
        cout << a << " / " << c << " = " << a/c;
    }
    else{
        cout << "False";
    }
    
}
int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    Caculate(a,o,c);

    return 0;
}