#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'
#define vll vector<long long int>
#define vi vector<int>
#define fo(i,n) for(int i=0;i<n;i++)
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(a) a.begin(),a.end()
#define sz(x) (int)(x).size()
#define mp make_pair

ll binpow(ll a, ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
}


void solve(){
	ll n,k;
	cin>>n>>k;
	vll v(n);
	map<ll,ll> mp;
	for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
    	if(v[i]%k!=0){
    		ll diff=k-v[i]%k;
    		mp[diff]++;  	
    	}
    }
    ll mx=0;
    ll val;
    for(auto x : mp){
    	val=(x.second-1)*k+(x.first);
    	mx=max(mx,val);
    }
    cout<<((mx!=0)?(mx+1):mx)<<'\n';
}



int main() {
    fast
    ll t=1;
    cin>>t;
    while(t--){
       solve();
    }
   
    
	// your code goes here
	return 0;
}
