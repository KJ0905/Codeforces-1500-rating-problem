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

// First, we need to observe that the number of palindromes less than 4⋅104 is relatively very small. The number of 5-digit palindromes are 300
// (enumerate all 3-digit numbers less than 400 and append the first two digits in the reverse order). Similarly, the number of 4-digit, 3-digit,
// 2-digit and 1-digit palindromes are 90, 90, 9 and 9 respectively, giving a total of M=498 palindromes.

// Now, the problem can be solved just like the classical partitions problem which can be solved using Dynamic Programming.

const int N=40004;
vector<ll> palindromeno;
vector<ll>dp(N);
bool ispalindrome(ll x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    ll reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    return (x == reversedHalf || x == reversedHalf / 10);
}
void solve(){
    forn(i,0,N){
        if(ispalindrome(i)){palindromeno.pb(i);}
    }
    dp[0] = 1;
    for (auto c:palindromeno) {
        for (int x = 1; x < N; x++) {
            if (x-c >= 0){
                dp[x] += dp[x-c];
                dp[x]%=mod;
            }
        }
    }
}
int main(){
    KUNAL
    solve();
     int t; cin>>t;
     while(t--){
        ll n; cin>>n;
        cout<<dp[n]<<endl;
     }
    //solve();
}