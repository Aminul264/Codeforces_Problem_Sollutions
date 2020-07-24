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

	 int i,n,c,remain=1 ;
	 cin>>n>>c;
	 v a(n);
	 for(i=0;i<n;i++)
	   cin>>a[i];
	for(i=1;i<n;i++)
	  if( (a[i]-a[i-1]) <=c )
	    remain++;
	else
	   remain=1;
	cout<<remain<<endl;

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


