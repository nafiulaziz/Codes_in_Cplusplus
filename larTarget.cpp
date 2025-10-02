#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void larTarget(vector<int> &arr){
    vector <int> arr2;
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r) {
        if(arr[l] < arr[r]){
            int sum = r * arr[l];
            arr2.push_back(sum);
        }
        else{
            int sum = r * arr[r];
            arr2.push_back(sum);
        }
        
        
        if(arr[l] < arr[r])
            l++;
        else
            r--;
        
    }
    
    int hi = *max_element(arr2.begin(), arr2.end());
    
    cout << hi;
}


int main() {
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    
    larTarget(arr);

    return 0;
}
