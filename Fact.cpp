#include <iostream>
using namespace std;

int main() 
{
    int num, fac=1;
    cout << "Enter the numbers: ";
    cin >> num;
        
    for (int i = 1; i <=num; i++)
        fac = fac * i; 

    cout << "Factorial of " << num << " prime numbers: " << fac << endl;
    
    return 0;
}
