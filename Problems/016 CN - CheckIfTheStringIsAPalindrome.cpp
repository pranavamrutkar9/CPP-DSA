#include <bits/stdc++.h> 
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
    
    int start = 0;
    int end = s.size()-1;
    while(start<=end){

        if(!((s[start]>='A' && s[start]<='Z') || (s[start]>='a' && s[start]<='z') || (s[start] >= '0' && s[start] <= '9')) ){
            start++;
            continue;
        }
        if(!((s[end]>='A' && s[end]<='Z') || (s[end]>='a' && s[end]<='z') || (s[end] >= '0' && s[end] <= '9')) ){
            end--;
            continue;
        }

        if(toLowerCase(s[start])!=toLowerCase(s[end])){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
