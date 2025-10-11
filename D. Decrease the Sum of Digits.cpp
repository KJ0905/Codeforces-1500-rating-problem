#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
//#define ld long double
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

//APPROACH:
//just make digits equal to zero start from last digit i.e. one's place and goes on until we get
//sum less than or equal to k.

ll checksum(ll temp){
    ll sum=0;
    while(temp!=0){
        sum+=temp%10; temp/=10;
    }
    return sum;
}
void solve(){
    ll n,k; cin>>n>>k;
    
    if(checksum(n)<=k){
        cout<<0<<endl; return;
    }
    vector<ll>ans;
    ll temp=n,carry=1;
    ll ld=temp%10; temp/=10;
    if(ld==0){carry=0;}
    temp+=carry;
    ans.pb((10-ld==10 ? 0:10-ld));
    while(true){
        if(checksum(temp)<=k){break;}
       // temp+=carry;
        carry=1;
        ll ld=temp%10; temp/=10;
        if(ld==0){carry=0;}
        temp+=carry;
        ans.pb((10-ld==10 ? 0:10-ld));
    }
    for(ll i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }cout<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
}