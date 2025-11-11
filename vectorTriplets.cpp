#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Optimized function to find all triplets that sum to 0
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    
    // Step 1: Sort the array
    sort(nums.begin(), nums.end());
    
    // Step 2: Loop through each element
    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicates for first element
        if (i > 0 && nums[i] == nums[i-1]) {
            continue;
        }
        
        // Step 3: Use two pointers to find the other two numbers
        int left = i + 1;
        int right = nums.size() - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                
                result.push_back({nums[i], nums[left], nums[right]});
                
                left++;
                
                while (left < right && nums[left] == nums[left-1])
                    left++;
                
            }
            else if (sum < 0) 
                left++;  
            else
                right--; 
        }
    }
    
    return result;
}

void printTriplets(vector<vector<int>>& triplets) {
    if (triplets.empty()) {
        cout << "[]" << endl;
        return;
    }
    
    for (auto& triplet : triplets) {
        cout << "[" << triplet[0] << ", " 
             << triplet[1] << ", " 
             << triplet[2] << "]" << endl;
    }
}

int main() {
    
    cout << "===== Triplets =====" << endl;
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    cout << "Input: [-1, 0, 1, 2, -1, -4]" << endl;
    vector<vector<int>> result1 = threeSum(nums1);
    cout << "Output:" << endl;
    printTriplets(result1);
    
    return 0;
}
