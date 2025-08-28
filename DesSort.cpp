#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> num = {2,0,2,1,1,0};
    int n = num.size();
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(num[j] < num[j+1])
            {
                int m = num[j];
                num[j] = num[j+1];
                num[j+1] = m;
            }
        }
    }
    
    cout << "Sorted vector: " << endl;
    
    for(int x : num)
     cout << x << endl;
    
    return 0;
}
