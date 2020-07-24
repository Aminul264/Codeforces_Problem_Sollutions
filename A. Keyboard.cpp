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

	 int i,j;
	 
	 string demo="qwertyuiopasdfghjkl;zxcvbnm,./";
	 char ch;
	 cin>>ch;
	 string type,main;
	 cin>>type;
     if(ch=='R'){
     	for(i=0;i<type.size();i++){
     		for(j=0;j<demo.size();j++){
     			if(type[i]==demo[j]){
     				main+=demo[j-1];
     				break;
				 }
			 }
		 }
	 }
	 else{
	 		for(i=0;i<type.size();i++){
     		for(j=0;j<demo.size();j++){
     			if(type[i]==demo[j]){
     				main+=demo[j+1];
     				break;
				 }
			 }
		 }
	 }
	 cout<<main<<endl;

}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


