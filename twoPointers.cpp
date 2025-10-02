#include <iostream>
#include <vector>

using namespace std;

void twoPoint(vector<int> &arr){
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r) {
        int sum = arr[l] + arr[r];
        cout << "l=" << arr[l] << ", r=" << arr[r] << " -> sum = " << sum << endl;

        l++;
        r--;
        
    }
}

int main() {
    vector<int> arr = {-3, -1, 0, 1, 2};
    
    twoPoint(arr);

    return 0;
}
