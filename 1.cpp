#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //task is to reverse the array 
    for(int i=0;i<n/2;i++){
        int tmp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=tmp;
    }
    cout<<"Reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}
