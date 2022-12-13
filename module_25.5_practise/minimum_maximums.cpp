#include <iostream>
typedef long long int ll;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;

void answer();
int main() {
    fast
    int t;
    cin >> t;
    while(t--) answer();
}

void answer(){
    int l1,r1,l2,r2,ans;
    cin >> l1 >> r1 >> l2 >> r2;
    if(min(r1, r2) >= max(l1, l2)) ans =max(l1,l2);
    else ans=l1+l2;
    cout << ans << '\n';
}

