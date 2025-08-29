#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s = "hell";
    vector <string> st;
    sort(s.begin(), s.end());
    
    do
        st.push_back(s);
    while (next_permutation(s.begin(), s.end()));
    
    for(string x : st)
        cout << x << endl;

    return 0;
}
