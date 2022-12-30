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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cout<<"hello\n";
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
