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


unordered_map<string, int> cardMapping = {
    {"ACE", 1},
    {"TWO", 2},
    {"THREE", 3},
    {"FOUR", 4},
    {"FIVE", 5},
    {"SIX", 6},
    {"SEVEN", 7},
    {"EIGHT", 8},
    {"NINE", 9},
    {"TEN", 10},
    {"JACK", 11},
    {"QUEEN", 12},
    {"KING", 13}
};
void solve(){
    int t;
    while(cin >> t and t != 0){
        string symbol, word;
        
        vector<string> answers(t, "");
        for(int i = 0; i < t; i++){
            cin >> symbol >> word;
			
			int length = word.length();
            int index = -1;
			while(length)
			{
			index = (index + 1) % t;
				if(answers[index] == "")
					--length;
			}

			answers[index] = symbol;
        }
        printVector(answers);
        cout<<endl;
        
        
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