#include <bits/stdc++.h>
using namespace std;
 
 int maxSubarraySum(int arr[], int n){
     // Your code here
        int sum=INT_MIN,x=0;
        for(int i=0;i<n;i++){
            x+=arr[i];
            if(sum<x)
            sum=x;
            if(x<0)
            x=0;
        }
        return sum;
        

    }
 
int main()
{
   int n,c;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    c=maxSubarraySum(a,n);
    cout<<c;

    return 0;
}
