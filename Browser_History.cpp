#include <bits/stdc++.h>
using namespace std;

// class Node {
//     public:
//     string val;
//     Node*next;
//     Node*prev;

//     Node(string val){
// this->val=val;
// this->next=NULL;
// this->prev=NULL;
//     }
// };

int main()
{
    list<string> myList;
    string val;
    while (true)
    {
        cin >> val;
        if (val != "end")
        {
            myList.push_back(val);
        }
        else
        {
            break;
        }
    }

    int n;
    cin >> n;
    string q;
    cin >> q;
    getchar();
    getline(cin, q);

    auto it = find(myList.begin(), myList.end(), q);
    
    if(q=="prev"){
        string previousValue = *--it;
        // if(previousValue){

        // }

    }else if(q=="next"){

    }else{
        if(it == myList.end()){
cout<<"Not Available"<<endl;
    }else{
        cout<<*it<<endl;
    }
    }

    for (string val : myList)
    {
        cout << val << " ";
    }

    return 0;
}
