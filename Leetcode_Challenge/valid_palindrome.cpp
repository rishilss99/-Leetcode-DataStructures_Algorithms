class Solution {
public:
    bool isPalindrome(string s) {
        if(!s.length())
            return true; 
        string orig = "";
        for(int i = 0; i<s.length(); i++){
            if(s[i] >= 97 && s[i] <= 122)
                orig += s[i];
            else if(s[i] >= 65 && s[i] <= 90)
                orig += s[i] + 32;
            else if(s[i] >= 48 && s[i] <= 57)
                orig += s[i];
        }
        cout<<orig.length()<<endl;
        for(int j = 0 ; j<orig.length()/2 ;j++){
            if(orig[j] != orig[orig.length() - 1 - j])
                return false;
        }
        return true;
    }
};