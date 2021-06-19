#include <bits/stdc++.h>
using namespace std;

long long maxProduct(int *arr, int n) {
        long long int max_ending_here = 1;
    long long int min_ending_here = 1;
    long long int max_so_far = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            max_ending_here = max_ending_here * 1ll*arr[i];
            min_ending_here
                = min(min_ending_here * 1ll*arr[i], 1*1ll);
            flag = 1;
        }
        else if (arr[i] == 0) {
            max_ending_here = 1;
            min_ending_here = 1;
        }
        else {
          long long int temp = max_ending_here;
            max_ending_here=max(min_ending_here *1ll* arr[i], 1*1ll);
            min_ending_here=temp*arr[i];
        }
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    
    if (flag == 0 && max_so_far == 0)
        return 0;
    return max_so_far;
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
    long long x;
    x=maxProduct(arr,n);
    cout<<x;
    return 0;
}
