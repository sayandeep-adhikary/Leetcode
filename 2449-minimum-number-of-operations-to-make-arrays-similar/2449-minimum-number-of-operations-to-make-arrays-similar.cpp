class Solution {
public:
    long long makeSimilar(vector<int>& n, vector<int>& t) {
        sort(n.begin(), n.end());
        sort(t.begin(), t.end());
        vector<int>en, on, et, ot;
        for(auto it : n){
            if(it&1) on.push_back(it);
            else en.push_back(it);
        }
        for(auto it : t){
            if(it&1) ot.push_back(it);
            else et.push_back(it);
        }
        long long ans = 0;
        for(int i=0; i<en.size(); i++){
            ans += abs(en[i] - et[i])/2;
        }
        for(int i=0; i<on.size(); i++){
            ans += abs(on[i] - ot[i])/2;
        }
        return ans/2;
    }
};