#include<bits/stdc++.h>

using namespace std;
void rearrange(int,int []);

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rearrange(n,arr);   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
return 0;
}  

    void rearrange(int n,int a[]){
    int min= 0;
    int max = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= max) {
        if(a[mid]<0)
            swap<int>(a[min++], a[mid++]);
        if(a[mid]==0)
            mid++;
        if(a[mid]>0)
        swap<int>(a[mid], a[max--]);
        }
    }
