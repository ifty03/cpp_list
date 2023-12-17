#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void input(Node *&head, Node *&teal, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        teal = newNode;
    }
    else
    {
        teal->next = newNode;
        teal = newNode;
    }
}

void print(Node *head, int x)
{
    Node *temp = head;
    int index = 0;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
        index++;
    }

    if (flag)
    {
        cout << index << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
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
            input(head, teal, val);
        }

        int x;
        cin >> x;
        print(head, x);
    }

    return 0;
}
