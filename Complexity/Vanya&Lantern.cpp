#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l,radius;
    float rad;
    cin>>n>>l;
    int array1 [n];

    for(int i =0; i<n;i++)
    {
        cin>>array1[i];
    }
    sort(array1,array1+n);
    radius=max(array1[0],l-array1[n-1])*2;

    for(int i=0;i<n-1;i++)
    {
        radius=max(radius,array1[i+1]-array1[i]);
    }
    rad=radius;
    cout.precision(10); //biar angka belakang koma banyak
    cout<< fixed <<rad/2.0<<endl;

    return 0;
}
