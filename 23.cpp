 #include <bits/stdc++.h>
using namespace std;

 bool subArrayExists(int arr[], int n)
    {
        //Your code here
         unordered_set<int> sumSet;
         int x=0;
        for(int i=0;i<n;i++){
            x+=arr[i];
            
            if(x==0||sumSet.find(x)!=sumSet.end())
                return true;
                sumSet.insert(x);
        }
        
        return false;
}

int main()
{
    

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    bool x;
    x=subArrayExists(arr,n);
    if(x==true){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}
