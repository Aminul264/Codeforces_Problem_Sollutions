#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
		cin>>s1>>s2;
	int i,k=0;
	for(i=0;i<s2.size();i++)
		if(s2[i]==s1[k])
			k++;
	cout<<k+1<<endl;
}
