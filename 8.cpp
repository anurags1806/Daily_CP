#include <bits/stdc++.h>
using namespace std;
 
int doUnion(int a[], int n, int b[], int m)  {
        //code here
        map<int,int> mp;
        for (int i = 0; i < n; ++i)
        {
            mp.insert({a[i],i});
        }
        for (int i = 0; i < m; ++i)
        {
            mp.insert({b[i],i});
        }

        return mp.size();
}

 
int main()
{
   int n,m,c;
   cin>>n>>m;
   int a[n],b[m];
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int j=0;j<m;j++)
    cin>>b[j];
    
    c=doUnion(a,n,b,m);

    cout<<c;
    return 0;
}
