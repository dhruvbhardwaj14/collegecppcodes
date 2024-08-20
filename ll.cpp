#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class SLL
{
public:
    node *first = NULL, *last = NULL, *temp, *temp1;
    void add_to_tail();
    void add_to_head();
    void add_in_btw();

    void delte_tail();
    void delete_head();
    void delete_in_btw();

    void display();
};

void SLL::add_to_tail()
{
    temp = new node;
    cout << "Enter the data you want to enter : ";
    int d;
    cin >> d;
    temp->data = d;
    temp->next = NULL;

    if (first == NULL)
    {
        first = last = temp;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
}

void SLL ::add_to_head()
{
    temp = new node;
    cout << "Enter the data you want to enter : ";
    int d;
    cin >> d;
    temp->data = d;
    temp->next = NULL;

    if (first == NULL)
    {
        first = last = temp;
    }
    else
    {
        temp->next = first;
        first = temp;
    }
}

void SLL::add_in_btw()
{
    temp = new node;
    int d, after;
    cout << "Enter the node after which you want to insert node : ";
    cin >> after;
    cout << "Enter the data you want to enter : ";
    cin >> d;
    temp->data = d;
    temp->next = NULL;

    if (first == NULL)
    {
        first = last = temp;
    }

    temp1 = first;
    while (temp1->data != after)
    {
        temp1 = temp1->next;
    }

    temp->next = temp1->next;
    temp1->next = temp;
}

void SLL::delte_tail()
{
    if (first == NULL)
    {
        cout << "Linked list is empty.";
    }
    else if (first == last)
    {
        delete first;
        last = NULL;
    }
    else
    {
        temp = first;
        while (temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        temp->next = NULL;
        last = temp;
    }
}

void SLL::delete_head()
{
    if (first == NULL)
    {
        cout << "Linked list is empty.";
    }
    else if (first == last)
    {
        delete first;
        last = NULL;
    }
    else
    {
        temp = first;
        delete first;
        first = temp->next;
    }
}

void SLL::delete_in_btw()
{
    temp = first;
    cout << "Enter the node you want to delete : ";
    int d;
    cin >> d;
    while (temp->next->data != d)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
}

void SLL::display()
{
    temp = first;
    if (first == NULL)
    {
        cout << "Linked list is empty.";
    }
    while (temp->next != last)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << temp->data << "->" << last->data;
    cout << endl;
}

int main()
{
    int choice;
    char ch = 'y' || 'Y';
    do
    {
        cout << "***** SINGLY LINKED LIST ******\n"
             << "\n1. Add a node to head."
             << "\n2. Add a node to tail."
             << "\n3. Add a node in between."
             << "\n4. Delete a head node."
             << "\n5. Delete a tail node."
             << "\n6. Delete a node in between."
             << "\n7. Display linked list."
             << "\n8. To exit.";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        SLL ob;
        switch (choice)
        {
        case 1:
            ob.add_to_head();
            break;
        case 2:
            ob.add_to_tail();
            break;
        case 3:
            ob.add_in_btw();
            break;
        case 4:
            ob.delete_head();
            break;
        case 5:
            ob.delte_tail();
            break;
        case 6:
            ob.delete_in_btw();
            break;
        case 7:
            ob.display();
            break;
        case 8:
            exit(0);
        default:
            cout << "You entered a wrong choice !";
            break;
        }

        cout << "\nDo you want to continue(Y/N) : ";
        cin >> ch;
        cout << endl
             << endl;

    } while (ch == 'y' || ch == 'Y');
    return 0;
}