#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x=0;
    cin>>n;
    char name[n];
    cin>>name;
    for(int i = 0; i<n; i++){
        if (name[i] == 'x' && name[i+1] == 'x' && name[i+2] == 'x'){
            x = x + 1;
        }
    }
    cout<<x<<endl;
    return 0;
}
