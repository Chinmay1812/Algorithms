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

void merge(int *a,int left,int mid,int right)
{
	int i=left,j=mid,k=0;
    int temp[right-left+1];
    
    while(i<mid && j<=right)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else if(a[i]==a[j])
        {
            temp[k++]=a[i++];
            temp[k++]=a[j++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=right)
    {
        temp[k++]=a[j++];
    }
    for(int x=left,z=0;x<=right;x++,z++)
    {
        a[x]=temp[z];
    }
    
}

void merge_sort(int *a,int s,int e)
{
    if(s<e)
    {
        int mid=s+(e-s)/2;
        merge_sort(a,s,mid);
        merge_sort(a,mid+1,e);
        merge(a,s,mid+1,e);
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = clock();
    int t = 1 ;
    cin >> t ;
    while (t--)
    {
        int n;
    	cin>>n;
        int a[n];
        read(a,n);
        merge_sort(a,0,n-1);
		print(a,n);
        cout<<endl;
    }
    cerr << "\nTIME: " << (long double)(clock() - T) / CLOCKS_PER_SEC << " sec\n";
    T = clock();
    return 0;
}
