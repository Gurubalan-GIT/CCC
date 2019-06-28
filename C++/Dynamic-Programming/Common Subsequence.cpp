#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define isro ios_base::sync_with_stdio(false);
#define find(v,x) find(all(v),x)!=v.end()
#define rep(i, n) for(ll i = 1;i <=n; i++)
#define newline cout<<endl;
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

const ll mod = 1e9 + 7;

int main(){
    isro;

    ll n, m;
    cin>>n>> m;
    vi s(n+1),t(m+1);
    rep(i, n) cin >> s[i];
    rep(i, m) cin >> t[i];
 
    vii dp(n + 1, vi(m + 1,0));
    vii sum(n + 1,vi(m + 1,0));

     for(ll i=1;i<=n;i++){
         for(ll j=1;j<=m;j++){
             if(s[i]==t[j]){
                 sum[i][j]=(sum[i][j-1]+sum[i-1][j]+1)%mod;
//                 sum[i][j]%=mod;
             }
             else{
                 sum[i][j]=(sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1]+mod)%mod;
 //                sum[i][j]%=mod;
             }
         }
     }    

//    cout<<sum[n][m]<<endl; 
        cout << (sum[n][m]+1)%mod << endl;
    return 0;
}

/*
      rep(i,n){
          rep(j,m){
              cout<<sum[i][j]<<" ";
          }
          cout<<endl;
      }


*/

/*
//    ll ans = 1;
//    rep(i, n) rep(j, m) ans += dp[i][j], ans %= mod;

      rep(i,n){
          rep(j,m){
              ans+=dp[i][j];
              ans%=mod;
              cout<<dp[i][j]<<" ";
          }
          cout<<endl;
      }



*/

/*
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++) {
//            debug("Hell0");
            if (s[i] == t[j]) {
                dp[i][j] = sum[i-1][j-1] + 1;
            } 
            sum[i][j] = sum[i][j- 1] + sum[i - 1][j] + dp[i][j];
            sum[i][j] = (sum[i][j] - sum[i-1][j-1]) % mod;
        }
    }
*/

//            dp[i][j] %= mod;
//            sum[i][j] %= mod;

