#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n;
	int ans = 0;
	cin>>n;
	while(n--){
		stack<char> st;
		char str[100000];
		cin>>str;
		int i;
		for(i=0;str[i]!='\0';i++){
			st.push(str[i]);
		}
		stack<char> ano;
		int ti = 0;
		while(1){
			ti += 1;
			int si = st.size();
			while(st.empty()==false){
				if(ano.empty()==true){
					ano.push(st.top());
					st.pop();
					cout<<"first if"<<endl;
				}
				else{
					if(st.top()==ano.top()){
						cout<<"Else if"<<endl;
						st.pop();
						ano.pop();
					}
					else{
						cout<<"Elsee elses"<<endl;
						ano.push(st.top());
						st.pop();
					}
				}
			}
			
			if(si==ano.size()){
				break;
			}
			if(ano.empty()==true){
				ans += 1;
				break;
			}
			stack<char> tern;
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
	cout<<ans;
}
