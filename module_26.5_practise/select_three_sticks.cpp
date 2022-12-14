#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define   fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
void solution();

int main()
{
    fast
    ll t; cin >> t;
    while(t--) solution();
}

void solution(){
    int n; cin >> n;
    int a[n + 1];
    int ans = 1e9;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i + 2 <= n; i++) {
      ans = min(ans, a[i + 2] - a[i]);
    }
    cout << ans << '\n';
  }
