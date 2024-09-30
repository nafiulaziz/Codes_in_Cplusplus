#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main()
{
    int n;
    cout << " Enter the size of array: " ;
    cin >> n;

    int arr[n];

    cout << " Enter the values of arrays: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << " The values in the array : ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int maxNo = arr[0];
    int minNo = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maxNo)
        {
            maxNo = arr[i];
        }

        if(arr[i] < minNo)
        {
            minNo = arr[i];
        }
    }

    cout << " Maximum Number is: " << maxNo << endl;
    cout << " Minimum Number is: " << minNo << endl;


    return 0;
}
