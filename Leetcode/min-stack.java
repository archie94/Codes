class MinStack {

    /** initialize your data structure here. */
    
    static class Yolo {
        int val, min;
        Yolo(int val, int min) {
            this.val = val;
            this.min = min;
        }
    }
    
    Stack<Yolo> s;
    
    public MinStack() {
        s = new Stack<>();
    }
    
    public void push(int x) {
        Yolo yolo = new Yolo(x, s.empty() ? x : Math.min(s.peek().min, x));
        s.push(yolo);
    }
    
    public void pop() {
        s.pop();
    }
    
    public int top() {
        return s.peek().val;
    }
    
    public int getMin() {
        return s.peek().min;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

// https://leetcode.com/problems/min-stack/description/