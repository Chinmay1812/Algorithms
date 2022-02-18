#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
#define lld double
#define pre(x) setprecision(x)
#define pi 3.14159265359
using namespace std;
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1e5 + 1;

int parent[N];
int Sizes[N];

void make(int v)
{
    parent[v] = v;
    Sizes[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Sizes[a] < Sizes[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        Sizes[a] += Sizes[b];
    }


}



int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = clock();
    int t = 1 ;
    // cin >> t ;
    while (t--)
    {
       
    }
    cerr << "\nTIME: " << (long double)(clock() - T) / CLOCKS_PER_SEC << " sec\n";
    T = clock();
    return 0;
}


