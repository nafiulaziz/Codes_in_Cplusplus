#include <iostream>
using namespace std;

int main() {
    int n = 100;
    int count;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
    }

    cout << "There are " << count << " prime numbers up to " << n << "." << endl;

    return 0;
}
