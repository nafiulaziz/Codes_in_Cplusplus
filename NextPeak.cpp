#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = {7,1,5,3,6,4};
    int l = num[0];
    int k = 0;
    int s = 0;
    
    for(int i=0; i<num.size(); i++)
    {
        if(num[i] < l)
        {
            l = num[i];
            k = i;
        }
    }
    
    int m = l;

    for(int i=k; i<num.size(); i++)
    {
        if(num[i] > m)
            m = num[i];
    }
    
    cout << "Lowest number is: " << l << endl;
    cout << "Position is : " << k << endl;
    cout << "Profit is : " << m << endl;
    return 0;
}
