#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,a[200000];
	for(i=0;i<200000;i++){
		a[i] = 0;
	}
	int n;
	cin>>n;
	int l = 0,m=0;
	string newStr;
	while(n--){
		string str;
		cin>>str;
		int len = str.size();
		int val = 0,j;
		if(l==0){
			for(i=0;i<len;i++){
				if(str[i]<'a'){
					i--;
					break;
				}
			}
			newStr = str.substr(0,i+1);	
		}
		if(len==newStr.size() && m==0){
			cout<<str<<endl;
			m = 1;
		}
		else if(len==newStr.size() && m==1){
			for(i=0;i<200000;i++){
				if(!a[i]){
					a[i] = 1;
					break;
				}
			}
			cout<<str<<i<<endl;
		}
		else if(len!=newStr.size()){
			i = newStr.size()-1;
			int nnn = 0;
			for(i=newStr.size();i<len;i++){
				
				nnn = nnn*10+(str[i]-'0');
			}
			if(!a[nnn]){
				a[nnn] = 1;
				cout<<str<<endl;
			}
			else{
				for(i=0;i<200000;i++){
					if(!a[i]){
						a[i] = 1;
						break;
					}
				}
				cout<<newStr<<i<<endl;
			}
		}
		l += 1;
	}
}
