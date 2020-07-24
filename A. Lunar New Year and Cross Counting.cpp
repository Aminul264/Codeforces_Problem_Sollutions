#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,c=0;
		cin>>n;
	   char a[n][n];
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
			cin>>a[i][j];
		
    	for(i=1;i<n-1;i++){
    			for(j=1;j<n-1;j++){
    			   if(a[i][j]=='X' && a[i-1][j-1]=='X' && a[i+1][j+1]=='X' &&
				    a[i+1][j-1]=='X' && a[i-1][j+1]=='X')
							c++;
				}
		}
	
	cout<<c<<endl;
	
}

