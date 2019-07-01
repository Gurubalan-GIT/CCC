//Given a list of integers, you have a sliding window of size k. Your task it to compute the max of each sliding window when you slide the window from left to right

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        if(nums.size()==0) return ans;
        int n = nums.size();
        deque<int> dq;
        for(int i=0;i<k;++i)
        {
            while(!dq.empty())
            {
                if(nums[i]<nums[dq.back()]) break;
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k;i<n;++i)
        {
            ans.push_back(nums[dq.front()]);
            while(!dq.empty())
            {
                int j = dq.front();
                if(i-j+1 <= k) break;
                dq.pop_front();
            }
            while(!dq.empty())
            {
                if(nums[i]<nums[dq.back()]) break;
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
        
    }
};
