class Solution {
public:
   vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) 
            return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> x;
        x.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(x.back()[1] >= intervals[i][0])
                x.back()[1] = max(x.back()[1] , intervals[i][1]);
            else 
                x.push_back(intervals[i]); 
        }
        return x;
    }
};
