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

// as only two no.combination or all digits same going to satisfy the condition. total 9*10=90 combinations 
// are possible using digits 0 to 9 so we check for each pair and those pairs has maximum ocuurence are going
// to stay within string and remaining all should be removed and that is minimum removal.

int countpair(string s,char i,char j){
    int val=0; bool turn=true;
    for(int k=0;k<s.size();k++){
        if(turn && s[k]==i){
            turn=false;
        }
        else if(!turn && s[k]==j){
            val++;
            turn=true;
        }
    }
    return val;
}
void solve(){
    string s; cin>>s;
    vector<vector<int>>v(10,vector<int>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i==j){v[i][j]=count(all(s),'0'+i);continue;}
            v[i][j]=countpair(s,'0'+i,'0'+j);
        }
    }
    int ans=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i==j){ ans=max(ans,v[i][j]); continue;}
            ans=max(ans,v[i][j]*2);
        }
    }
    cout<<s.size()-ans<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
}