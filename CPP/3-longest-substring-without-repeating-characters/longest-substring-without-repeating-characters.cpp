class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        string word;

        for(int i=0; i<s.length() ; i++){
            if(word.find(s[i]) == -1){
                word += s[i];
            }
            else{
                if(result < word.length()){
                    result = word.length();
                }
                i -= word.length();
                word = "";
            }
        }
        if(result < word.length()){
             result = word.length();
        }
        return result;
    }
};