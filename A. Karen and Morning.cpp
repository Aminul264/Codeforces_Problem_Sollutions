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

int solve(){
	vector< pair<int ,int> >a(20);
          
			a[1]=make_pair(1,10);
			a[2]=make_pair(2,20);
			a[3]=make_pair(3,30);
			a[4]=make_pair(4,40);
			a[5]=make_pair(5,50);
			a[6]=make_pair(10,1);
			a[7]=make_pair(11,11);
			a[8]=make_pair(12,21);
			a[9]=make_pair(13,31);
			a[10]=make_pair(14,41);
			a[11]=make_pair(15,51);
			a[12]=make_pair(20,2);
			a[13]=make_pair(21,12);
			a[14]=make_pair(22,22);
			a[15]=make_pair(23,32);
			a[16]=make_pair(0,0);
				a[17]=make_pair(1,10);
			//cout<<a[16].first<<endl;
			

	 int i,hh,mm,bal;
	 string s;
	 cin>>s;
	hh= (s[0]-48)*10+(s[1]-48);
   	mm= (s[3]-48)*10+(s[4]-48);
    bal= (s[1]-48)*10+(s[0]-48);

  //cout<<hh;
      if(hh==0 && mm==0){
      	cout<<"0"<<endl;
      	return 0;
	  }
      for(i=1;i<=17;i++)
	  {
      	if(a[i].first>=hh)
      	{
      		//cout<<i<<endl;
      		if(hh==a[i].first)
			  {
			  	//cout<<a[i].first<<endl;
      			if(bal>=mm){
      				//cout<<bal<<" "<<mm<<endl;
      			cout<<bal-mm<<endl;
      			break;
			    }
			    else{
			       int ans=(a[i+1].first-a[i].first);
			       if(ans<0){
			       	cout<<60-mm<<endl;
			       	break;
				   }
			         
			         else{
			         	   ans=ans*60+a[i+1].second-mm;
			         	   cout<<ans<<endl;
			         	   break;
					 }
			       
			       
				}
			}
			else{
				 int ans=(a[i].first-hh);
			       if(ans<0){
			       	cout<<60-mm<<endl;
			       	break;
				   }
			         
			         else{
			         	   ans=ans*60+a[i].second-mm;
			         	   cout<<ans<<endl;
			         	   break;
					 }
			}
      			
		}
      	
	  }
	 //cout<<n<<m<<endl;
	 //cout<<bal-m<<endl;
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


