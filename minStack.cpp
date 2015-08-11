class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;
public:
    void push(int x) {
        if(minStack.size() == 0){
            minStack.push(x);
            mainStack.push(x);
        }
        else{
            mainStack.push(x);
            if(minStack.top() >= x) minStack.push(x);
        }
    }

    void pop() {
       if(mainStack.top() == minStack.top()){
           mainStack.pop();
           minStack.pop();
       }
       else mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};