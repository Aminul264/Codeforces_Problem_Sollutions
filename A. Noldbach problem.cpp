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

#define  size 100000
int a[size];
void seive(){
	int i,j,root;
	root=sqrt(size);
	 for(i=2;i<size;i++)
	    a[i]=1;
	    
	for(i=2;i<=root;i++){
		for(j=2;i*j<size;j++){
			a[i*j]=1;
		}
	}
}

int prime_arra(v b){
	int i;
	for(i=2;i<=27;i++)
	   if(a[i])
	    b.pb(i);
}

void solve(){
     seive();
     v b;
     prime_arra(b);
     int n,k,i;
     for(i=0;i<a.size();i++){
     	cout<<a[i]<<" ";
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


