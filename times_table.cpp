#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int r, c;
    int row = 10;
    int col = 10;
    int mul [row] [col] ;

    cout << "\t\t======================\n" ;
    cout << "\t\t Multiplication Table\n" ;
    cout << "\t\t======================\n" ;

    for(int j=1; j<=col; j++)
       cout << "     " << j;

    cout << "  \n=======================================";
    cout << "=================================\n";

    for(int i=0; i<row; i++)
    {
        r = i+1;
        cout << r << "   |";

        for(int j=1; j<=col; j++)
        {
            c = j;
            mul[i][j]= r*c;
            cout << mul[i][j] << "     ";
        }
        cout << "\n";
    }
    getch();
}
