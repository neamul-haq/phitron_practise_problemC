#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define   fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void answer();

int main()
{
    fast
    ll t; cin >> t;
    while(t--) answer();
}

void answer(){
    ll n; cin >> n;
    ll ans = (n+1)/10;
    cout << ans << '\n';
}
