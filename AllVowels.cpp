#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char ch[n];
	int i,a[26];
	for(i=0;i<26;i++){
		a[i] = 0;
	}
	cin>>ch;
	for(i=0;ch[i]!='\0';i++){
		a[ch[i]-'a']++;
	}
	if(a[0] && a[4] && a[8] && a[14] && a[20]){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
