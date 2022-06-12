class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind,ind1,count=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                ind=i-1;
                count++;
                break;
            }
        }
        if(count==0){
            reverse(nums.begin(),nums.end());
        }else{
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[ind]){
                    ind1=i;
                    break;
                }
            }
            swap(nums[ind],nums[ind1]);
            reverse(nums.begin()+ind+1,nums.end());
        }    
        return;        
    }
};

/*approach: 
in every lexicographically order , there is always a increasing order from back like in (2,1,2,6,5)
increasing order is (6,5)
to find next lexi , increasing part and value left to it(2,6,5) should adjust and the left part from these (2,1) remains constant

class Solution {
public:
    void swap(int& a, int& b) {
            int temp = a;
            a = b;
            b = temp;
        }
    void nextPermutation(vector<int>& nums) {      
        int n = nums.size();       
        int i;                        
        for(i=n-1; i>0; i--)
        {
            if(nums[i]>nums[i-1])
                break;
			int k = i-1;    //this is index after which increasing order is present
            
			//edge case
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
  
        else{
            //find very greater element to arr[k] in increasing order
            int  j;
            for(j=n-1; j>=i; j--)
            {
                if(nums[j]>nums[k])
                    break;
            }
            swap(nums[k],nums[j]);
            //just reverse the increasing part to make the permutation smallest
            reverse(nums.begin()+i,nums.end());
        }
    }
};*/