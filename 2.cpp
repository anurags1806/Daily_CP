#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int min;
    int max;
};

struct Pair getminmax(int arr[],int n){
    struct Pair p1;
    p1.min=arr[0];
    p1.max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>p1.max)
        p1.max=arr[i];
        else if(arr[i]<p1.min)
        p1.min=arr[i];
    }

    return p1;
}
int main()
{
    struct Pair p2;
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++)
        cin>>arr[j];
    p2=getminmax(arr,n);
    
    cout<<"Maximum value is : "<<p2.max<<endl;
    cout<<"Minimum value is : "<<p2.min;

    return 0;
}
