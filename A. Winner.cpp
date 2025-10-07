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
    int n; cin>>n;
    vector<pair<string,int>>p(n);
    map<string,int>m;
    forn(0,n){
        string s; int x; cin>>s>>x;
        p[i]={s,x}; m[s]+=x;
    }
    map<int, string>a;
    for(auto &val:m){
        a[val.second]=val.first;
    }
    int maxval= prev(a.end())->first;
    vector<string>won;
    for(auto &val:m){
        if(val.second==maxval){
            won.pb(val.first);
        }
    }
 //   cout<<maxval;
    m.clear();
    forn(0,n){
        m[p[i].first]+=p[i].second;
        if(m[p[i].first]>=maxval){
            for( auto &val:won){
                if(p[i].first==val){
                    cout<<p[i].first<<endl; return;
                }
            }
        }
    }
}
int main(){
    KUNAL
        solve();
}