class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums.empty())
            return false;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};