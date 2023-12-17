#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
};


int main (){
Node a,b;
a.val=10;
a.next=&b;
b.val=200;

cout<<a.val<<endl;
cout<<a.next->val;

  return 0;  
}