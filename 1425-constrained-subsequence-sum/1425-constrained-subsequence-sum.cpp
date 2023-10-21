class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> deq;
        vector<int> t(nums);
        int maxR = t[0];
        
        for(int i = 0; i<n; i++) {
            
            while(!deq.empty() && deq.front() < i-k)
                deq.pop_front();
            
            if(!deq.empty())
                t[i] = max(t[i], nums[i] + t[deq.front()]);
            
            //we maintain the deque in descending order
            while(!deq.empty() && t[i] >= t[deq.back()])
                deq.pop_back();
            
            deq.push_back(i);
            
            maxR = max(maxR, t[i]);
        }
        
        return maxR;
    }
};