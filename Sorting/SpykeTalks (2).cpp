#include <iostream>

using namespace std;

void gnomeSort(int arr[], int n)
{
    int index = 0;

    while (index < n) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            index--;
        }
    }
}

int main()
{
    int n, temp,checkdouble = 0;
    cin>>n;
    int id[n];
    for(int i=0; i<n; i++)
    {
        cin>>id[i];
    }
    gnomeSort(id, n);
    for (int i = 0; i<n;i++)
    {
        if(id[i]!= 0 && id[i] == id[i+1])
        {
            checkdouble++;
            if ( id[i] != 0&& id[i] == id[i+2])
            {
                checkdouble = -1;
                break;
            }
        }
    }
    cout<<checkdouble<<endl;
    return 0;
}
