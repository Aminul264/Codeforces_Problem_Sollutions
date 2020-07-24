#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,s=0,d=0;
		cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	  for(i=0,j=n-1;i<j;){
		if(a[i]>a[j]){
			s+=a[i];
			//cout<<s<<endl;
			i++;
		}
		else{
			s+=a[j];
				//cout<<s<<endl;
			j--;
		}
	//	if(i)
		if(a[i]>a[j]){
			d+=a[i];
				//cout<<d<<endl;
			i++;
		}
		else{
			d+=a[j];
				//cout<<d<<endl;
			j--;
		}
	}
	if(n%2)
	     s+=a[i];
	cout<<s<<" "<<d<<endl;
	
	cout<<(39+95)*21+73*89+9*55+85*32;
}

