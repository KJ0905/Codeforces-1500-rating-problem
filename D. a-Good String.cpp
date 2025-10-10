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


int makegood(string &s,char c){
    int n=s.size();
    if(n==1){ return s[0]==c ? 0:1;}
    int mid=n/2;
    string left=getsubstr(s,0,mid);
    string right=getsubst(s,mid);
    int leftcost=mid-count(all(left),c);
    int rightcost=mid-count(all(right),c);
    int opt1=leftcost+makegood(right,c+1);
    int opt2=rightcost+makegood(left,c+1);
    return min(opt1,opt2);
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    cout<<makegood(s,'a')<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
}