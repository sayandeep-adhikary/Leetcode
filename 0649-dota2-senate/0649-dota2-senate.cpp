class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>rq, dq;
        for(int i=0; i<senate.size(); i++)senate[i] == 'D'?dq.push(i):rq.push(i);
        int a, b;
        while(!rq.empty() and !dq.empty()){
            a = rq.front();
            b = dq.front();
            rq.pop();
            dq.pop();
            if(a < b) rq.push(a + senate.size());
            else dq.push(b + senate.size());
        }
        return rq.size() > dq.size() ? "Radiant" : "Dire";
    }
};