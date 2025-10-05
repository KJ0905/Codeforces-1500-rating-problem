#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define forn(j,m) for(int i=j;i<m;i++)
int mini=INT_MAX;
int maxi=INT_MIN;
ll lmini=INT64_MAX;
ll lmaxi=INT64_MIN;
 //freopen("guess.in","r",stdin);     freopen("billboard.out","w",stdout);

 int main(){
    int n,q; cin>>n>>q;// int m=200002;
    ll arr[n+1]={0};
    forn(1,n+1){cin>>arr[i];}
    ll query[n+2]={0};
    forn(0,q){
        int l,r; cin>>l>>r;
        query[l]++;query[r+1]--;
    }
    for(int i=1;i<n+1;i++){
        query[i]+=query[i-1];
    }
    sort(query,query+n+1);
    sort(arr,arr+n+1); ll ans=0;
    for(int i=1;i<n+1;i++){
        ans+=(arr[i]*query[i]);
    }
    cout<<ans<<endl;
 }