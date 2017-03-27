class Solution {
public:
    
    int getDigit(int n){
        int result = 0;
        while(n > 0){
            int tmp = n%10;
            result  += pow(tmp,2);
            n = n/10;
        }
        return result;
    }

    bool isHappy(int n) {
        int fast = n;
        int slow = n;
        do{
            slow = getDigit(slow);
            fast = getDigit(fast);
            fast = getDigit(fast);
        }while(fast != slow);
        if(fast == 1) return true;
        else return false;
    }
};
