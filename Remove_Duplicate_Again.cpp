#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    int val;
    while (true)
    {
        cin >> val;
        if (val != -1)
        {
            myList.push_back(val);
        }
        else
        {
            break;
        }
    }
    myList.sort();
    myList.unique();

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}
