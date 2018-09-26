#include <bits/stdc++.h>
using namespace std;

int Array[1000000] = {0};
int IndexArrayMap[1000][1000] = {0};
int IndexArray = 1;
int PictureView = 0;

void FloodFill(string Sign[], int n, int m, int x, int y)
{
    IndexArrayMap[y][x] = IndexArray;
    if(y+1<n)
    {
        if(Sign[y+1][x] == '.' && IndexArrayMap[y+1][x] == 0)
        {
            FloodFill(Sign, n, m, x, y+1);
        }
        else if(Sign[y+1][x] == '*')
        {
            PictureView++;
        }

    }
    if(y-1>=0)
    {
        if(Sign[y-1][x] == '.' && IndexArrayMap[y-1][x] == 0)
        {
            FloodFill(Sign, n, m, x, y-1);
        }
        else if(Sign[y-1][x] == '*')
        {
            PictureView++;
        }
    }
    if(x+1<m)
    {
        if(Sign[y][x+1] == '.' && IndexArrayMap[y][x+1] == 0)
        {
            FloodFill(Sign, n, m, x+1, y);
        }
        else if(Sign[y][x+1] == '*')
        {
            PictureView++;
        }
    }
    if(x-1>=0)
    {
        if(Sign[y][x-1] == '.' && IndexArrayMap[y][x-1] == 0)
        {
            FloodFill(Sign, n, m, x-1, y);
        }
        else if(Sign[y][x-1] == '*')
        {
            PictureView++;
        }
    }
    return;
}

int main()

{
    int n, m, test;
    cin >> n >> m >> test;
    int x, y;
    string Sign[n];
    for(int i=0; i<n; i++)
    {
        cin>>Sign[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(Sign[i][j] == '.' && IndexArrayMap[i][j] == 0)
            {
                IndexArray++;
                PictureView = 0;
                FloodFill(Sign, n, m, j, i);
                Array[IndexArray] = PictureView;
            }
        }
    }
    for(int i=0; i<test; i++)
    {
        cin >> y >> x;
        cout << Array[IndexArrayMap[--y][--x]] << endl;
    }
    return 0;
}
