#include<bits/stdc++.h>
#define pb push_back
#define endl ("\n")
#define mp make_pair
#define lb lower_bound
#define ff first
#define inf 1e18
#define ss second
#define cn continue
#define br break
#define ins insert
#define int long long
#define bit(x) __builtin_popcount(x)
#define all(x) x.begin(),x.end()
#define up upper_bound
#define read(a,n) rep(i,0,n){cin>>a[i];}
#define print(a,n) rep(i,0,n) cout<<a[i]<<" ";
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;
#define rep(i, a, n) for(int i = a; i < n; i++)
#define mod 1000000007
using namespace std;

const int n = 8;
char a[8][8];
int ans = 0;

bool possible(int row, int col)
{
    if (a[row][col] == '*')
    {
        return 0;
    }
    for (int i = row - 1; i >= 0; i--)
    {
        if (a[i][col] == '1')
        {
            return 0;
        }
    }

    for (int i = col - 1; i >= 0; i--)
    {
        if (a[row][i] == '1')
        {
            return 0;
        }
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (a[i][j] == '1')
        {
            return 0;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (a[i][j] == '1')
        {
            return 0;
        }
    }

    return 1;
}

void queen(int row, int col)
{
    if (row == n)
    {
        ans++;
        return;
    }
    if (row < n && col < n && row >= 0 && col >= 0)
    {
        rep(i, 0, n)
        {
            if (possible(row, i))
            {
                a[row][i] = '1';
                queen(row + 1, 0);
                a[row][i] = '.';
            }
        }
    }

}


int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = clock();
    int t = 1 ;
    //cin >> t ;
    while (t--)
    {
        rep(i, 0, 8)
        {
            rep(j, 0, 8)
            {
                cin >> a[i][j];
            }
        }
        queen(0, 0);
        cout << ans << endl;

    }
    cerr << "\nTIME: " << (long double)(clock() - T) / CLOCKS_PER_SEC << " sec\n";
    T = clock();
    return 0;
}
