#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	stack<int> st;
	stack<int> ano;
	int i;
	for(i=0;i<n;i++){
		int vl;
		scanf("%d",&vl);
		ano.push(vl);
	}
	while(ano.empty()==false){
		st.push(ano.top());
		ano.pop();
	}
	while(1){
			int si = st.size();
			while(st.empty()==false){
				if(ano.empty()==true){
					ano.push(st.top());	
					st.pop();
				}
				else{
					if(st.top()==-ano.top() && ano.top()>0){
						cout<<"Entered "<<st.top()<<endl;
						st.pop();
						ano.pop();
					}
					else{
						ano.push(st.top());
						st.pop();
					}
				}
			}
			
			if(si==ano.size()){
				cout<<n-si<<endl;
				break;
			}
			if(ano.empty()==true){
				cout<<n<<endl;
				break;
			}
			stack<int> tern;
			while(ano.empty()==false){
				tern.push(ano.top());
				ano.pop();
			}
			while(tern.empty()==false){
				st.push(tern.top());
				tern.pop();
			}
		}
}
