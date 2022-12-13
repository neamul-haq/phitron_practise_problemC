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
    int n;
    cin >> n;
    if(n==1) {
        cout << 1 << '\n';
    }
    else{
        for(int i=2; i<=n+1; i++){
        cout << i << " ";
    }
    cout << '\n';
    }
}

