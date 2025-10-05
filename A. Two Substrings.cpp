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
    string s; cin>>s;
    int a=0,b=0,c=0; bool d=true,e=true;
    for(int i=0;i<s.length();i++){
        if((s[i]=='A' && s[i+1]=='B' && s[i+2]=='A')||(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B')){c++; i+=2; continue;}
        if(s[i]=='A' && s[i+1]=='B' && d){a++; i++; d=false; continue;}
        if(s[i]=='B' && s[i+1]=='A' && e){b++; i++; e=false; continue;}
    }
   // cout<<a<<" "<<b<<" "<<c<<" ";
    if(a!=0 && b!=0){cout<<"YES"<<endl; return;}
    if(a!=0 && c!=0){cout<<"YES"<<endl; return;}
    if(c!=0 && b!=0){cout<<"YES"<<endl; return;}
    if(c>1){cout<<"YES"<<endl; return;}
    else{cout<<"NO"<<endl; return;}
}
int main(){
    KUNAL
        solve();
}