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

	 ll i,n,k;
	 string s,s2,rev;
	/* for( i=1;i<1000001;i++){
	 	  n=i;
	 	 while(n!=0){
	    	rev+=(n%10)+48;
	    	n/=10;
		}
		reverse(rev.begin(),rev.end());
		s+=rev;
		rev.clear();
	 }
	 */
	 for( i=1000001;i<1000000000001;i++){
	 	  n=i;
	 	 while(n!=0){
	    	rev+=(n%10)+48;
	    	n/=10;
		}
		reverse(rev.begin(),rev.end());
		s2+=rev;
		rev.clear();
	 }
       cin>>k;
	   cout<<s[k-1]<<endl;

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


