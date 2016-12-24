#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char ch[n];
		cin>>ch;
		int i,j;
		int pri[] = {67,71,73,79,83,89,97,101,103,107,109,113};
		int si = sizeof(pri)/sizeof(pri[0]);
		for(i=0;i<n;i++){
			int val = (int)ch[i];
			int rep = 100000,kk;
			for(j=0;j<si;j++){
				int gap = abs(val-pri[j]);
				if(gap<rep){
					rep = gap;
					kk = pri[j];
				}
			}
			ch[i] = kk;
		}
		cout<<ch<<endl;
	}
}
