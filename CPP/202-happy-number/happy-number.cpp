class Solution {
public:

    int digSqr(int num){
        int res = 0;
        while(num > 0){
            int dig = num%10;
            res += dig * dig;
            num /= 10;
        }
        return res;
    }

    bool isHappy(int n) {
       unordered_map<int,int> check;
        while(n != 1 ){
            if(check[n]==2){
                break;
            }
           n = digSqr(n);
           check[n]++;
        }
        if(n == 1){
            return true;
        }
        return false;
    }
};