class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int is0 = -1;
        int mult = 1;
        vector<int>ans(n,0);
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                if(is0!= -1){
                    return ans;
                }
                is0 = i;
                continue;
            }
            mult = mult*nums[i];
        }
        if(is0 != -1){
            ans[is0] = mult;
            return ans;
        }
        for(int i = 0;i<n;i++){
            ans[i] = mult/nums[i];
        }
        return ans;
    }
};