#include<iostream>
using namespace std;
int main(){
	char ch[100];
	cin>>ch;
	int i;
	int ans = 0;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]=='_'){
			ans += 1;
		}
	}
	if(ch[0]=='_'){
		ans -= 1;
	}
	if(ch[i-1]=='_'){
		ans -= 1;
	}
	cout<<ans+1;
}
