class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n == 0) return true;
        int low = 1;
        int high = n;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(mid*mid == n) return true;
            else if(mid*mid > n){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};