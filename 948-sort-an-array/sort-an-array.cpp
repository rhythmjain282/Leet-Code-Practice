class Solution {
public:
    vector<int>sortArray(vector<int>&nums){
        map<int,int>mpp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        int i = 0;
        for(auto x:mpp){
            while(x.second){
                nums[i] = x.first;
                x.second--;
                i++;
            }
        }
        return nums;
    }
};