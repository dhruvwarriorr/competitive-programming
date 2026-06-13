#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// check if "mid" is a valid answer
bool check(ll mid, const vector<ll> &a, ll k){
    ll cnt = 1;
    ll sum = 0;

    for(ll x : a){
        if(sum + x > mid){
            cnt++;
            sum = x;
        } else {
            sum += x;
        }
        if(x > mid) return false;   // impossible
        if(cnt > k) return false;
    }

    return true;
}

int main() {

    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll low = *max_element(a.begin(), a.end());
    ll high = accumulate(a.begin(), a.end(), 0LL);
    ll ans = high;

    while(low <= high){
        ll mid = low + (high - low) / 2;

        if(check(mid, a, k)){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << '\n';

}
