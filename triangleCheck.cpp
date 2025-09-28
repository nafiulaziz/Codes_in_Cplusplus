#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num = {1,2,4};
    bool tri = false;
    int x = num[0];
    int b = num[1];
    int c = num[2];
    int out;
    
    if(x+b>c && x+c>b && b+c>x)
        tri = true;
    
    if(tri)
        out = x+b+c;
    else
        out = 0;
    
    cout << out;

    return 0;
}
