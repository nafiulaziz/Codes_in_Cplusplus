#include <iostream>
#include <vector>

using namespace std;

bool tarFind(vector<int> &arr, int tar){
    int l = 0;
    int r = arr.size() - 1;
        
    while(l<r){
        
        int sum = arr[l] + arr[r];
        
        if(sum == tar)
            return true;
            
        else if(sum < tar)
            l++;
            
        else
            r--;
    }
    return false;
}


int main() {
    vector<int> arr = {-4,-3, -1, 0, 1, 2};
    int tar = -10;
    
    if(tarFind(arr, tar))
        cout << "true";
    else
        cout << "false";

    return 0;
}
