class Solution {
public:
    bool winnerOfGame(string colors) {
        int cntA = 0;
        int cntB = 0;
        int Amove = 0;
        int Bmove = 0;
        for(int i=0; i<colors.size(); i++){
            if(colors[i] == 'A'){
                if(cntB >= 3){
                    Bmove += cntB - 2;
                }
                cntB = 0;
                cntA++;
            }
            else {
                if(cntA >= 3){
                    Amove += cntA - 2;
                }
                cntA = 0;
                cntB++;
            }
        }
        if(cntA >= 3) Amove += cntA - 2;
        if(cntB >= 3) Bmove += cntB - 2;
        return Amove > Bmove;
    }
};