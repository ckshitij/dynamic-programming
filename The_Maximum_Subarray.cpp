#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <stack> 
#define size 1000007
#define ll long long 
#define forn(i ,n) for(ll i = 0 ; i < (ll)(n) ; i++)
#define fora(i,a,n) for(ll i = (ll)(a) ; i <= (ll)(n) ; i++)
using namespace std;

ll non_contigious(ll v[] , ll n)
{
	ll maximum = -999999,sum = 0,count = 0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i] > 0)
			sum += v[i] , count++;
		maximum = max(v[i],maximum); 
	}
	if(count == 0)
		return maximum;
	else 
		return sum;
}

ll contigious(ll v[] ,ll n)
{
	ll count = 0, ans = 0,sum = 0;
    ll maximum = -999999 ;
    for (int i = 0; i < n; ++i)
	{
		if(v[i] > 0)
			sum += v[i] , count++;
		maximum = max(v[i],maximum); 
	}
	if(count == 0)
		return maximum;
    for (int i = 0; i < n; i++)
    {
        ans = ans + v[i];
        if (ans < 0)
            ans = 0;
        if (count < ans)
            count = ans;
    }
    return count;
}

int main() 
{
	ios :: sync_with_stdio(false);
	ll v[size];
	ll i,j,k,t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		forn(i,n)
		{
			cin>>v[i];
		}
		cout<<contigious(v,n)<<" "<<non_contigious(v,n)<<endl;
	}
	return 0;
}
