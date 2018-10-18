#include <bits/stdc++.h>

using namespace std;
void heapify(int arr[], int n, int i)
{
    int biggest = i; 
    int left = 2*i + 1; 
    int right = 2*i + 2; 
    
    if (left < n && arr[left] > arr[biggest])
        biggest = left;

    if (right < n && arr[right] > arr[biggest])
        biggest = right;

    if (biggest != i)
    {
        swap(arr[i], arr[biggest]);
        heapify(arr, n, biggest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);   
        heapify(arr, i, 0);
    }
}
int main()
{
    int number;
    float median;
    cin>>number;
    int List[number];
    for (int i=0; i<number; i++)
    {
        cin>>List[i];
        heapSort(List, i+1);
        
        if ((i+1)%2==0)
        {
            median = List[i/2]+List[(i/2)+1];
            median/=2;
        }
        
        else
        {
            median = List[(i+1)/2];
        }
        cout<<fixed<<setprecision(1)<<median<<endl; //to print out decimals
    }
    return 0;
}
