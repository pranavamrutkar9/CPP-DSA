#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string temp="";
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			temp+="@40";
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}
