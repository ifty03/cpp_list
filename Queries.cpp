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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, int v)
{

    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void delete_pos(Node *head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos >= size(head))
    {
        return;
    }

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_head(Node *&head)
{
    if(head==NULL){
return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < t; i++)
    {
        int q;
        int v;
        cin >> q >> v;
        if (q == 0)
        {
            insert_head(head, v);
        }
        else if (q == 1)
        {
            insert_at_tail(head, v);
        }
        else if (q == 2)
        {
            if (v == 0)
            {
                delete_head(head);
            }
            else
            {

                delete_pos(head, v);
            }
        }

        print(head);
        cout << endl;
    }

    return 0;
}