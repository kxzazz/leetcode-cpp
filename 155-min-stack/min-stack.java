class MinStack {
    private Stack<Node> st;
    public MinStack() {
        st = new Stack<>();
    }
    
    public void push(int val) {
        Node n = new Node(val, 0);
        if(st.isEmpty()){
            n.min = val;
        } else {
            n.min = Math.min(val, st.peek().min);
        }
        st.push(n);
    }
    
    public void pop() {
        st.pop();
    }
    
    public int top() {
        return st.peek().val;
    }
    
    public int getMin() {
        return st.peek().min;
    }
}

class Node{
    public int val;
    public int min;

    Node(int val, int min){
        this.val = val;
        this.min = min;
    }
}

