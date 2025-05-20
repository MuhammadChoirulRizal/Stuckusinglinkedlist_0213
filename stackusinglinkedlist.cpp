#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        next = NULL;
    }
};
class stack
{
private:
    node *top;

public:
    stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        node *newNode = new node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "push value:" << value << endl;
        return value;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
        }
        cout << "popeped value : " << top->data << endl;
        top = top->next;
    }
    void peek()
    {
        if (top == NULL)
        {
            cout << "List empty" << endl;
        }
        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }
    bool isEmpty()
    {
        return top == NULL;
    }
};
int main()
{
    stack stact;
    int choice = 0;
    int value;
    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2.pop\n";
        cout << "3. peek\n";
        cout << "4.exit\n";
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the value to push :";
            cin >> value;
            stact.push(value);
            break;
        case 2:
            if (!stact.isEmpty())
            {
                stact.pop();
            }
            else
            {
                cout << "stact is empty.cannot pop" << endl;
            }
            break;
       
    case 3:
            if (!stact.isEmpty())
            {
                stact.peek();
            }
            else
            {
                cout << "Stact is Empty. No top value." << endl;
            }
            break;
        
}