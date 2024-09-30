#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<conio.h>

  using namespace std;


  class Stack
{
    private:
    int arr[5];
    int top;


  public:
  Stack()
  {
      top = -1;
      for(int i = 0; i < 5; i++)
      {
          arr[i] =0;
      }
  }

  bool isEmpty()
  {
      if(top == -1)
      {
          return true;
      }
      else
      {
          return false;
      }
  }

  bool isFull()
  {
      if(top == 4)
      {
          return true;
      }
      else
      {
          return false;
      }
  }

  void push(int v)
  {
      if(isFull())
      {
          cout << " Stack is overflow. " << "\n";
      }
      else
      {
          top++;
          arr[top] = v;
      }
  }

  int pop()
  {
      if(isEmpty())
      {
         cout << " Stack is underflow. " << "\n";
         return 0;
      }
      else
      {
          int popval = arr[top];
          arr[top] = 0;
          top--;
          return popval;
      }
  }

  void display()
  {
    cout << "All values in the Stack are " << endl;
    for (int i = 4; i >= 0; i--)
    {
       cout << arr[i] << endl;
    }
  }

};

int main()
{
    Stack s1;
    int op,pos,val;

    cout << " It is a stack. "<< endl;

    do
    {
        cout << " What operation do you want to perform? Select an option. " << endl;
        cout << " 1.Push " << endl;
        cout << " 2.pop " << endl;
        cout << " 3.isEmpty " << endl;
        cout << " 4.isFull " << endl;
        cout << " 5. display" << endl;
        cout << " 6.Clear Screen " << endl;

        cin >> op;
        switch(op)
        {
           case 1:
               cout << " Enter a number to push. " <<endl;
               cin >> val;
               s1.push(val);
               break;

            case 2:
                cout << " Pop is called. - Poped value is: " << s1.pop() <<endl;
                break;

            case 3:
                if(s1.isEmpty())
                    cout << " Stack is empty. " << endl;
                else
                    cout << " Stack is not empty. " << endl;
                break;

            case 4:
                if(s1.isFull())
                    cout << " Stack is full. " << endl;
                else
                    cout << " Stack is not full. " << endl;
                break;

            case 5:
                    cout << "Display Function Called - " << endl;
                    s1.display();
                     break;

            case 6:
                system( "cls" );
                break;

            default:
                cout << " Enter a proper number. " << endl;

        }


    }while(op!=0);

 return 0;
}
