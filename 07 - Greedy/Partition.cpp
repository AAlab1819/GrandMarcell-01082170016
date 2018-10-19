#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int arrA[a], B=0, C=0;
    for(int i = 0; i<a; i++){
        cin>>arrA[i];
        if(arrA[i]>=0){
            B = B + arrA[i];
        }
        else{
            C = C + arrA[i];
        }
    }
    cout<<B-C<<endl;

    return 0;
}
