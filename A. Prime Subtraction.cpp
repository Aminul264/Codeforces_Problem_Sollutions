#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
		cin>>t;
	while(t--){
	long long int x,y;
		cin>>x>>y;
		if( (x-y)%2==0 || (x-y)%3==0 ||(x-y)%5==0 || (x-y)%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
}
