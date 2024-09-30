#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, val, i = 0;

    stack<int> st;

    while(i++ < 5)
    {
        cout << " Enter the value ";
        cin >> val;
        cout << " Before push, Stack size: " << st.size() << endl;
        st.push(val);
        cout << " After push, Stack Size: " << st.size() << endl << endl;
    }

    cout << endl << " Now we perform the pop " << endl;

    while(!st.empty())
    {

        cout << endl << " before pop, Stack Size: " << st.size() << endl;
        st.pop();
        cout << " After pop, Stack Size: " << st.size() << endl << endl;
    }

    cin >> n;
    cout << " Enter the number: " << n << endl;

    return 0;
}
