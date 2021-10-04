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
#define yy cout<<"Yes"<<endl;
#define nn cout<<"No"<<endl;
#define rep(i, a, n) for(int i = a; i < n; i++)
#define mod 1000000007
#define lld double
#define pre(x) setprecision(x)
#define pi 3.14159265359
using namespace std;
using namespace __gnu_pbds;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class triplet
{
public:
	int gcd;
	int x;
	int y;
};

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		gcd(b, a % b);
	}
}

triplet extended_euclid(int a, int b)
{
	if (b == 0)
	{
		triplet ans;
		ans.gcd = a;
		ans.x = 1;
		ans.y = 0;
		return ans;
	}

	triplet temp = extended_euclid(b, a % b);
	triplet var;
	var.x = temp.y;
	var.gcd = temp.gcd;
	var.y = temp.x - (a / b) * temp.y;
	return var;
}

int ModInverse(int a, int m)
{
	triplet ans = extended_euclid(a, m);
	return ans.x;
}


int32_t main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1 ;
	cin >> t ;
	while (t--)
	{
		int a, b;
		cin >> a >> b;

		cout << gcd(a, b) << endl;

	}
	return 0;
}