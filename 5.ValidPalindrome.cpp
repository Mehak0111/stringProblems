#include<iostream>
using namespace std;
bool isValid(char ch){
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9'){
		return 1;
	}
	return 0;
}
char toLowerCase(char ch){
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}
bool checkPalindrome(string s,int n){
	int st=0;
	int e=n-1;
	while(st<=e){
		if(toLowerCase(s[st])!=toLowerCase(s[e])){
			return 0;
		}
		else{
			st++;
			e--;
		}
	}
	return 1;
}
bool isPalindrome(string s,int n)
{
	string tem="";
	for(int j=0;j<s.length();j++){
		if(isValid(s[j])){
			tem.push_back(s[j]);
		}
	}
	for(int j=0;j<tem.length();j++){
		tem[j]=toLowerCase(tem[j]);
	}
	return checkPalindrome(tem,tem.length());
}
int main(){
	string s;
	cin>>s;
	cout<<isPalindrome(s,s.length());
}
