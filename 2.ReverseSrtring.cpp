#include<iostream>
using namespace std;
int reverse(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(name[s++],name[e--]);
	}
}
int main()
{
	int n;
	cin>>n;
	char name[n];
	cin>>name;
	int count=0;
		for(int i=0;name[i]!='\0';i++){
			count++;
	}
	reverse(name,count);
	cout<<name;
}
