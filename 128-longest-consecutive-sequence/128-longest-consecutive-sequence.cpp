class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        map<int, int> mp;
        int cnt=1;
        int res=INT_MIN;
        
        for(auto &it:nums)
            mp[it]++;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(next(it)!=mp.end() && it->first == next(it)->first-1)
                cnt++;
            else
            {
                res=max(res,cnt);
                cnt=1;
            }
        }
        return res;
    }
};