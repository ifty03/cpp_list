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

void removeDuplicates(Node *start)
{
    Node *tmp1, *tmp2, *dup;
    tmp1 = start;
  
    while (tmp1 != NULL && tmp1->next != NULL)
    {
        tmp2 = tmp1;
        
        while (tmp2->next != NULL)
        {
          
            if (tmp1->val == tmp2->next->val)
            {
                
                dup = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete(dup);
            }
            else 
                tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
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
        input(head, teal, val);
    }

    removeDuplicates(head);
    print(head);

    return 0;
}
