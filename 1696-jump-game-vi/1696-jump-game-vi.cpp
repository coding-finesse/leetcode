class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int l=nums.size();
        vector<int> dp(l);
        dp[0]=nums[0];
        priority_queue<pair<int,int>> pq;
        pq.push({dp[0],0});
        for(int i=1;i<l;i++){
            int temp=INT_MIN;
            bool isInvalid=true;
            while(isInvalid){
                pair<int,int> p=pq.top();
                int ind=max(0,i-k);
                if(p.second>=ind){
                    isInvalid=false;
                    temp=p.first;
                }
                else{
                    pq.pop();
                }
            }
            dp[i]=temp+nums[i];
            pq.push({dp[i],i});
            
        }
        return dp[l-1];
    }
};