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

void solve(){

	 int i,j,n;
	 cin>>n;
	 v a(n);
	 for(i=0;i<n;i++)
	   cin>>a[i];
	 int mx=0,cnt=0;
	
	 for(i=0;i<n-1;i++){
	 	if(a[i]+1==a[i+1])
	 	  cnt++;
	 	else{
	 		if(a[i]==i+1)
	 		   cnt++;
	 		 mx=max(mx,cnt);
	 		 cnt=0;
		 }
	 }
    if(a[n-1]==1000 || a[n-1]==n)
      cnt++;
       mx=max(mx,cnt);
    if(mx>=1)
	    cout<<mx-1<<endl;
	else
	    cout<<"0"<<endl;
}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


