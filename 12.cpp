#include <bits/stdc++.h>
using namespace std;
 
 int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        int minEle, maxEle;
        int result = arr[n - 1] - arr[0];
 
        for (int i = 1; i <= n - 1; i++) {
              maxEle = max(arr[i - 1] + k, arr[n - 1] - k);//
              minEle = min(arr[0] + k, arr[i] - k);
          result = min(result, maxEle - minEle);
        }
        return result;
    }

 
int main()
{
   int n,c,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    c=getMinDiff(a,n,k);

    cout<<c;

    return 0;
}
