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
#define  lenght 100000
int a[lenght];
///
void seive(){
	int i,j,root;
	root=sqrt(lenght);
	 for(i=2;i<lenght;i++)
	    a[i]=1;
	    
	for(i=2;i<=root;i++){
		for(j=2;i*j<lenght;j++){
			a[i*j]=0;
		}
	}
}

///
  int prime_arra(v b,int n,int k){
	int i,count=0;
	for(i=2;i<=n;i++)
	   if(a[i])
	    b.pb(i);
//   for(i=0;i<100;i++)
//   if(a[i])
//    cout<<i<<" ";
    for(i=0;i<b.size()-1;i++){
    	
    	if( a[ b[i]+b[i+1]+1]  &&  b[i]+b[i+1]+1<=n ){
    	   count++;
		   }
	}
	//cout<<count<<endl;
	if(k==0 ||  count>=k)
	  cout<<"YES"<<endl;
	  else
	      cout<<"NO"<<endl;	
	return 0;    
}
  
///
void solve(){
     seive();
     v b;
     int n,k,i;
     cin>>n>>k;
       prime_arra(b,n,k);/*
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

	 int i,j,n,m;
	 cin>>n>>m;
	 string a[n];
	 for(i=0;i<n;i++)
	   cin>>a[i];

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


}
///
 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


