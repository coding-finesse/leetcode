class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
            vector<vector<int>> mergeAns;
        sort(intervals.begin(),intervals.end());
        vector temp=intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=temp[1]){
                temp[1]=max(temp[1]/*max of rt of curr interval*/,intervals[i][1])/*max of rt of resultant merged interval we are storing*/;
            }
               else{
                   mergeAns.push_back(temp);
                   temp=intervals[i];}//reassign valueof interval to temp
               }
               mergeAns.push_back(temp);
               return mergeAns;
               }
};