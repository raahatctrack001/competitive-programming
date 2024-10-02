#include <bits/stdc++.h>
using namespace std;
 
#define fR(i, a, b) for (int i = (a); i < (b); i++)
#define fRD(i, a, b) for (int i = (a); i > (b); i--)
#define fRJ(i, a, b, j) for (int i = (a), i < (b); i += j)
#define fRJD(i, a, b, j) for (int i = (a), i > (b); i -= j)
#define fL(i, n) for (int i = 0; i < (n); i++)    
 
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define debug(x) cout << '>' << #x << ": " << x << endl;
#define printMap(mp) for(auto &it: mp) cout<<" ("<<it.F<<"-> "<<it.S<<") ";
#define printVector(v) for(auto &it: v) cout<<it<<" ";
#define printMatrix(v) for(auto &it: v) { for(auto &i: it) { cout<<i<<" "; cout<<endl;}}
#define rV(v) reverse(all(v));
#define cinV(v) for(auto &it: v) cin>>it;
#define sort(v) sort(all(v));
#define p_sort(f, m, e) partial_sort(f, m, e)
#define s_sort(v) stable_sort(all(v));

 
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef set<int> si;
typedef map<int, int> mii;

vector<string> tokenize(string &str){	
	vector <string> tokens;
	stringstream check1(str);
	 
	string intermediate;
	while(getline(check1, intermediate, ' '))
	{
		tokens.push_back(intermediate);
	}
	return tokens;
}

void solve(){
	int n;

	while(cin>>n and n != 0){
		vector<int> sizeOfRows(n);
		int maxLength = 0;
		for(int i = 0; i < n; i++){
			char character;
			int countX = 0;
			cin>>character;
			if(character == 'X')
				countX++;
			
			for(int j = 0; j < 25; j++){
				cin.read(&character, 1);
				if(character == 'X')
					countX++;
				maxLength = max(maxLength, countX);
			}
			sizeOfRows[i] = countX;
		}

		int ans = 0;
		for(int i = 0; i < n; i++){
			ans += (maxLength-sizeOfRows[i]);
		}
		cout<<ans<<endl;
	}
}
 
int main(){
 
	fast_io;
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt",  "r",  stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
	solve();
 
	return 0;
}