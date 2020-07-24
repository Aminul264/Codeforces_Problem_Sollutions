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

#define sze 30001
int a[sze];
void sieve()
{
      int i,root,j;
     for(i=2;i<sze;i++)
    {
      a[i]=1;
    }

    root=sqrt(sze);
    for(i=2; i<=root; i++)
    {
        if(a[i])
        {
            for(j=2; i*j<sze; j++)
            {
                a[i*j]=0;
            }
        }
    }
}

void solve(){
  sieve();
	 int n,prme=0,cnt=0,i,j;
	 cin>>n;
	 int root;
	 for(i=6;i<=n;i++){
	 	root=sqrt(i+1);
	 	cnt=0;
	  for(j=1;j<=root;j++){
	 	if(i%j==0){
	 		if(a[j]){
	 		   cnt++;	
			 }
	 		
	 		 if(j!=(i/j) && a[i/j]){
	 		 	cnt++;
			  }
	 		  
	 	 }
	  }
	 if(cnt==2)
	   prme++;
	 
 }
 cout<<prme<<endl;
}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


