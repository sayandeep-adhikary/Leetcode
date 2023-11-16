class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> m;
    for (auto &n : nums)
        m.insert(stoi(n, nullptr, 2));
    for (int x = 0; ; ++x)
        if (!m.count(x))
            return bitset<16>(x).to_string().substr(16 - nums.size());
    return "";
    }
};