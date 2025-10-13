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


// Let's consider two persons 1 and 2. When do they meet each other?

// We can treat a person traveling from point a to point b as a segment [a,b]. Notice that they meet when a1<a2 and b2<b1, or a2<a1
// and b1<b2; or in other words, when one segment contains another.

// We can count the number of pairs when one fully contains another, which is a quite classic problem, and can be solved by iterating 
// over the segments in increasing order of the b position and for each of them adding the number of segments that we have already passed
// that have an a value larger than the one of the current segment.
// The time complexity is O(nlogn)

ordered_set st;
void solve(){
    ll n; cin>>n;
    vector<pair<ll,ll>>v(n);
    forn(i,0,n){
        cin>>v[i].first>>v[i].second; // or cin>>v[i].second>>v[i].first; 
    }
    sort(all(v));
    st.clear();
    ll ans=0;
    for(auto val:v){
        ans+=st.size()-st.order_of_key(val.second);
        st.insert(val.second);
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
    //solve();
}