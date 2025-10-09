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
#define getsubstr(x,startingindex,length) x.substr(startingindex,length)
#define getsubst(x,startingindex) x.substr(startingindex) // to get substring from startingindex upto end.
// Conversion of int,float into string using to_string(intvalue)

// for every +10 in l ,no. of changed digit is 11 .similarly for +100 in l,
// no. of changed digit is 111.for +1000 it is 1111 and so on. But one 
// case check when we do +10 then it can go above or eqaul to 100 so for this
//  we check changes separately,similarly for +100,+1000.. .

ll check(ll prev,ll curr){
    ll cnt=0;
    while(prev!=0 && curr!=0){
        ll prevld=prev%10;
        ll currld=curr%10;
        if(prevld!=currld){cnt++;}
        prev/=10,curr/=10;
    }
    while(curr!=0){
        cnt++; curr/=10;
    }
    return cnt;
}
void solve(){
    ll l,r; cin>>l>>r;
    ll diff=r-l; ll ans=0;
    ll dld=diff%10;
    while(dld--){
        ll prev=l; l++; ans+=check(prev,l);
    }
    diff/=10;l/=10; ll cost=1;
    while(diff!=0){
        cost=cost*10+1;
        ll dld=diff%10; diff/=10;
        ll prev=l; prev/=10;
        if(l%10 + dld <=9){ans+=dld*cost; l+=dld; l/=10;}
        else{
            ans+=dld*cost; l+=dld; l/=10;
            ans+=check(prev,l);
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
}