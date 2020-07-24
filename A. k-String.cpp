/*
                              0
                            0 1 0
                          0 1 2 1 0
             STAY       0 1 2 3 2 1 0      HOME
                      0 1 2 3 4 3 2 1 0
                    0 1 2 3 4 5 4 3 2 1 0
                  0 1 2 3 4 5 6 5 4 3 2 1 0
                0 1 2 3 4 5 6 7 6 5 4 3 2 1 0
              0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0
            0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0
              0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0
                0 1 2 3 4 5 6 7 6 5 4 3 2 1 0
                  0 1 2 3 4 5 6 5 4 3 2 1 0
                    0 1 2 3 4 5 4 3 2 1 0
                      0 1 2 3 4 3 2 1 0
               SAFE     0 1 2 3 2 1 0     STAY
                          0 1 2 1 0
                            0 1 0
                              0
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
typedef vector<long long>vl;
typedef vector<int> v;
typedef vector<long double> vdl;

int solve(){

	 string s,st;
     int n,c=0,i,j,k;
	 cin>>n>>s;
	 int a[26]={0};
	 for(i=0;i<s.size();i++)
	   a[s[i]-'a']++;
	 for(i=0;i<26;i++){
	 	if( (a[i] && a[i]<n)  || a[i]%n){
	 	 cout<<"-1"<<endl;
	 	 return 0;
      	 }
	 }
	// for(i=0;i<26;i++)
	// cout<<a[i]<<" ";
     for(i=1;i<=n;i++){
     	
     	for(j=0;j<26;j++){
     		if(a[j]){
     			for(k=0;k<a[j]/n;k++)
     			 st+=j+97;
     	        	}
			 }
     		
		 }
	 cout<<st<<endl;
	return 0; 
}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


