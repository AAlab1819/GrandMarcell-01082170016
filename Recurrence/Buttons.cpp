#include<bits/stdc++.h>
using namespace std;

int main() {
    int NumberOfButtons;
    long long int Push=0;
    cin>>NumberOfButtons;
    Push = NumberOfButtons;
    for (int i=1; i<NumberOfButtons; i++)
    {
        Push=Push+((NumberOfButtons-i)*i);
    }
    cout<<Push<<endl;

    return 0;
}
