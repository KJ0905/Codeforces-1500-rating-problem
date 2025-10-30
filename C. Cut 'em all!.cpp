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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define bitindll(val) __builtin_ctzll(val) 
// __builtin_ctzll(val) (val!=0) is a compiler-specific built-in function that counts the number of trailing zero bits in a long long integer val ,
//if val=16 then it returns 4 because there are four zero bits after the least significant set bit. 
#define bitind(val) __builtin_ctz(val) //for unsigned int (val!=0)
#define countsetbitsll(val) __builtin_popcountll(val) //Counts the number of 1s in the binary representation of a long long integer.
// __builtin_popcount(unsigned int) for unsigned int
// __builtin_popcountl(unsigned long) for unsigned long

vector<vector<int>>adj;
vector<bool>visited;
vector<int>cnt; int ans=0;
void dfs(int node, int p){
    cnt[node]=1;
    for(auto &next:adj[node]){
        if(next==p){continue;}
        dfs(next,node);
        cnt[node]+=cnt[next];
    }
    if(cnt[node]%2==0){ans++; cnt[node]=0;}
}
int main(){
  //freopen("planting.in","r",stdin);   freopen("planting.out","w",stdout);
    int n; cin>>n;
    adj=vector<vector<int>>(n);
    forn(i,1,n){
        int x,y; cin>>x>>y; x--,y--;
        adj[x].pb(y) , adj[y].pb(x);
    }
    cnt.resize(n);
    if(n%2!=0){cout<<-1<<endl; return 0;}
    dfs(0,-1);
    cout<<ans-1<<endl;
}