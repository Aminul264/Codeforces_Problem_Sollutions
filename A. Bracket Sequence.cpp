/// is the parabthesis sequence is right????    using stack

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char >st;
	int i;
	for(i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}
		  
		else{
			if(s[i]==')' && st.top()!='('){
			return	cout<<"No"<<endl,0;
			}
			st.pop();
		}
	}
	if(st.empty())
	 cout<<"YES"<<endl;
	else
	 cout<<"NO"<<endl;
}
