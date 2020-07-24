#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,s=0,t,i;
		cin>>n>>k;
	
	t=4*60-k;
	for(i=1;i<=n;i++){
		s=((i*(i+1))/2)*5;//5*i times
		if(s>t)
			break;
		
	//	cout<<s<<endl;
	}
	cout<<i-1<<endl;
		
}
