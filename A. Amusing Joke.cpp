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

	 int i,j;
	 string s1,s2,s3;
	 cin>>s1>>s2>>s3;
	 
	 int a[26]={0},b[26]={0};
	 
	 for(i=0;i<s1.size();i++)
	    a[s1[i]-'a']++;
	    
	for(i=0;i<s2.size();i++)
	    a[s2[i]-'a']++;
     
	for(i=0;i<s3.size();i++)
	    b[s3[i]-'a']++;
	    
	for(i=0;i<26;i++)
		 cout<<a[i]<<" ";
		 cout<<endl;
		 
	for(i=0;i<26;i++)
		 cout<<b[i]<<" ";
		 cout<<endl;
		 
	for(i=0;i<26;i++){
		if(a[i]!=b[i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
     cout<<"YES"<<endl;
}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


