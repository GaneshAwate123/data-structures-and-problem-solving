#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
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
        if (rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
    int Count()
    {
        return (rear - front + 1);
    }
    void display()
    {
        cout << " All values in the Queue are :" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue q1;
    int option, value;

    do
    {
        cout << "\n what operation do you want to perform? Select option number. Enter 0 to exit. " << endl;
        cout << "1.Enqueue()" << endl;
        cout << "2.Dequeue()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.count()" << endl;
        cout << "6.display()" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter an item to enqueue in the queue:" << endl;
            cin >> value;
            q1.Enqueue(value);
            break;
        case 2:
            cout << "Dequeued value:" << q1.dequeue() << endl;
            break;
        case 3:
            if (q1.isEmpty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is not Empty" << endl;
            }
            break;
        case 4:
            if (q1.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "Queue is not full" << endl;
            }
            break;
        case 5:
            cout << "Cout operation \nCount of items is Queue :" << q1.Count() << endl;
            break;
        case 6:
            cout << "Display function called - " << endl;
            q1.display();
            break;

        default:
            cout<<"Enter proper option number."<<endl;
            break;
        }

    } while (option != 0);

    return 0;
}