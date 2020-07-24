#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
		cin>>t;
	while(t--){
		int n,c1=0,s=0,c2=0;
			cin>>n;
		int a[n];
	for(i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];	
			if(a[i]%2)
					c1++;
				else
					c2++;
				
	}
		if(s%2)
		    cout<<"YES"<<endl;
		else if(c1 && c2)
			cout<<"YES"<<endl;
			else
			cout<<"No"<<endl;
	  
	}
}
