class Solution {
public:
    int reverse(int x) {
        int sum = 0;
        while(x){
            int tmp = sum*10 + x%10;
            if(tmp/10 != sum) return 0;
            sum = tmp;
            x = x/10;
        }
        return sum;
    }
};