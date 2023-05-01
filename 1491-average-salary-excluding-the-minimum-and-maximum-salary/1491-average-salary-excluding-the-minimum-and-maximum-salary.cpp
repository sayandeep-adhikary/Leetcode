class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        double max=*max_element(salary.begin(), salary.end());
        double min=*min_element(salary.begin(), salary.end());
        for(auto it : salary){
            if(it==max or it==min){
                continue;
            }
            else{
                ans+=it;
            }
        }
        return ans/(salary.size()-2);
    }
};