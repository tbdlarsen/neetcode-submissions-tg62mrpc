class MinStack {
private:
    std::stack<int> m_min_stack;
    std::stack<int> m_normal_stack;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (m_min_stack.empty() || m_min_stack.top() >= val){
            m_min_stack.push(val);
        }
        m_normal_stack.push(val);
    }
    
    void pop() {

        if(m_normal_stack.top() == m_min_stack.top()){
            m_min_stack.pop();
        }
        m_normal_stack.pop();
    }
    
    int top() {
        return m_normal_stack.top();
        
    }
    
    int getMin() {
        return m_min_stack.top();
    }
};
