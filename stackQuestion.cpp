#include<iostream>
#include<list>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	list<int> st[n];
	for(i=0;i<n;i++){
		int k,v;
		cin>>k;
		while(k--){
			cin>>v;
			st[i].push_front(v);
		}
	}
	int q;
	cin>>q;
	while(q--){
		int ch;
		cin>>ch;
		if(ch==0){
			int m;
			cin>>m;
			st[m-1].pop_front();
		}
		else if(ch==1){
			int m,l;
			cin>>m>>l;
			st[m-1].push_front(l);
		}
		else{
			int val = st[1].front();
			list<int>::iterator it;
			int ans = 0;
			for(it=st[0].begin();it!=st[0].end();it++){
				if(*it<val){
					ans = 1;
					break;
				}
			}
			if(ans==0){
				cout<<"NO"<<endl;
			}
			else{
				for(i=2;i<n;i++){
					if(st[i].front()<st[i-1].front()){
						ans = 0;
						break;
					}
				}
				if(ans==0){
					cout<<"NO"<<endl;
				}
				else{
					cout<<"YES"<<endl;
				}
			}
		}
	}
}
