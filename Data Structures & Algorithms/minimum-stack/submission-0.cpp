class MinStack {
public:

    stack<int>minstack;
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minstack.empty()){
            minstack.push(val);
        }else{
            minstack.push(min(minstack.top() , val));
        }

        st.push(val);
    }
    
    void pop() {
        minstack.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
