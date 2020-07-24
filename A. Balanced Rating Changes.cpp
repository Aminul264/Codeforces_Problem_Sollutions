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
            0 1 2 3 4 5 6 7 8 9 7 6 5 4 3 2 1 0
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
	int i,j,n,odn=0,odp=0,c=0,x=0;
	  cin>>n;
     v a(n);
     for(i=0;i<n;i++){
     	cin>>a[i];
     	if(abs(a[i])&1){
     		if(a[i]<0)
     		  odn++;
     		else
     		  odp++;
		 }
	 }
	 cout<<odn<<" "<<odp<<endl;
	 if(odp==odn)
	   x=0;
	else{
		 if(odp>odn)
		    x=odp-odn;
		  else
		  x=odp-odn;
	}

	 if(abs(x)&1){
	 	c++;
      }
	 x=x/2; 
	 cout<<x<<endl;
	 for(i=0;i<n;i++){
	 	 if( c && abs(a[i]%2)==0){
	 	 	if(a[i]<0)
	 	     	a[i]=a[i]/2+1;
	 	 	else
	 	 	  a[i]=a[i]/2-1;
	 	 	c--;
		  }
           
       
        	if(x>0 && a[i]>0){
        		
        		if(abs(x) && (abs(a[i])&1) )
              	a[i]=a[i]/2+1;
              	x--;
			}
        	else if(x<0 && a[i]<0){
        		 if(abs(x) && (abs(a[i])&1) )
        	      a[i]=a[i]/2-1;
        	      x++;
			}
	     else
	     a[i]=a[i]/2;
      }
     for(i=0;i<n;i++)
      cout<<a[i]<<" ";
  cout<<"sum : "<<accumulate(a.begin(),a.end(),0);
}

 int main(){
        int test=1;
           // cin>>test;
        while(test--){
            solve();
        }
    return 0;
}


