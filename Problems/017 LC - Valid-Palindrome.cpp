class Solution {
public:
    char tolower(char ch){
        if(ch>='A' && ch<='Z'){
            return ch - 'A' + 'a';
        }
        return ch;
    }
    bool isPalindrome(string s) {
        int start = 0; 
        int end = s.length()-1;
        while(start<end){
            while( (start<end)&&(!((s[start]>='a' && s[start]<='z') || (s[start]>='A' && s[start]<='Z') || (s[start]>='0' && s[start]<='9'))) )
            {
                start++;
            }
            while( (start<end)&&(!((s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z') || (s[end]>='0' && s[end]<='9'))) )
            {
                end--;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }

            start++;
            end--;
        }
        return true;
    }
};
