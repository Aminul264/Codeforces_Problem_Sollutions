#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,sum=0,c=0;
		cin>>n>>k;
	int a[26]={0};
	
	char s[n+1];
		for(i=0;i<n;i++){
			cin>>s[i];
			a[s[i]-'a']=1;
		}
	
	for(i=0;i<26;i++)
		if(a[i]==1){
			c++;
			sum+=i+1;
			i++;
			if(c==k){
				cout<<sum<<endl;
				return 0;
			}	  
		}
    
	  cout<<-1<<endl;
	 // for(i=0;i<n;i++)
		//	cout<<s[i];
	
}
