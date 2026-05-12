#include <iostream>

using namespace std;

//node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//Stack class
class stack
{
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }
    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }

        Node *temp = top;
        top = top->next;
        cout << "Pop value: " << temp->data << endl;
    }

   //peel/top operation: Retrive the value of the topest element without removing
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;

        }//return top->data;
    }

    //isEmpty operation: Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL;
    }
};


int main()
{
    stack s;
    int choice = 0;
    int value;
    
while (choice !=5)
{
    cout << "1.push\n";
    cout << "2.pop\n;
    cout << "3.peek\n;
    cout << "4.exit\n" << endl;
    cin >> choice;
