#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long
#define pi pair<int,int>
const int mod=1e9+7;


bool check(int pos,int p,int &b,int boon,vector<int>&v){
     
      if(pos==12) return true;

      if(pos!=4 && pos!=8){
           if((v[pos]<=p && check(pos+1,p-v[pos],b,boon,v)) || (!boon && check(pos+1,p*b,b,boon+1,v))) return true;
           else{
               return false;
           }
      }
      else{
          if((p>=(v[pos-1]/2)+v[pos] && check(pos+1,p-(v[pos-1]/2)-v[pos],b,boon,v)) || (!boon && check(pos+1,p*b,b,boon+1,v))) return true;
          else{
              return false;
          }
      }

      return true;
}




void solve(){
        int p,b;
        cin>>p>>b;
       vector<int> v(12,0);

       for(int i=1;i<=11;i++){
           cin>>v[i];
       } 
       
       if(check(1,p,b,0,v)){
          cout<<"True"<<endl;
       }
       else{
          cout<<"False"<<endl;
       }

}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);




    int t=1;
    cin>>t;
    while(t--){
         solve();
    }


    return 0;
}