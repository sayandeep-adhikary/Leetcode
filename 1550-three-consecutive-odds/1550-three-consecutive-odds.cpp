class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i = 0;
        int j = 0;
        list<int>ls;
        while(j < arr.size()){
            ls.push_back(arr[j]);
            if(j-i+1 < 3){
                j++;
            }
            else if(j-i+1 == 3){
                bool flag = false;
                for(auto it : ls){
                    if(!(it&1)) flag = true;
                }
                if(flag == false) return true;
                ls.pop_front();
                i++;
                j++;
            }
        }
        return false;
    }
};