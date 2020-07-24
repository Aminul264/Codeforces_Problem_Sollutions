#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i;
		cin>>t;
		long long int n,s1,s2=0,s;
		//double s;
	while(t--){
			cin>>n;
		s1=(n*(n+1))/2;
		//cout<<s1<<endl;
		for(i=0;;i++){
			s=pow(2,i);
			if(s>n)
				break;
			else
			s1-=s*2;
			
		}
	     //cout<<s1<<endl;
	    cout<<s1<<endl;
	    //cout<<s1-2*1073741824;
		
		
	}
	
}
