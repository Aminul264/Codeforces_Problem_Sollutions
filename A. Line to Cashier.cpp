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

	 ll n,s=0,i,j,x;
	 cin>>n;
	 v a(n);
	 v c(n);
	 
	 for(i=0;i<n;i++){
	 	cin>>a[i];	
	 }
	 for(i=0;i<n;i++){
	 	for(j=0;j<a[i];j++){
	 	 cin>>x;
	 	 s+=x*5;
	    }
	    c[i]=s;
	    s=0;
	 }

  	for(i=0;i<n;i++)
	  c[i]=c[i]+a[i]*15;
//	  	for(i=0;i<n;i++)
//	       cout<<c[i]<<" ";
	   
	 cout<<*min_element(c.begin(),c.end())<<endl;
	 
	 
	   

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


