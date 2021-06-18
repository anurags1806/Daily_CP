#include <bits/stdc++.h>
using namespace std;
   int findDuplicate(vector<int>& nums) {
       unordered_set<int>   st;
        for(auto i  :  nums){
            
            if(st.find(i)!=st.end()){
                return i;
            }
            st.insert(i);
        }
        return 0;
    }

int main()
{
    int size;
    cin>>size;
    vector<int> nums;
    int input;
   while (cin >> input)
    nums.push_back(input);
   int duplicate;
   duplicate=findDuplicate(nums);
   cout<<duplicate;

    return 0;
}
