
#include <iostream>
#include<conio.h>

using namespace std;

int main()
{

    int num;

    cout << " Enter the number : ";
    cin >> num;

    if((num%2)==0)
    {
        cout << " The number " << num << " is even ";
    }

    else
    {
        cout << " The number " << num << " is odd " ;
    }

    getch();
    return 0;
}
