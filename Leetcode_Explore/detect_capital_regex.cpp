class Solution {
    public :
        bool detectCapitalUse(string word) {
            return regex_match(word,"[A-Z]*|.[a-z]*");
    }
}