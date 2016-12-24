#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	stack<int> st;
	while(t--){
		int ty;
		cin>>ty;
		if(ty==1){
			if(st.empty()==false){
				int val = st.top();
				st.pop();
				cout<<val<<endl;
			}
			else{
				cout<<"No Food"<<endl;
			}
		}
		else{
			int val;
			cin>>val;
			st.push(val);
		}
	}
	return 0;
}
