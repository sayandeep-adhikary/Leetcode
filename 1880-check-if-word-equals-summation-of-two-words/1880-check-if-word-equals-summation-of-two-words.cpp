class Solution {
public:
    int findNumericalValue(string s){
        int letterValue = 0;
        for(auto letter : s){
            int val = (int) letter - 97;
            letterValue = letterValue * 10 + val;
        }
        return letterValue;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if(findNumericalValue(firstWord) + findNumericalValue(secondWord) ==                               findNumericalValue(targetWord)) return true;
        return false;
    }
};