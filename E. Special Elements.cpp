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

void solve(){
    int n; cin>>n;
    int a[n+1];
    vector<bool>sp(n+1,false);
    forn(i,1,n+1){cin>>a[i];}
    int pre[n+1]; pre[0]=0;
    forn(i,1,n+1){
        pre[i]=pre[i-1]+a[i];
    }
    forn(i,1,n+1){
        forn(j,i+1,n+1){
            int diff=pre[j]-pre[i-1];
            if(diff>n){break;}
            sp[diff]=true;
        }
    }
    int ans=0;
    forn(i,1,n+1){
        if(sp[a[i]]){ans++;}
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