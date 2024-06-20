class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> lastInterval = intervals[0];
        int cnt = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] >= lastInterval[1]){
                lastInterval = intervals[i];
            }
            else if(intervals[i][1] >= lastInterval[1]){
                cnt++;
            }
            else if(intervals[i][1] < lastInterval[1]){
                lastInterval = intervals[i];
                cnt++;
            }
        }
        return cnt;
    }
};
