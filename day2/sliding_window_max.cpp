class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& A, int k) {
        deque<int> dq;
    int n = A.size();
    vector<int> ans;
    for(int i = 0 ; i < n ; i++)
    {
        if(!dq.empty() && dq.front() == (i - k))
        {
            dq.pop_front();
        }
        while(!dq.empty() && A[i] > A[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if(i + 1 >= k)
        {
            ans.push_back(A[dq.front()]);
        }
    }
    return ans;
    }
};
