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
    vector<int>v;
    for(int i=0;i<s.length();i++){
        int a=s[i]-'0'; 
        if(a==8 || a==0){
            cout<<"YES"<<endl; cout<<a<<endl; return;
        }
        v.pb(a);
    }
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int no=v[i]*100 + v[j]*10 + v[k];
                int ko=v[j]*10 + v[k];
                int co=v[i]*10 + v[k];
                int bo=v[i]*10 + v[j];
                if(bo%8==0){cout<<"YES"<<endl; cout<<bo<<endl; return;}
                if(co%8==0){cout<<"YES"<<endl; cout<<co<<endl; return;}
                if(ko%8==0){cout<<"YES"<<endl; cout<<ko<<endl; return;}
                if(no%8==0){cout<<"YES"<<endl; cout<<no<<endl; return;}
            }

        }
    }
    cout<<"NO"<<endl;
}
int main(){
    KUNAL
        solve();
}