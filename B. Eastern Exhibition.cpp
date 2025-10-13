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

// At first let's see that the problem is not two dimensional. If we change the x coordinate the sum of distances by y
// is not changed at all. So we just need to calculate the number of good points on a line with points having coordinates x
// and then y and multiply the answers.
// Now to calculate the answer on a line we could use a known fact: point with the smallest summary distance is between left 
// and right median. So now we only need to sort the array and find the elements on positions ⌊n+1/2⌋ and ⌊n+2/2⌋ and return
// their difference plus one.

ll solve(vector<ll>&x){
    sort(all(x));
    ll anscount=x[x.size()/2] - x[(x.size()-1)/2] + 1;
    return anscount;
}
void solve(){
    ll n; cin>>n;
    vector<ll>x(n),y(n);
    forn(i,0,n){
        cin>>x[i]>>y[i];
    }
    cout<<solve(x)*solve(y)<<endl;
}
int main(){
    KUNAL
    int t; cin>>t;
     while(t--){
        solve();
     }
    //solve();
}
