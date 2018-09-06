#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;

    if (n%2 == 0) //klo genap
    {
        a = (n/2)-1;
        b = (n/2)+1;
        if(a%2==0)
            a=a-1;
        if(b%2==0)
            b=b+1;
    }
    else //ganjil
    {
        a = (n/2);
        b = a+1;
    }
    cout << a << " " << b;
    return 0;
}
