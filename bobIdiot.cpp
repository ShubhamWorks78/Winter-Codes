#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[26];
	int i;
	for(i=0;i<26;i++){
		a[i] = i;
	}
	int grt[26];
	for(i=0;i<26;i++){
		grt[i] = i;
	}
	while(n--){
		char fir,sec;
		cin>>fir>>sec;
		if(fir<'a'){
			grt[fir-'A'] = sec-'A';
			grt[sec-'A'] = fir-'A';
		}
		else{
			a[fir-'a'] = sec-'a';
			a[sec-'a'] = fir-'a';
		}
	}
	char ch[1000000];
	cin>>ch;
	int k;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]<'a'){
			k = ch[i]-'A';
			ch[i] = grt[k]+'A';
		}
		else{
			k = ch[i]-'a';
			ch[i] = a[k]+'a';
		}
	}
	cout<<ch;
}
