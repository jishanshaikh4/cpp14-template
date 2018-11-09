// Let's try something newwwwwwwwww
// Code *NAME_HERE* prepared for *auction* by Jishan Shaikh via template.
// To be run as C++14

#include <bits/stdc++.h> // Be on safer side always!

// Some handful definitions used frequently
#define mod 			  1000000007
#define fastio() 		  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll 			  long long
#define mp(x, y) 		  make_pair(x, y)
#define f 			  first
#define s 			  second
#define sd(x) 			  scanf("%d", &x)
#define sd2(x, y) 		scanf("%d%d", &x, &y)
#define sd3(x, y, z) 	scanf("%d%d%d", &x, &y, &z)
#define sdl(x) 			  scanf("%lld", &x)
#define sdl2(x, y) 		scanf("%lld%lld", &x, &y)
#define sdl3(x, y, z) scanf("%lld%lld%lld", &x, &y, &z)
#define pb(x) 			  push_back(x)

// For definition of personal version of cin for int and string as gi and gs
#define gc				    getchar_unlocked
#ifndef getchar_unlocked
#define getchar_unlocked 	getchar
#endif

using namespace std;
// Its preferable NOT to use any element of std in harder problems!!!

// Utility functions
string inttostr(ll str){ // Worst case time complexity: O(characters_in_str)
	stringstream stream;
	stream << str;
	return stream.str();
}

ll modexpo(ll a,ll b,ll n){
	ll d=1;
	while(b){
		if(b&1)
			d=(d*a)%n;
		b>>=1;
		a=(a*a)%n;
	}
	return d;
}

ll expo(ll a, ll b){
	ll d = 1;
	while(b){
		if(b & 1)
			d *= a;
		b >>= 1;
		a *= a;
	}
	return d;
}

ll gcd(ll a, ll b){   // TODO: Recreate gcd function to handle larger inputs & removing recursion for avoiding stackoverflow.
	return b ? gcd(b, a%b) : a;
}

ll lcm(ll a, ll b){
	return (a * b) / gcd(a, b);
}

ll inv(ll a, ll m){
	return modexpo(a, m-2, m);
}

void parr(ll a[], ll n){
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

// Some handful functions
template <typename T>
void gi(T &r){      // Integer version of cin/scanf but VERY FAST.
	r = 0;
	char input = gc();
	int kl = 1;
	while(input < '0' || input > '9'){
		if(input == '-')
			kl = -1;

		input = gc();
	}
	while('0' <= input && input <= '9'){
		r = (r << 3) + (r << 1) + (input - '0'), input = gc();
	}
	if(kl < 1)
		r = -r;
}

void gs(string &r){ // String version of cin/scanf but VERY FAST for larger inputs.
	r.clear();
	char input = gc();
	while(!isgraph(input))
		input = gc();
	
	while(isgraph(input)){
		r.push_back(input);
		input = gc();
	}
}

// The main function, driver function required in cpp14
int main(){
	fastio(); // Untie-ing the cin with stdio.
	int i, j, k;
	string s;
	gi(i);
	gi(j);
	gi(k);
	gs(s);
	cout << i << endl << j << endl << k << endl;
	cout << s;
	int t;
	cin >> t; // Please don't forgot to take input t; it hurts a lot.
	while(t--){
		int n;
		cin >> n;
		vector <int> arr(n, 0);
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
