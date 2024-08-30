class Solution {
public:
    string customSortString(string order, string s) {
        sort(s.begin(), s.end(), [=](char a, char b){
            int ind1 = find(order.begin(), order.end(), a) - order.begin();
            int ind2 = find(order.begin(), order.end(), b) - order.begin();
            return ind1<ind2;
        });
        return s;
    }
};