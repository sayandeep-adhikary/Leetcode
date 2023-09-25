//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
         sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<N;i++){
            pq.push({A[i]+B[N-1],N-1});
        }
        vector<int>ans;
        while(K-- and !pq.empty()){
            auto f=pq.top();
            pq.pop();
            ans.push_back(f.first);
            if(f.second>0)pq.push({f.first-B[f.second]+B[f.second-1],f.second-1});
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends