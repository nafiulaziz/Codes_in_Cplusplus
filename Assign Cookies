#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); // Sort greed factors
        sort(s.begin(), s.end()); // Sort cookie sizes

        int child = 0;  // pointer for g
        int cookie = 0; // pointer for s

        while (child < g.size() && cookie < s.size()) {
            if (s[cookie] >= g[child]) {
                // Cookie can satisfy the child
                child++;
            }
            // Move to the next cookie anyway
            cookie++;
        }

        return child;
    }
};

// Example usage
int main() {
    Solution solution;

    vector<int> g = {1, 2, 3}; // Greed factors
    vector<int> s = {1, 1};    // Cookie sizes

    int result = solution.findContentChildren(g, s);
    cout << "Maximum number of content children: " << result << endl; // Output: 1

    return 0;
}
