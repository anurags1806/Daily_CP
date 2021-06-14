#include <bits/stdc++.h>
using namespace std;
 
void rotate(int arr[], int n)
{
     int max=n-1,min=0;
    while(min<=max)
    {
        int tmp=arr[min];
        arr[min++]=arr[max];
        arr[max]=tmp;
        
        //swap(arr[min++],arr[max]);
    }
    
}

 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    rotate(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
