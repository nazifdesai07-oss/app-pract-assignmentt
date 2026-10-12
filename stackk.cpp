// Name: sajid pathan
// Roll No: 27
// Division: SY-12

#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int bookID;
    Node *next;
};

// Head pointer
Node *head = NULL;

// Function to insert at beginning
void insertBeginning(int id)
{
    Node *newNode = new Node;
    newNode->bookID = id;
    newNode->next = head;
    head = newNode;

    cout << "Book ID inserted at beginning.\n";
}

// Function to insert at end
void insertEnd(int id)
{
    Node *newNode = new Node;
    newNode->bookID = id;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Book ID inserted at end.\n";
}

// Function to delete from beginning
void deleteBeginning()
{
    if (head == NULL)
    {
        cout << "List is empty. Nothing to delete.\n";
        return;
    }

    Node *temp = head;
    head = head->next;

    cout << "Deleted Book ID: " << temp->bookID << endl;
    delete temp;
}

// Function to display list
void display()
{
    if (head == NULL)
    {
        cout << "Library book list is empty.\n";
        return;
    }

    cout << "Book IDs in the Library:\n";

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->bookID << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function̥
int main()
{
    cout << "Name        : sajid pathan" << endl;
    cout << "Roll No.   : 27" << endl;
    cout << "Division : SY-12" << endl;

    int choice, id;

    do
    {
        cout << "\n===== Library Book ID Management =====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete from Beginning\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> id;
            insertBeginning(id);
            break;

        case 2:
            cout << "Enter Book ID: ";
            cin >> id;
            insertEnd(id);
            break;

        case 3:
            deleteBeginning();
            break;

        case 4:
            display();
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}