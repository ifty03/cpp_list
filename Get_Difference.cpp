#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *next;

    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node *&head, Node *&teal, long long int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        teal = newNode;
        return;
    }
    else
    {
teal->next = newNode;
teal = newNode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    int min = temp->val;
    int max = temp->val;
    while (temp != NULL)
    {
        if (min > temp->val)
        {
            min = temp->val;
        }
        if (max < temp->val)
        {
            max = temp->val;
        }
        temp = temp->next;
    }
    long long int v = max - min;
    cout << v << endl;
}


int main()
{
    long long int val;
    Node *head = NULL;
    Node *teal = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            // Node *teal = get_teal(head);
            insert(head, teal, val);
        }
    }

    print(head);

    return 0;
}