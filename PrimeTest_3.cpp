#include <iostream>
#include<conio.h>


using namespace std;


bool isPrime(int num)
    {
         for(int i = 2; i < num; i++)
       {
           bool status = bool True;

           if(num % i == 0)
           {
              status = bool False;
           }

          return status;
       }
    }





int main()
{

    int num;


    cout << " Enter the number : " ;
    cin >> num ;



    if(isPrime(num))
    {
      cout << num  << " Number is Prime " << endl;
    }
    else
    {
      cout << num << " Number is not prime " << endl;
    }

     getch();
    return 0;

}
