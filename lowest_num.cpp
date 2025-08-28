#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num = {7,1,5,3,6,4};
    int l = num[0];
    int k = 0;
    
    for(int i=0; i<num.size(); i++)
    {
        if(num[i] < l)
        {
            l = num[i];
            k = i;
        }
    }
    
    cout << "Lowest number is: " << l << endl;
    cout << "Position is : " << k;
    return 0;
}
