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

void print(Node *head, Node *head2)
{
    int size1 = 0;
    int size2 = 0;
    Node *temp = head;
    Node *temp2 = head2;

    while (temp != NULL)
    {
        size1++;
        temp = temp->next;
    }
    while (temp2 != NULL)
    {
        size2++;
        temp2 = temp2->next;
    }
    int flag = 0;
    if (size1 == size2)
    {
temp =head;
temp2 =head2;
        while (temp != NULL)
        {
            if (temp->val != temp2->val)
            {
                flag = 1;
             
                break;
            }
            else
            {
                temp2 = temp2->next;
                temp = temp->next;
            }
        }
    }
    else
    {
       
        flag = 1;
    }

if(flag){

    cout <<"NO"<< endl;
}else{
   cout <<"YES"<< endl; 
}
}

int main()
{

    Node *head1 = NULL;
    Node *teal1 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        input(head1, teal1, val);
    }

    Node *head2 = NULL;
    Node *teal2 = NULL;

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        input(head2, teal2, val2);
    }

    print(head1, head2);

    return 0;
}
