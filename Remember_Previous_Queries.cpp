#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);

            // normal print
            cout << "L ->"
                 << " ";
            for (auto e : myList)
            {
                cout << e << " ";
            }
            cout << endl;

            //   reverse print
            list<int> reverseList(myList);
            reverseList.reverse();
            cout << "R ->"
                 << " ";
            for (auto e : reverseList)
            {
                cout << e << " ";
            }
            cout << endl;

        }
        else if (x == 1)
        {
            myList.push_back(v);

            // normal print
            cout << "L ->"
                 << " ";
            for (auto e : myList)
            {
                cout << e << " ";
            }
            cout << endl;

            //   reverse print
            list<int> reverseList(myList);
            reverseList.reverse();
            cout << "R ->"
                 << " ";
            for (auto e : reverseList)
            {
                cout << e << " ";
            }
            cout << endl;

        }
        else if (x == 2)
        {
            int sz = myList.size();
            if(sz>v){
            myList.erase(next(myList.begin(),v));
            }
                       // normal print
            cout << "L ->"
                 << " ";
            for (auto e : myList)
            {
                cout << e << " ";
            }
            cout << endl;

            //   reverse print
            list<int> reverseList(myList);
            reverseList.reverse();
            cout << "R ->"
                 << " ";
            for (auto e : reverseList)
            {
                cout << e << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
