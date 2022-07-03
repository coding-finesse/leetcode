class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> dppos(n,0),dpneg(n,0);
        dppos[0]=1,dpneg[0]=1;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                dppos[i]=dpneg[i-1]+1;
                dpneg[i]=dpneg[i-1];
            }
            else if(nums[i]<nums[i-1])
            {
                dppos[i]=dppos[i-1];
                dpneg[i]=dppos[i-1]+1;
            }
            else
            {
                dppos[i]=dppos[i-1];
                dpneg[i]=dpneg[i-1];
            }
        }
        
        return max(dppos[n-1],dpneg[n-1]);
        
    }
};