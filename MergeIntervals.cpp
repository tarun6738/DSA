class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> lastInterval = intervals[0];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= lastInterval[1]){
                lastInterval[1] = max(lastInterval[1],intervals[i][1]);
            }
            else{
                ans.push_back(lastInterval);
                lastInterval = intervals[i];
            }
        }
        ans.push_back(lastInterval);
        return ans;
    }
};
