#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    // 1 4 13 15 17 20 6-3+1 3+1 4

    cout << a[k - 1] << " " << a[n - k + 1];
}