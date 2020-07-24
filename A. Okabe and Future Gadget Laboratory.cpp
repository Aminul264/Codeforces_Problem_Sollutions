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

int  solve(){

	 int i,j,k,m,n,cnt=0,check=0;
	 cin>>n;
	 int a[n][n];
	 for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
	     cin>>a[i][j];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cnt=0;
			check=0;
			if(a[i][j]!=1){
				check++;
				for(k=0;k<n;k++){
					for(m=0;m<n;m++){
						if(a[i][k]+a[m][j]==a[i][j]){
							cnt++;
						}
					}
					}
				if(cnt==0){
				  cout<<"NO"<<endl;
			       return 0;
			    } 
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


