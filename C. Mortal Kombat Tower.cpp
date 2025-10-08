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


// we skip all zeroes and after ending of zero sequence ,friend not start with sequence of 1 as it is more costier
void solve(){
    int n; cin>>n;
    int a[n];
    forn(0,n){cin>>a[i];}
    int ans=0;
    bool turn =true;
    for(int i=0;i<n;i++){
        if(a[i]==0){turn=false; continue;}
        if(turn){
            turn=false;
            ans++;
        }
        else{
            turn=true;
            if(i+1<n && a[i+1]==1){i++; continue;}
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