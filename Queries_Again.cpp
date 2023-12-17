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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_normal(Node *head)
{
    Node *tmp = head;
        cout << "L ->"<<" ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
        cout << "R ->"<<" ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
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

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100->30
    tmp->next = newNode;           // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
}

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int pos;
        int val;

        cin >> pos >> val;

        if (size(head) < pos)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (pos == 0)
            {
                insert_head(head, tail, val);
            }
            else if (pos == size(head))
            {
                insert_tail(head, tail, val);
            }
            else
            {
                insert(head, pos, val);
            }
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}
