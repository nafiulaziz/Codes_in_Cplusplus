#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "First: " << a << ", Second: " << b << endl;
    int sum = a + b;
    cout << "Sum of two numbers is: " << sum << endl;
    
    return 0;
}
