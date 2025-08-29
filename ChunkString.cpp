#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s = "helloworld";
    int chS = 3;
    int n = s.length();
    vector <string> st;
    
    for(int i = 0; i < n; i+=chS)
    {
        string temp = "";
        
        for (int j = i; j < i + chS && j < n; j++) 
            temp +=s[j];
        
        st.push_back(temp);
    }
    
    for(string x : st)
        cout << x << endl;

    return 0;
}
