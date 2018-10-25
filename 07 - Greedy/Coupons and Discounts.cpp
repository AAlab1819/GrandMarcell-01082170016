#include <bits/stdc++.h>

using namespace std;

int main()
{
    int day;
    cin>>day;
    int team[day];
    int hasil = 1;

    for (int i=0;i<day;i++){
        cin>>team[i];
    }
    for (int i=0;i<day;i++){
        if (team[i]%2==1){
            if ( team[i+1]==0||i==day-1){
                hasil=2;
                break;
            }
            team[i+1]--;
        }
    }

    if (hasil==1){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
