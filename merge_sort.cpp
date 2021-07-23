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

void merge(int *a, int s, int mid, int e)
{
    int b[mid - s + 1];
    int p[e - mid];
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int xx = 0;
    for (int i = 0; i <= mid; i++)
    {
        b[xx] = a[i]; xx++;
    }
    xx = 0;
    for (int i = mid + 1; i <= e; i++)
    {
        p[xx] = a[i]; xx++;
    }
    int i = 0, j = 0, c = 0;
    while (i < n1 && j < n2)
    {
        if (b[i] < p[j])
        {
            a[c] = b[i];
            c++; i++;
        }
        else if (b[i] > p[j])
        {
            a[c] = p[j];
            c++; j++;
        }
        else
        {
            a[c] = p[j];
            c++;
            a[c] = p[j];
            i++; j++;
        }
    }

    while (i < n1)
    {
        a[c] = b[i];
        c++;
        i++;
    }
    while (j < n2)
    {
        a[c] = p[j];
        c++;
        j++;
    }


}
void merge_sort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    merge_sort(a, 0, mid);
    merge_sort(a, mid + 1, e);
    merge(a, 0, mid, e);
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
        int n;
        cin >> n;
        int a[n];
        read(a, n);
        merge_sort(a, 0, n - 1);
        print(a, n);
        cout << endl;
    }
    cerr << "\nTIME: " << (long double)(clock() - T) / CLOCKS_PER_SEC << " sec\n";
    T = clock();
    return 0;
}
