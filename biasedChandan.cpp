#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<int> q;
	stack<int> st;
	while(n--){
		int val;
		cin>>val;
		q.push(val);
	}
	int prev = -1,ans = 0;
	while(q.empty()==false){
		int val = q.front();
		q.pop();
		if(val==0){
			if(st.empty()==false){
				st.pop();
			}
		}
		else{
			st.push(val);
		}
	}
	while(st.empty()==false){
		ans += st.top();
		st.pop();
	}
	cout<<ans<<endl;
	return 0;
}
