#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int xorSum = 0;
        for (int num : nums) {
            xorSum ^= num;
        }

        // Rule: If initial XOR is 0, Alice wins immediately
        if (xorSum == 0) return true;

        // Otherwise, Alice wins if number of elements is even
        return nums.size() % 2 == 0;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2}; // XOR = 0 => Alice wins
    cout << boolalpha << sol.xorGame(nums) << endl; // true

    vector<int> nums2 = {1, 2, 3}; // XOR = 0 => Alice wins
    cout << boolalpha << sol.xorGame(nums2) << endl; // true

    vector<int> nums3 = {1, 1, 1}; // XOR != 0, size is odd => Alice loses
    cout << boolalpha << sol.xorGame(nums3) << endl; // false

    return 0;
}
