#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(i,j,m) for(int i=j;i<m;i++)
int mini=INT_MAX;
int maxi=INT_MIN;
ll lmini=INT64_MAX;
ll lmaxi=INT64_MIN;
#define mod 1000000007
#define inf 1e9
//freopen("guess.in","r",stdin);   freopen("billboard.out","w",stdout);
#define all(x) (x).begin(), (x).end()  //sort(all(vec)) instead of sort(vec.begin(), vec.end()).
#define al(x,n) x,x+n
//#define rall(x) (x).rbegin(), (x).rend()
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back 
#define getsubstr(x,startingindex,length) x.substr(startingindex,length)
#define getsubst(x,startingindex) x.substr(startingindex) // to get substring from startingindex upto end.
// Conversion of int,float into string using to_string(intvalue)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define bitindll(val) __builtin_ctzll(val) 
// __builtin_ctzll(val) (val!=0) is a compiler-specific built-in function that counts the number of trailing zero bits in a long long integer val ,
//if val=16 then it returns 4 because there are four zero bits after the least significant set bit. 
#define bitind(val) __builtin_ctz(val) //for unsigned int (val!=0)
#define countsetbitsll(val) __builtin_popcountll(val) //Counts the number of 1s in the binary representation of a long long integer.
// __builtin_popcount(unsigned int) for unsigned int
// __builtin_popcountl(unsigned long) for unsigned long


void solve(){
   int n; cin>>n;
   vector<pair<int,int>>seg(n),tempseg(n);
   forn(i,0,n){
      int l,r; cin>>l>>r;
      seg[i]={l,r},tempseg[i]={l,r};
   }
   sort(all(tempseg)); int cnt=0;
   int currl=0,currr=0,prevl=0,prevr=0;
   bool d=false;
   map<int,int>m;
   int ans=0;
   forn(i,0,n){
      m[tempseg[i].second]++;
      if(m[tempseg[i].second]>1){
         ans=tempseg[i].second; d=true; break;
      }
   }
   int e=0; vector<pair<int,int>>p;
   if(d){
      forn(i,0,n){
         if(seg[i].second==ans){
            e++;
            p.pb({seg[i].first,i+1});
            if(e==2){break;}
         }
      }
      if(p[0].first<p[1].first){
         cout<<p[1].second<<" "<<p[0].second<<endl;
      }
      else{
         cout<<p[0].second<<" "<<p[1].second<<endl;
      }
      return;
   }
   forn(i,0,n-1){
     // cout<<1;
      if(tempseg[i].first==tempseg[i+1].first && tempseg[i].second==tempseg[i+1].second){
         //cout<<i+1<<" "<<i+2<<endl; return;
         currl=tempseg[i].first,currr=tempseg[i].second;
         prevl=tempseg[i].first,prevr=tempseg[i].second;
         d=true; break;
      }
      else if(tempseg[i].first==tempseg[i+1].first && tempseg[i].second!=tempseg[i+1].second){
        // cout<<1;
         //cout<<i+1<<" "<<i+2<<endl; return;
         currl=tempseg[i].first,currr=tempseg[i].second;
         prevl=tempseg[i+1].first,prevr=tempseg[i+1].second;
         d=true; break;
      }
   }
   int ind1=0,ind2=0; bool b=false,c=false;
  //cout<<currl<<" "<<currr<<" "<<prevl<<" "<<prevr<<" ";
   forn(i,0,n){
      if(currl==seg[i].first && currr==seg[i].second && !b){
         ind1=i+1; b=true;
      }
      else if(prevl==seg[i].first && prevr==seg[i].second && !c){
         ind2=i+1; c=true;
      }
   }
  // cout<<ind1<<" "<<ind2<<endl;
   if(d){
      cout<<ind1<<" "<<ind2<<endl; return;
   }
   ordered_set st;
  // for(auto &val:tempseg){cout<<val.first<<" "<<val.second<<endl;}
   for(auto &val:tempseg){
      cnt=st.size()-st.order_of_key(val.second);
      st.insert(val.second);
      //cout<<st.order_of_key(val.second)<<endl;
      if(cnt>=1){
        // cout<<st.size()<<endl;
         currl=val.first,currr=val.second;
         for(int i=0;i<st.size()-1;i++){
            if(currr<=tempseg[i].second){
               prevl=tempseg[i].first,prevr=tempseg[i].second;
               break;
            }
         }
         break;
      }
   }
  // cout<<cnt<<endl;
   if(cnt==0){
      cout<<-1<<" "<<-1<<endl;
      return;
   }
   ind1=0,ind2=0; b=false,c=false;
  //cout<<currl<<" "<<currr<<" "<<prevl<<" "<<prevr<<" ";
   forn(i,0,n){
      if(currl==seg[i].first && currr==seg[i].second && !b){
         ind1=i+1; b=true;
      }
      else if(prevl==seg[i].first && prevr==seg[i].second && !c){
         ind2=i+1; c=true;
      }
   }
   cout<<ind1<<" "<<ind2<<endl;
}
int main(){
    KUNAL
    solve();
}