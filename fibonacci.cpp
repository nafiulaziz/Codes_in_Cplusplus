#include <iostream>

using namespace std;

int main() {
    int a=0;
    int b=1;
    
    cout << "Fibonacchi Series." << endl;

    for(int i=0; i<9; i++){
        int c = a+b;
        cout << c << endl;
        a=b;
        b=c;
    }

    return 0;
}
