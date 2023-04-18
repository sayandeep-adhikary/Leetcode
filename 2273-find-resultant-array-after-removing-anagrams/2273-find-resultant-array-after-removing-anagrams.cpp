class Solution {
public:
    vector<string> removeAnagrams(vector<string>& w) {
        vector<string>ans;
        string x=w[0];
        ans.push_back(x);
        sort(x.begin(), x.end());
        for(int i=1;i<w.size();i++){
            string z=w[i];
            sort(z.begin(), z.end());
            if(x==z)
                continue;
            else{
                ans.push_back(w[i]);
                x=z;
            }
        }
        return ans;
    }
};