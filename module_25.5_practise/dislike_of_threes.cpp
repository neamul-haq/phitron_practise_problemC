#include <iostream>
typedef long long int ll;
#define   fast          {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
using namespace std;

void output();
int main() {
    fast
    int t;
    cin >> t;
    while(t--) {
        output();
    }
}

void output(){
    int k, ans;
    cin >> k;
    int cnt =0;
    for(int i=1; k!=cnt; i++){
        if(i%3!=0 and i%10!=3){cnt++;
        ans = i;}
    }
    cout << ans << '\n';
}

