#include <bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int k) {
        // code here
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[arr[i]]++;
    }
    int count=0;
    for (int i = 0; i < n; ++i)
    {
        count+=mp[k-arr[i]];
        if(k-arr[i]==arr[i])
            count--;
    }
        
    return count/2;
}
int main()
{
    int x,k;
    cin>>x>>k;
    int arr[x];
    for (int i = 0; i < x; ++i)
         {
            cin>>arr[i];
         }     
    int ans =getPairsCount(arr,x,k) ;
    cout <<ans<<" ";
    return 0;
}
