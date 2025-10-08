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

// if length of resulting array is even of equal elements then xor of original array should be 0 
// ,if resulting length is odd of equal elements then after xor of original array give
// let say x value that is the resulting array value so just check if it is possible 
// to make x value odd no. of times using original array then answer is yes otherwise 
// no . 

void solve(){
    int n; cin>>n;
    int a[n];
    forn(0,n){cin>>a[i];}
    int ans=a[0];
    forn(1,n){
       // if(i==n-1 && ans==0){cout<<"YES"<<endl; return;}
        ans^=a[i];
    }
    if(ans==0){cout<<"YES"<<endl; return;}
    int b=0; int cnt=0;
    for(int i=0;i<n;i++){
        b^=a[i];
        if(b==ans){b=0; cnt++;}
    }
    //cout<<b<<endl;
    if((b==ans || b==0)&& cnt%2!=0 && cnt>1){cout<<"YES"<<endl; return;}
    cout<<"NO"<<endl;    
}
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
         solve();
    }
}