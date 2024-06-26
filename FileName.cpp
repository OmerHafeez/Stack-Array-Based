#include<iostream>
using namespace std;
class Stack {
public:
    static const int maxsize = 100;
    int arr[maxsize];
    int top;
    Stack()
    {
        top = -1;
    }


    void push(int data)
    {
        if (top == maxsize)
            cout << "Max size reached" << endl;
        else
            arr[++top] = data;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack is already empty" << endl;
        else
            top--;
    }

    int isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    void size()
    {
        cout << "Number of elemets in stack are : " << top << endl;
    }

    int peek()
    {
        return arr[top];
    }

};


int main()
{
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();
    cout << "Top element after pop: " << myStack.peek() << endl;

    myStack.pop();
    myStack.pop(); // Pop the remaining elements

    if (myStack.isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}