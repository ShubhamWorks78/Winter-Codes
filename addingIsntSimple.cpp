#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char ch[100000];
		cin>>ch;
		int len = strlen(ch);
		char bh[100000];
		int i,j;
		for(j=len-1,i=0;j>=0;i++,j--){
			bh[i] = ch[j];
		}
		for(i=0;i<len;i++){
			int val = (ch[i]-96)+(bh[i]-96);
			if(val>26){
				val -= 26;
			}
			ch[i] = val+96;
		}
		cout<<ch<<endl;
	}
}
