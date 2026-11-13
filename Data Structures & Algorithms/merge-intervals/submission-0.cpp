class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(result.empty()|| start>result.back()[1]){
               result.push_back({start,end});
            }
            else{
                result.back()[1]=max(result.back()[1],end);
            }
        }
        return result;
        
    }
};
