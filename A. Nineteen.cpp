/*
                              0
                            0 1 0
                    
             STAY       0 1 2 3 2 1 0      HOME
                
                    0 1 2 3 4 5 4 3 2 1 0
                  
                0 1 2 3 4 5 6 7 6 5 4 3 2 1 0
              0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0
            
              0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0
                
                  0 1 2 3 4 5 6 5 4 3 2 1 0
                  
                      0 1 2 3 4 3 2 1 0
              STAY
                          0 1 2 1 0

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

	 string s;
	 cin>>s;
	 int i=0,j=0,n=0,e=0,t=0;

	 for(j=0;j<s.size();j++){
	    if(s[j]=='n')
	         n++;
	     else if(s[j]=='i')
	         i++;
	     else if(s[j]=='e')
	         e++;
	      else if(s[j]=='t')
	         t++;
     }
     //Shalar Cout TOr JOONo atttto wrong khelam
     //cout<<n<<" "<<i<<" "<<e<<" "<<t<<" "<<endl;
     if(n<3)
       n=0;
    else
    n=((n-1)/2);
    
     
	cout<<min( min( n,i ),min( (e/3),t ) );///tomake remove koe diyechi bole cf amake reject kore dilo

}

 int main(){
        int test=1;
        while(test--){
           // cin>>test;
            solve();
        }
    return 0;
}


