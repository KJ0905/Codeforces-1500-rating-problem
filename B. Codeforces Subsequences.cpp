#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(j,m) for(int i=j;i<m;i++)
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

// If we repeat each letter a_i times, then the total number of "codeforces" subsequences formed is:
//       a1 * a2 * a3 * a4 * a5 * a6 * a7 * a8 * a9 * a10
// We want this product to be ≥ k, and the sum (string length) to be minimal.
// To minimize the sum for a fixed product, the numbers should be as equal as possible.
// So we start with all ai=1, and then repeatedly increase the smallest ai until the product ≥ k.

void solve(){
    ll k; cin>>k;
    string s="codeforces";
    vector<ll>v(10,1);
    ll prod=1; ll ind=0;
    while(prod<k){
        prod/=v[ind];
        v[ind]++;
        prod*=v[ind];
        ind=(ind+1)%10;
    }
    for(ll i=0;i<10;i++){
        while(v[i]--){
            cout<<s[i];
        }
    }
}
int main(){
    KUNAL
          solve();
}