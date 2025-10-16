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

// consider 0-indexed arrays, we make suffix sum array suff in which suff[i] =total amount of tea when each taster[i] from i to n-1 drink at once.
// if tea[i]<=taster[i] then taster[i] drinks full tea[i] so add that amount in ans[i] and make tea[i]=0. now we make diffans array,let say diffans[i]=x 
// then it means taster[i] drinks x*taster[i] amount of tea.
// if tea[i]>=suff[i] ,it means all taster from i to n-1 can drink ith tea so just do diffans[i]++; diffans[n]-- and if tea[i]==0, it means no one can drink tea[i].
// else when tea[i]<suff[i] ,then we check by binary search at what index ind tea[i]>=suff[i]-suff[ind] so we do diffans[i]++; diffans[ind]-- ,it may happen that 
// some amount of tea[i] remains i.e,tea[i]-(suff[i]-suff[ind])>0 then at ans[ind] we add remaining amount.
// at last we have diffans and ans array, then ith taster drink total ans[i]+=(diffans[i]*taster[i]) amount of tea.

ll check(ll i,vector<ll>&suff,ll currtea){
    ll s=i+1,e=suff.size()-1; ll ind=0;
    while(s<=e){
        ll mid=(s+e)>>1;
        if(currtea>=(suff[i]-suff[mid])){
            s=mid+1; ind=mid;
        }
        else{
            e=mid-1;
        }
    }
    return ind;
}
void solve(){
    ll n; cin>>n;
    vector<ll>tea(n),taster(n);
    forn(i,0,n){cin>>tea[i];}
    forn(i,0,n){cin>>taster[i];}
    vector<ll>ans(n);
    forn(i,0,n){
        if(tea[i]<=taster[i]){ans[i]+=tea[i]; tea[i]=0;}
    }
    vector<ll>diffans(n+1);
    vector<ll>suff(n); suff[n-1]=taster[n-1];
    for(ll i=n-2;i>=0;i--){
        suff[i]=suff[i+1]+taster[i];
    }
    for(ll i=0;i<n;i++){
        if(tea[i]==0){continue;}
        if(tea[i]>=suff[i]){diffans[i]++; diffans[n]--; continue;}
        ll ind=check(i,suff,tea[i]);
        ll rem=tea[i]-(suff[i]-suff[ind]);
        ans[ind]+=rem;
        diffans[i]++; diffans[ind]--;
    } 
    forn(i,1,n+1){
        diffans[i]+=diffans[i-1];
    }
    forn(i,0,n){
        ans[i]+=(diffans[i]*taster[i]);
    }
    for(auto &val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
    //solve();
}