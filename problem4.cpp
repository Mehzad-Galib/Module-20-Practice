#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pre[n];
    pre[0] = a[0];

    for (int j = 1; j < n; j++)
    {
        pre[j] = a[j] + pre[j - 1];
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int ll, ul;
        cin >> ll >> ul;
        if (ll == 1)
            cout << pre[ul - 1] << endl;
        else
            cout << pre[ul - 1] - pre[ll - 2] << endl;
    }
}