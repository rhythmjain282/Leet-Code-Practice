class Solution {
public:
    long long power(long long exp,long long base,long long mod){
        long long ans = 1;
        while(exp>0){
            if(exp%2 == 1){
                ans = (ans*base)%mod;
            }
            base = (base*base)%mod;
            exp = exp/2;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        int module = 1e9+7;
        long long even = power((n+1)/2,5,module);
        long long odd = power(n/2,4,module);
        return (even*odd)%module;

    }
};