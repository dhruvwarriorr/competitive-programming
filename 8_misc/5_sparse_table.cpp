#include <bits/stdc++.h>
using namespace std;

struct SparseTableMin
{
    int n, maxLog;
    vector<int> lg;
    vector<vector<long long>> st;

    // O(N log N)
    SparseTableMin(const vector<long long> &a)
    {
        n = (int)a.size();
        maxLog = n > 1 ? (int)log2(n) : 0;
        lg.assign(n + 1, 0);
        for (int i = 2; i <= n; i++)
            lg[i] = lg[i / 2] + 1;

        st.assign(maxLog + 1, vector<long long>(n));
        st[0] = a;

        for (int j = 1; j <= maxLog; j++)
        {
            for (int i = 0; i + (1 << j) <= n; i++)
            {
                st[j][i] = min(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
            }
        }
    }

    // O(1)
    long long queryMin(int l, int r) const
    {
        int j = lg[r - l + 1];
        return min(st[j][l], st[j][r - (1 << j) + 1]);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    SparseTableMin spt(a);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << spt.queryMin(l, r) << '\n';
    }

    return 0;
}
