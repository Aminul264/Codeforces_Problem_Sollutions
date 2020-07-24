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

	 ll i,j,n,a,b,c, taka;
	 cin>>n>>a>>b>>c;
	 if(n%4==0)
	   cout<<"0"<<endl;
	   else{
	   	n=4-n%4;
	    if(n==1)
	     taka=min(a,min(b+c,3*c));
	    else if(n==2)
	      taka=min(2*a,min(b,2*c));
	    else{
	    	taka=min(c,min(b+a,a*3));
		}
		cout<<taka<<endl;
	   }
	 

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


