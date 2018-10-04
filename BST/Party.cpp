#include <bits/stdc++.h>
using namespace std;

int main()
{
    int employee, manager, DepthofTree, Party_grup=0;
    cin>>employee;
    map<int, int> superior;
    for(int i=1; i<=employee; i++){
        cin>>manager;
        superior[i] = manager; //Makes a tree with employee i being the child of manager p
    }
    for(int i=1; i<=employee; i++){
        DepthofTree = 1;
        for(int j = superior[i]; j!=-1; j=superior[j]) //Traverses the tree until it reaches the root which is -1
            DepthofTree++;
        Party_grup = max(DepthofTree, Party_grup);
    }
    cout<<Party_grup;
    return 0;
}
