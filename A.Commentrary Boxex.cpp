/*
                              0
                            0 1 0
                          0 1 2 1 0
             STAY       0 1 2 3 2 1 0      HOME
                      0 1 2 3 4 3 2 1 0
                    0 1 2 3 4 5 4 3 2 1 0
                  0 1 2 3 4 5 6 5 4 3 2 1 0
                0 1 2 3 4 5 6 7 6 5 4 3 2 1 0
              0 1 2 3 4 5 6 7 * 7 6 5 4 3 2 1 0
            0 1 2 3 4 5 6 7 * A * 7 6 5 4 3 2 1 0
              0 1 2 3 4 5 6 7 * 7 6 5 4 3 2 1 0
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
typedef vector<ll>vl;
typedef vector<int> v;
typedef vector<long double> vdl;

void solve(){

	 ll n,m,a,b;
	   cin>>n>>m>>a>>b;
	   if(n%m)
	   	cout<<min((n%m)*b,((((n/m)+1)*m)-n)*a);
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


