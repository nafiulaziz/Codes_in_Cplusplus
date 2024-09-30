#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main()
{
    int n;
    cout << " Enter the size of array: " ;
    cin >> n;

    int arr[n];

    cout << " Enter the values of arrays: " ;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << " The values in the array : ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}
