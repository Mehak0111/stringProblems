#include<iostream>
using namespace std;
char toLowerCase(char ch){
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	else{
		char temp=ch-'A'+'a';
		return temp;
	}
}
string checkPalindrome(string &s,int n){
	int st=0;
	int e=n-1;
	while(st<=e){
		if(toLowerCase(s[st])!=toLowerCase(s[e])){
			return "is not palindrome";
		}
		else{
			st++;
			e--;
		}
	}
	return "is palindrome";
}
void reverse(string s,int n){
	int st=0;
	int e=n-1;
	while(st<=e){
		swap(s[st++],s[e--]);
	}
}
int main(){
    
	string s;
	getline(cin,s);
	cout<<s<<endl;
	reverse(s,s.length());
	cout<<"check palindrome "<<checkPalindrome(s,s.length());
    
}
