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

//APPROACH:
// we use suffdp which shows minimal deletions required to make sequence beautiful from i to n-1, make suffdp array of size n+1 in which 
// suffdp[n]=0,suffdp[n-1]=1 i.e. 1 deletion required to make 1 size array beautiful and iterate from n-2 to 0 and two case occurs whether
// we include this length or not so suffdp looks like suffdp[i]=min(suffdp[a[i]+i+1],suffdp[i+1]+1) ,suffdp[a[i]+i+1] is no. of deletion 
// required when including this length and suffdp[i+1]+1 excluding this length. consider edge cases carefully.

void solve(){
    ll n; cin>>n;
    vector<ll>a(n);
    forn(i,0,n){
        cin>>a[i];
    }
    vector<ll>suffdp(n+1); suffdp[n]=0; suffdp[n-1]=1;
    for(ll i=n-2;i>=0;i--){
        if(a[i]+i+1>n){suffdp[i]=suffdp[i+1]+1;continue;}
        suffdp[i]=min(suffdp[a[i]+i+1],suffdp[i+1]+1);
    }
    cout<<suffdp[0]<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
    //solve();
}