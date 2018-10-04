#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, l;
    bool Spruce = true;
    cin >> n;
    map <int, vector <int> > tree;


    for(int i = 2; i <= n; i++)
    {
        cin >> p;
        tree[p].push_back(i);
    }
    for(int i = 1; i <= n; i++)
    {
        if(tree[i].size() == 0)
        {
            continue;
        }
        else {
            l = 0;

            for(int j = 0 ; j < tree[i].size(); j++)
            {
                if(tree[tree[i][j]].size() == 0)
                {
                    l++;
                }
            }

            if(l<3)
            {
               Spruce = false;
            }

        }
    }

    if(Spruce)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
