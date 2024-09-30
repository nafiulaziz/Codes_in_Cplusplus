#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, counter=1;

    cout << " Enter the number: " ;
    cin >> n;
    cout << "TicTic started: \n";

    do
    {
        cout << " " << counter;
    }
    while(++counter<= n);

    cout << "\nTime is up.";

    getch();
    return 0;
}
