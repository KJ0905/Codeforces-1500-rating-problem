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

//Maintain max-heap of ∣a[i]−b[i]∣; repeatedly decrement the maximum; if all zeros, leftover odd k contributes 1.

void solve(){
    ll n,k1,k2; cin>>n>>k1>>k2;
    priority_queue<ll>pq;
    vector<ll>a(n),b(n);
    forn(i,0,n){cin>>a[i];}
    forn(i,0,n){cin>>b[i];}
    forn(i,0,n){pq.push(abs(a[i]-b[i]));}
    ll k=k1+k2;
    while(k){
        ll t=pq.top();
        if(t<0){t++;}
        else if(t>0){t--;}
        else{
            if(k%2==0){cout<<0<<endl; return;}
            else{cout<<1<<endl; return;}
        }
        pq.pop(); pq.push(t); 
        k--;
    }
    ll ans=0;
    while(!pq.empty()){
        ans+=(pq.top())*(pq.top());
        pq.pop();
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
    solve();
}