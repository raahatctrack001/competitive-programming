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

void read_indexes(vector<int> &numbers){
    string line;
    getline(cin, line);

    istringstream ss(line);
    numbers = vector<int>(istream_iterator<int>(ss), istream_iterator<int>());
}

void read_string(vector<string> &values){
    string line;
    getline(cin, line);

    istringstream ss(line);
    values = vector<string> (istream_iterator<string>(ss), istream_iterator<string>());

}
void solve(){
    int t;
    cin>>t;

    string blank_line;
    cin.ignore();

    while(t--){
        getline(cin, blank_line);

        vector<int> indexes;
        vector<string> values;

        read_indexes(indexes);
        read_string(values);
        
        vector<pair<int, string>> vPair;
        for(int i = 0; i < indexes.size(); i++){
            vPair.push_back({indexes[i], values[i]});
        }

        sort(vPair);

        for(auto &it: vPair){
            cout<<it.second<<endl;
        }
        if(t == 0)
        return;

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