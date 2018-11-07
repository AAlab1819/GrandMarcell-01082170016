#include<bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin>>testCase;
    while (testCase>0) {
        int strength, itemNum, totalpeople;
        int maxValue=0;
        int cdp[51]={0};
        cin>>itemNum;
        int weight[itemNum], price[itemNum];
        for (int i=0; i<itemNum; i++) {
            cin>>price[i]>>weight[i];
        }
        for (int i=0; i<itemNum; i++) {
            for (int j=50; j>=0; j--) {
                if (weight[i]<=j && cdp[j]<cdp[j-weight[i]]+price[i]) {
                    cdp[j]=cdp[j-weight[i]]+price[i];
                }
            }
        }
        cin>>totalpeople;
        for (int i=0; i<totalpeople; i++) {
            cin>>strength;
            maxValue=maxValue+cdp[strength];
        }
        cout<<maxValue<<endl;
        testCase--;
    }
    return 0;
}
