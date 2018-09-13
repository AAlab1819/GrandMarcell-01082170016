#include <iostream>

using namespace std;

void gnomeSort(int arr[], int arr1[], int n)
{
    int index = 0;

    while (index < n) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            swap(arr1[index], arr1[index - 1]);
            index--;
        }
    }
}
int main()
{
    int n, s, DieDrag=0;
    cin>>s>>n;
    int x[n], y[n];
    for(int i = 0; i <= n-1; i++)
    {
        cin>>x[i]>>y[i];
    }
    gnomeSort(x, y, n);
    for(int i = 0; i < n; i++)
    {
        if(s>x[i]&&i==0)
        {
            DieDrag+=s+y[i];

        }
        else if ( DieDrag>x[i])
        {
            DieDrag+=y[i];
        }
        else if( DieDrag<x[i])
        {
            DieDrag=0;
            break;
        }
        else if (DieDrag==x[i])
        {
            DieDrag=0;
            break;
        }
    }
    if(DieDrag>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
