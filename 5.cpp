#include<bits/stdc++.h>

using namespace std;
void sort012(int,int []);

int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort012(n,arr);   
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
 
return 0;
}  

    void sort012(int n,int a[]){
    int min= 0;
    int max = n - 1;
    int mid = 0;
    while (mid <= max) {
        switch (a[mid]) {
        case 0:
            swap<int>(a[lo++], a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap<int>(a[mid], a[max--]);
            break;
        }
    }}

//or simply use the sort function to sort the array
sort(arr,arr+n)
