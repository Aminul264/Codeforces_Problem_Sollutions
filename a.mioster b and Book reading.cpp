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

	 int i,j,c,v0,v1,a,l,day=1;
	  cin>>c>>v0>>v1>>a>>l;
	 int page=v0; 
	  for(i=1;;i++){
	  	if(page>=c){
	  		//cout<<page<<" ";
	  		break;
		  }
	  	page-=l;
	  	if((v0+i*a)>v1){
	  		page+=v1;
	  			//cout<<page<<" ";
	  		day++;
		  } 
	  	else{
	  		page+=(v0+i*a);
	  		day++;
	  	//	cout<<page<<" ";
		  }
	  	
	  }
	  cout<<day<<endl;

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


