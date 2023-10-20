#include <iostream>

using namespace std;
using ll = long long;
int cnt[10000002];

int main() {
   int TC;
   while (TC--) {
       int n;
       cin >> n;
       memset(cnt, 0, sizeof cnt);
       for (int i = 0; i < n; i++) {
         int x; cin >> x;
        if(x > 0) cnt[x] = 1;
       }
       for (int i = 0; i < 1000001; i++) {
       if(cnt[0] == 0) {
           cout << i << endl;
           break;
       }
       }
       cout << endl;
   }
    return 0;
}
