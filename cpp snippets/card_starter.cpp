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

unordered_map<char, int> cardSuitMap = {
    {'D', 0}, 
    {'C', 1}, 
    {'H', 2}, 
    {'S', 3}
};

unordered_map<char, int> cardRankMap = {
    {'2', 0},  {'3', 1},  {'4', 2},  {'5', 3},  {'6', 4},  {'7', 5},  {'8', 6},
    {'9', 7},  {'T', 8},  {'J', 9},  {'Q', 10}, {'K', 11}, {'A', 12}
};

int cardToIndex(char suit, char rank) {
    // cout<<card<<endl;
    // char suit = card[0];  // First character is the suit
    // char rank = card[1];  // Second character is the rank

    // Calculate the index as: (suit index * 13) + rank index
    return cardSuitMap[suit] * 13 + cardRankMap[rank];
}

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
     cout<<"Hello Universe!";
}
 
int main(){
 
    fast_io;
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<vector<int>> matrix(4, vector<int>(13, 0));

    for(auto &suit: cardSuitMap){
        for(auto &rank: cardRankMap){
            matrix[cardSuitMap[suit.first]][cardRankMap[rank.first]] = cardToIndex(suit.first, rank.first);
        }
    }

    for(auto &rows: matrix){
        for(auto &n: rows){
            cout<<n<<" ";
        }
        cout<<endl;
    }

 
    return 0;
}