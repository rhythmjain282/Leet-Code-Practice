class Solution {
private:
int pindex(vector<int>&nums,int low,int high){
    int left = low;
    int right = high;
    int pivot = nums[low];
    while(left<right){
        while(nums[left]<=pivot && left<=high-1) left++;
        while(nums[right]>pivot && right>=low+1) right--;
        if(left<right)swap(nums[left],nums[right]);
    }
    swap(nums[right],nums[low]);
    return right;
}
    void qs(vector<int>&nums,int low,int high){
        if(low<high){
            int ind = pindex(nums,low,high);
            qs(nums,low,ind-1);
            qs(nums,ind+1,high);
        }
    }
public:
    vector<int>sortArray(vector<int>&nums){
        qs(nums,0,nums.size()-1);
        return nums;
    }
};