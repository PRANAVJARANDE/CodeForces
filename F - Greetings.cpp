#include <bits/stdc++.h>
using namespace std; 
#define MOD (int)(1e9 + 7)
#define ll long long


void build(int node,int i,int j,vector<ll>&tree)
{
	if(i==j)
	{
		tree[node]=1;
		return;
	}
	ll mid=(i+j)/2;
	build(2*node+1,i,mid,tree);
	build(2*node+2,mid+1,j,tree);
	tree[node]=tree[2*node+2]+tree[2*node+1];
}

ll update(int node,int i,int j,vector<ll>&tree,int in)
{
	if(i==j)
	{
		tree[node]=0;
		return 0;
	}

	ll mid=(i+j)/2;
	ll ans=0;
	if(in<=mid)
	{
		ans=update(2*node+1,i,mid,tree,in);
	}
	else
	{
		ans=tree[2*node+1]+update(2*node+2,mid+1,j,tree,in);
	}
	tree[node]=tree[2*node+1]+tree[2*node+2];
	return ans;
}

int bs(vector<ll>& arr, int target) 
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) 
	{
        int mid =left+(right - left)/2;
        if (arr[mid] == target) 
		{
            return mid; 
        } 
		else if(arr[mid]<target) 
		{
            left=mid+1;
        } 
		else 
		{
            right=mid-1; 
        }
    }

    return -1;
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector<vector<ll>>arr;
		vector<ll> temp;
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			arr.push_back({a,b});
			temp.push_back(b);
		}
		sort(arr.begin(),arr.end());
		sort(temp.begin(),temp.end());
		vector<ll>tree(4*n,0);
		build(0,0,n-1,tree);

		ll sum=0;
		for(int i=0;i<n;i++)
		{
			int in=bs(temp,arr[i][1]);
			sum+=update(0,0,n-1,tree,in);
		}
		cout<<sum<<endl;
		
	}
	
} 
