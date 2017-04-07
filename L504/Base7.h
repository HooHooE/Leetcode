class Solution {
public:
    string convertToBase7(int num) {
        string result;
        while(abs(num) >= 7){
            result = to_string(abs(num%7)) + result;
            num = num/7;
        }
        return to_string(num) + result;
    }
};