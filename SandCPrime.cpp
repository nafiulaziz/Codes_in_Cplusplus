#include <iostream>
using namespace std;

int main() 
{
    int c=0;
    int s=0;
    
    for(int n=2; n<=100; n++){
        bool isP = true;
        
        for(int i=2; i<n; i++){
            if(n%i ==0){
                isP= false;
                break;
            }
        }
            
        if(isP){
            c++;
            s+=n;
        }
    }
    
    cout << "Total prime numbers from 1 to 100: " << c << endl;
    cout << "Sum of prime numbers from 1 to 100: " << s << endl;
    
    return 0;
}
