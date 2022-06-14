class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,e=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(count==0)e=nums[i];
            if(nums[i]==e)count++;
            else count--;
        }
        return e;
    }
};