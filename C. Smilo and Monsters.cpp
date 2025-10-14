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

// first sort the array then apply two pinter approach i at 0 and j at n-1. Now,for each iteration i,add value a[i] in sum 
// and increase i until sum is greater than or eqaul to a[j] if it happens then decrease j.consider edge cases separately when i==j.

ll calc(ll a,ll sum){
    ll s=1,e=a; ll ans=0;
    while(s<=e){
        ll mid=(s+e)>>1;
        if(mid+sum >= a-mid){
            ans=mid+1; e=mid-1;
        }
        else{s=mid+1;}
    }
    return ans;
}
void solve(){
    ll n; cin>>n;
    vector<ll>a(n);
    forn(i,0,n){
        cin>>a[i];
    }
    sort(all(a));
    ll i=0,j=n-1; ll sum=0,ans=0;
    while(i<=j){
        if(i==j && a[i]!=0){
            if(sum==0){
                if(a[i]%2==0){ans+=(a[i]/2)+1;}
                else if(a[i]==1){ans++;}
                else{ans+=(a[i]/2)+1+1;}
                break;
            }
            else{
                if(a[i]==1 || sum>=a[i]){ans++; break;}
                ans+=calc(a[i],sum);
                break;
            }
        }
        sum +=a[i]; ans+=a[i];
        if(sum<a[j]){
             i++; continue;
        }
        else if(sum==a[j]){
            ans+=1; j--; i++; sum=0;
        }
        else if(sum>a[j]){
            ans-=(sum-a[j]); ans++; sum-=a[j]; a[i]=sum; sum=0; j--;
        }
    }
    cout<<ans<<endl;
}
int main(){
    KUNAL
     int t; cin>>t;
     while(t--){
          solve();
     }
    //solve();
}