class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int csum=0;
        for(int i=0;i<nums.size();i++){
            csum+=nums[i];
            if(csum>maxsum)
            {
                maxsum=csum;
            }
            if(csum<0)
            {
                csum=0;
            }
        }
        return maxsum;
    }
};
