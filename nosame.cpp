#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    bool flag = 1;
    int c(0);
    while (c < n || flag == 0)
    {
        if (a[c] == a[c + 1])
        {
            flag = 0;
            break;
        }
        c++;
    }
    cout << flag << endl;
    return 0;
}
