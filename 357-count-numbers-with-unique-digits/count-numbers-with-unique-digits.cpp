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
        int availdigi = 9;
        int currentcases = 9;
        int cnt = 10;
        for(int i = 2;i<=n;i++){
            currentcases = currentcases*availdigi;
            cnt = cnt+currentcases;
            availdigi--;
        }
        return cnt;
    }
};