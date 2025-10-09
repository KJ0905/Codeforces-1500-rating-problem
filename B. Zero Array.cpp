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

void solve(){
    ll n; cin>>n;
    ll a[n]; ll sum=0;
    forn(0,n){
        cin>>a[i];
        sum+=a[i];
    }
    sort(al(a,n));
    if(sum%2==0 && sum-a[n-1]>=a[n-1]){
        cout<<"YES"<<endl; return;
    }
    cout<<"NO"<<endl;

}
int main(){
    KUNAL
         solve();
}