int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    if(n==0) return 0;
    stack<int> st;
    st.push(0);
    int ans = 0;
    for(int i=1;i<A.size();++i)
    {
        while(!st.empty())
        {
            int tos = st.top();
            if(A[tos] <= A[i]) break;
            st.pop();
            if(st.empty()) ans = max(ans, A[tos]*(i));
            else ans = max(ans, A[tos]*(i-st.top()-1));
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int tos = st.top();
        st.pop();
        if(st.empty()) ans = max(ans, A[tos]*n);
        else ans = max(ans, A[tos]*(n-st.top()-1));
    }
    return ans;
    
}