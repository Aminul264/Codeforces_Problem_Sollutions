
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
		cin>>t;
	while(t--){
			int a[3],i;
	for(i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);
	if(a[0]==a[1] && a[1]==a[2] && a[2]==a[0])
	  cout<<0<<endl;
	  
    else { 
    	if(a[1]==a[2]){
				a[1]--;
				a[2]--;
				if(a[0]!= a[1])
				a[0]++;
				}
		else if(a[0]==a[1]){
				a[0]++;
				a[1]++;
				if(a[1]!= a[2])
				a[2]--;
		}
	  else{
	  	a[0]++;
	  	a[2]--;
	  	if(a[1]!=a[2] ){
	  		a[1]++;
		  }
	  }
	    cout<<a[2]-a[1]+ a[1]-a[0]+a[2]-a[0]<<endl;
	}
	
	
	}	
}
