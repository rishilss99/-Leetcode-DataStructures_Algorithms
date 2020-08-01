class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() < 2)
            return true;
        if(word[0] > 96 && word[1] < 96)
            return false;
        bool capital = word[1] < 96;
        for(int k = 2;k<word.length();k++){
            if(capital ^ (word[k] < 96))
                return false;
        }
        return true;
    }
};