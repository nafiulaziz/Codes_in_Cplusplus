#include<bits/stdc++.h>
#include<climits>


using namespace std;


int linearS(int arr[], int n, int key)
{
   for(int i = 0; i < n; i++)
   {
       if(arr[i] == key)
       {
           return i;
       }
   }
   return -1;

}


int main()
{
    int n;
    cout << " Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << " Enter the values of arrays: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << " The searching value is: " ;
    cin >> key;
    cout << endl;
    cout << "The index you search is : " << linearS(arr,n,key) <<endl;



    return 0;
}
