class Solution {
public:

    int countBits(int num){
        if(num == 0) return 0;
        return num%2 + countBits(num/2);
    }
    
    vector<string> readBinaryWatch(int num) {
        int hour;
        int minute;
        vector<string> result;
        for(hour = 0; hour < 12; hour++){
            for(minute = 0; minute < 60; minute++ ) {
                if(countBits(hour)+countBits(minute) == num){
                    string tmp = to_string(hour)+":"+(minute<10?"0"+to_string(minute):to_string(minute));
                    result.push_back(tmp);
                }
            }
 
        }
        return result;
    }
};
public List<String> readBinaryWatch(int num) {
    List<String> times = new ArrayList<>();
    for (int h=0; h<12; h++)
        for (int m=0; m<60; m++)
            if (Integer.bitCount(h * 64 + m) == num)
                times.add(String.format("%d:%02d", h, m));
    return times;        
}