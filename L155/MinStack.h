class MinStack {
public:
    /** initialize your data structure here. */
    stack<long> mystack;
    long min;
    MinStack() {
        
    }
    
    void push(int x) {
        if(mystack.empty()){
            mystack.push(0);
            min = x;
        }
        else{
            mystack.push(x-min); //new min produce negetive value. the value record the differnce between x and former min.
            if(x-min < 0) min = x;
        }
    }
    
    void pop() {
        if(!mystack.empty()) {
            if(mystack.top()<0){
                long tmp = mystack.top();
                min = min - tmp;
            }
            mystack.pop();
        }
        else return;
    }
    
    int top() {
        if(mystack.top()<0){
            return min;
        }
        else return int(min + mystack.top());
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */