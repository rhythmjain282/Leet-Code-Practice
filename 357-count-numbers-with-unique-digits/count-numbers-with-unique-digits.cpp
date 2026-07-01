class Solution {
public:
    int numbers(int n){
        if(n == 0) return 1;
        int mult = 9;
        int ans = 9;
        while(n>1){
            ans = ans*mult;
            mult--;
            n--;
        }
        return ans;
    }
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        int ans = 0;
        while(n>=0){
            ans = ans + numbers(n);
            n--;
        }
        return ans;
    }
};