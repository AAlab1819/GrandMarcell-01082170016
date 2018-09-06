#include <iostream>

using namespace std;

int main()
{
    long long YCr, BCr, lack; //YCr : Yellow Crystal, BCr : Blue Crystal
    cin>>YCr>>BCr;
    long long Yb, Gb, Bb; //Yb : Yellow ball, Gb : Green ball, Bb : Blue ball
    cin>>Yb>>Gb>>Bb;
    YCr = YCr-(Yb*2);
    //cout<<YCr<<endl;
    YCr = YCr-Gb;
    //cout<<YCr<<endl;
    BCr = BCr-(Bb*3);
    //cout<<BCr<<endl;
    BCr = BCr-Gb;
    //cout<<BCr<<endl;
    if (YCr<=0)
    {
        lack=YCr;
        if (BCr<0)
        {
            lack=(lack+BCr)*(-1);
            cout<<lack;
        }
        else
        {
            lack=lack*(-1);
            cout<<lack;
        }
    }
    else if (BCr<=0)
    {
        lack=BCr;
        if (YCr<0)
        {
            lack=(lack+YCr)*(-1);
            cout<<lack;
        }
        else
        {
            lack=lack*(-1);
            cout<<lack;
        }
    }
    else
    {
        lack=0;
        cout<<lack;
    }
    return 0;
}
