class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int>st;
        vector<int>answer(arr.size(),0);
        for(int i=0;i<arr.size();i++)
        {
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                int j=st.top();
                st.pop();
                answer[j]=i-j;                
            }
            st.push(i);
        }
        return answer;
    }
};