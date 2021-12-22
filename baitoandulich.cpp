#include <iostream>
using namespace std;
typedef long long ll;

ll n, s = 0;
ll a[25][25];
ll x[25], daxet[25] = {};
ll way[25] = {};
ll cimin = INT_MAX, minn = INT_MAX;

void Try(int i)
{
    if (s + cimin * (n - i + 1) >= minn)
        return;
    for (int j = 2; j <= n; j++)
    {
        if (daxet[j] == 0)
        {
            x[i] = j;
            daxet[j] = 1;
            s += a[x[i - 1]][j];
            // way[i] = j;
            if (i == n)
            {
                if (s + a[j][1] < minn){
                    minn = s + a[j][1];
                    for (int i = 1; i <= n; i++){
                        way[i] = x[i];
                    }
                }
                    
            }
            else
                Try(i + 1);
            s -= a[x[i - 1]][j];
            daxet[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    x[1] = 1;
    for (int j = 1; j <= n; j++)
        for (int i = 1; i <= n; i++)
        {
            cin >> a[j][i];
            cimin = min(cimin, a[j][i]);
        }
    Try(2);
    if (minn == INT_MAX)
        minn = 0;
    cout << minn << endl;
    // cout << 1 << " ";
    for (int i = 1; i <= n; i++) {
        cout << way[i] << " ";
    }
    cout << 1;
    return 0;
}
