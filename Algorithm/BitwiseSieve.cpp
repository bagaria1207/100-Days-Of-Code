#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ifnotPrime(ll prime[], ll x)
{
	return (prime[x/64] & (1 << ((x >> 1) & 31)));
}

bool makeComposite(ll prime[], ll x)
{
	prime[x/64] |= (1 << ((x >> 1) & 31));
}
void bitWiseSieve(ll n)
{
	ll prime[n/64];
	memset(prime, 0, sizeof(prime));
	for (ll i = 3; i * i <= n; i += 2) {
		if (!ifnotPrime(prime, i))
			for (ll j = i * i, k = i << 1; j < n; j += k)
				makeComposite(prime, j);
	}
	cout<<2<<"\n";
	for (ll i = 3; i <= n; i += 2)
		if (!ifnotPrime(prime, i))
            cout<<i<<"\n";
}
int main()
{
	int n = 100000001;
	bitWiseSieve(n);
	return 0;
}
