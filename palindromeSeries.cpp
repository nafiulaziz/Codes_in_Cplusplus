#include <iostream>

using namespace std;

int main() {
    cout << "Palindrom Series." << endl;
    
    for(int i=0; i<100; i++){
        int num = i;
        int rev = 0;
        int temp = num;
        
        while(temp>0){
            int di = temp % 10;
            rev = rev * 10 + di;
            temp /= 10;
        }
        
        if(num == rev)
            cout << num <<endl;
    }

    return 0;
}
