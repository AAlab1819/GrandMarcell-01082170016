#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map <string, int> password;
    string pass;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin>>pass;
        if (password.count(pass) == 1)
        {
            cout<<pass<<password[pass]<<endl;
            password[pass]++;
        }
        else
        {
            cout<<"OK"<<endl;
            password[pass] = 1;
        }
    }
    return 0;
}
