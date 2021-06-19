#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int i = -1, j = n-1;

    while (i < j )
    {
        while(i < n  && arr[i] > 0)
            ++i;
        while (j >= 0 && arr[j] < 0)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    if (i == 0 || i == n)
        return;

    int k = 0;
    while (k < n && i < n)
    {
        swap(arr[k], arr[i]);
        i = i + 1;
        k = k + 2;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
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

    cout << "Given array is \n";
    printArray(arr, n);

    rearrange(arr, n);

    cout << "Rearranged array is \n";
    printArray(arr, n);

    return 0;
}
