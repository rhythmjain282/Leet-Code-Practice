class Solution {
private:
    void merge(vector<int>& nums,int low,int mid,int high){
        vector<int>temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<= high){
            if(nums[left]>=nums[right]){
                temp.push_back(nums[right]);
                right++;
            }
            else{
                temp.push_back(nums[left]);
                left++;
            }
        }
        while(left<=mid ){
                temp.push_back(nums[left]);
                left++;
        }
        while(right<= high){
                temp.push_back(nums[right]);
                right++;
        }
        for(int i = low;i<=high;i++){
            nums[i] = temp[i-low];
        }
        return;
    }
    void mergesort(vector<int>& nums,int low,int high) {
        int l = low,h = high;
        if(low>=high) return ;
        int m = (low+high)/2;
        mergesort(nums,low,m);
        mergesort(nums,m+1,high);
        merge(nums,low,m,high);
    }
public:
    vector<int>sortArray(vector<int>&nums){
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};