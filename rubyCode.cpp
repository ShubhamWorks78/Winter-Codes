#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char ch[100];
		cin>>ch;
		int i,a[26];
		for(i=0;i<26;i++){
			a[i] = 0;
		}
		for(i=0;ch[i]!='\0';i++){
			a[ch[i]-'a']++;
		}
		int min = 100;
		if(a['r'-'a']<min){
			min = a['r'-'a'];
		}
		if(a['u'-'a']<min){
			min = a['u'-'a'];
		}
		if(a['b'-'a']<min){
			min = a['b'-'a'];
		}
		if(a['y'-'a']<min){
			min = a['y'-'a'];
		}
		cout<<min<<endl;
	}
}
