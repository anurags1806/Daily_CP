#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    string x;
   unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(a1[i]);
    }
    int p = s.size();
    for (int i = 0; i < m; i++) {
        s.insert(a2[i]);
    }
    if (s.size() == p) {
       x="Yes";
    }
    else {
        x="No";
    }
    
    return x;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for (int i = 0; i < n; ++i)
    {
        cin>>a1[i];
    }
     for (int i = 0; i < m; ++i)
    {
        cin>>a2[i];
    }
    cout<<isSubset(a1,a2,n,m)<<" ";
    return 0;
}
