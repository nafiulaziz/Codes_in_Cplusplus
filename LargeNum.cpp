#include <iostream>
using namespace std;

int main() {
    
    int a, b, c,lar;
    cout << "Enter the first num: ";
    cin >> a;
    cout << "Enter the 2nd num: ";
    cin >> b;
    cout << "Enter the 3rd num: " ;
    cin >> c;
    
    if(a>b)
    {
        if(a>c)
            lar = a;
        else
            lar = c;
    }
    else
    {
        if(b>c)
            lar = b;
        else
            lar = c;
    }
    
    cout << "Highest Number is: " << lar;

    return 0;
}
