#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int stone,stonecost, question, type, left, right, sum;
    cin>>stone;
    long long int cost[stone], sortedcost[stone], totalsortedcost[stone];
    for(int i = 0; i<stone; i++){
        cin>>stonecost;
        cost[i]=cost[i-1]+stonecost;
        sortedcost[i]=stonecost;
        totalsortedcost[i]=stonecost;
    }
    sort(sortedcost, sortedcost + stone);
    sort(totalsortedcost, totalsortedcost + stone);
    totalsortedcost[0]=sortedcost[0];
    for (int i=1; i<stone; i++) {
        totalsortedcost[i]=totalsortedcost[i-1]+sortedcost[i];
    }
    cin>>question;
    for(int i = 0; i < question; i++){
        sum = 0;
        cin>>type>>left>>right;
        if(type == 1){
            sum=cost[right-1]-cost[left-2];
            cout<<sum<<endl;
        }
        else{
            if (left==1) {
                sum=totalsortedcost[right-1];
            }
            else {
                sum=totalsortedcost[right-1]-totalsortedcost[left-2];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
