#include <iostream>
#include <string>
#include<conio.h>
using namespace std;

class stack
{
private:
    int top;
    int arr[5];

public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
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
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "stackunderflow" << endl;
            return 0;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int count()
    {
        return (top + 1);
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stackunderflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "value changed at location" << pos << endl;
    }
    void display()
    {
        cout << "all values in the stack are" << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    stack s1;
    int option, position, value;

    do
    {
        cout << "what opertaion do you want to perform ?select an option number.Enter zero to exit." << endl;
        cout << "1.push()" << endl;
        cout << "2.pop()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.peek()" << endl;
        cout << "6.count()" << endl;
        cout << "7.change()" << endl;
        cout << "8.display()" << endl;
        cout << "9.clear screen" << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item to push itno stack" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout<<"pop function is callled  - poped value:"<<s1.pop()<<endl;
            break;
        case 3:
            if(s1.isEmpty()){
                cout<<" Stack is Empty"<<endl;
            }
            else{
                cout<<"stack is not Empty"<<endl;
            }
            break;
        case 4:
            if(s1.isFull()){
                cout<<"stack is Full"<<endl;
            }    
            else{
                cout<<"stack is not full"<<endl;
            }
        case 5:
            cout<<"ENter the position of item you want:"<<endl;
            cin>>position;
            cout<<"peek function called - value at position :"<<position<<"is"<<s1.peek(position)<<endl;
            break;
        case 6:
            cout<<"number of items int the stack are:"<<s1.count()<<endl;
        case 7:
            cout<<"change the functiom called -:"<<endl;
            cout<<"enter position of item you want change :"<<endl;
            cin>>position;
            cout<<endl;
            cout<<"enter the value of item you want change :"<<endl;
            cin>>value;
            s1.change(position,value);
            break;
        case 8:
            cout<<"Display function called - "<<endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;  

        default:
            cout<<"Enter proper option number "<<endl;
            break;
        }

    } while (option != 0);

    return 0;
}