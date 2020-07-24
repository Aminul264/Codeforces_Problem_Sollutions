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

	 int i,j,l1,l2,sum=0;
	 string s;
	 cin>>s;
	  l1=s[0]-'a';
	  l2=26-l1;
	 int l= min(l1,l2);
	  sum+=l;
	 for(i=1;i<s.size();i++){
	 	l1=s[i]-'a';
	 	if(s[i]>s[i-1])
	 	  l1-=s[i-1]-'a';
	 	else
	 	  l1=26-(s[i-1]-'a')+(s[i]-'a');
	 	  //cout<<l1<<" ";
	    l2=26-l1;
	   // cout<<l2<<endl;
	    l= min(l1,l2);
	    sum+=l;
	    //cout<<l<<" ";
	 //	sum+=l;
	 	
	 	
	 //	cout<<l1<<" "<<l2<<endl;
	 //	min(s[i]-)
	 }
	 cout<<sum<<endl;

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


