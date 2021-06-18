#include <bits/stdc++.h>
using namespace std;
int max(int x,int y){
        return x>y?x:y;
    }
    int min(int x,int y){
        return x>y?y:x;
    }
int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}
// Driver code
int main()
{
    int x;
    vector<int> v;     
    while(cin>>x)
        v.push_back(x);
    int ans = maxProfit(v);
    cout <<  ans;
    return 0;
}
