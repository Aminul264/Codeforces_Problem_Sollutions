#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,v,s=0,i,j,t,c=0;
		cin>>n>>v;
	
		if((n-1)%v!=0 && v<=n){
			t=(n-1)-(n-1)%v;
			c++;
		}
		else{
			if(v>(n-1)){
			 t=n-1;
			 v=n-1;	
			}
			 
			  else
			  	t=n-1;
		}
		
		s=t/v;
		int rslt=v;
		i=v;
		//s--;
		//cout<<s<<" "<<t<<" "<<n<<" "<<v<<" "<<endl;
		while(--s){
			rslt+=i*v;
			i+=v;
		}
		
		if(c>0)
		  rslt+=t*((n-1)%v);
		cout<<rslt<<endl;
		
	
}
