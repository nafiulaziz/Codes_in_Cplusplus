#include <iostream>
using namespace std;

int main() 
{
    int n=0, sum=0;
    cout << "Enter the till you wanna Add: ";
    cin >> n;
    
    for(int i=0; i<n; i++)
        sum = sum + i; 
    
    cout << "The num till " << n << " number is: " << sum; 
    
        // Method 2: WHILE LOOP
    int sum2 = 0;
    int i = 0;
    cout << "\n2. Using WHILE loop:" << endl;
    while(i < n) {
        sum2 = sum2 + i;
        i++;
    }
    cout << "Sum = " << sum2 << endl;
    
    return 0;
}
