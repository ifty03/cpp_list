#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }
}

void palindrome(Node *head, Node *tail)
{
    Node *temp = head;
    Node *temp2 = tail;

    while (temp != NULL)
    {
        
        if (temp->val != temp2->val)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            temp = temp->next;
            temp2 = temp2->prev;
        }
    }
    cout << "YES";
}
int main()
{
    Node *head = NULL;
    Node *teal = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert(head, teal, val);
        }
    }
    palindrome(head, teal);

    return 0;
}
