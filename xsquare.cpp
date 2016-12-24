#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char ch[1000];
		cin>>ch;
		int i,a[26];
		for(i=0;i<26;i++){
			a[i] = 0;
		}
		for(i=0;ch[i]!='\0';i++){
			a[ch[i]-'a']++;
		}
		int odd = 0,ans = 0;
		for(i=0;i<26;i++){
			if(a[i]%2==1 && !odd){
				odd = 1;
			}
			else if(a[i]%2==1 && odd){
				ans += 1;
			}
		}
		cout<<ans<<endl;
	}
}
