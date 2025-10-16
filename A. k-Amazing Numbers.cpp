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

// Compute each value’s max gap with edges; assign answers for all k≥gap using minimal values.
// Build pos[i]; compute mx via pos[i][0]+1, pos[i][j]−pos[i][j−1], and n−pos[i].back(). For k≥mx,
// set ans[j] from mx−1 onward until ans[j]≠−1;break; output ans.

void solve(){
   int n; cin>>n;
   vector<int>v(n+1);
   forn(i,1,n+1){
    cin>>v[i];
   }
   map<int,int>m;
   map<int,int>mink;
   forn(i,1,n+1){
    int diff=i-m[v[i]];
    mink[v[i]]=max(mink[v[i]],diff);
    m[v[i]]=i;
   }
   for(auto &val:m){
    int diff=n+1-val.second;;
    mink[val.first]=max(diff,mink[val.first]);
   }
   vector<int>ans(n+2); int last=n+1,ind=INT_MAX;
   for(auto &val:mink){
    if(ind>val.second){ind=val.second;}
    ans[ind]+=val.first; ans[last]-=val.first;
    last=ind;
   }
   forn(i,2,n+2){
    ans[i]+=ans[i-1];
   }
   forn(i,1,n+1){
    if(ans[i]==0){cout<<-1<<" "; continue;}
    cout<<ans[i]<<" ";
   }cout<<endl;
}
int main(){
    KUNAL
    int t; cin>>t;
     while(t--){
        solve();
     }
    //solve();
}