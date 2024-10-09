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

int m = 1;
void solve(){
    int n;
    int petrol_capacity[ 100001] = {0};
    int consumption_between_pumps[ 100001] = {0};
    cin>>n;

    // cout<<n<<endl;

    for(int i = 0; i < n; i++)
        cin>>petrol_capacity[i];

    for(int i = 0; i < n; i++)
        cin>>consumption_between_pumps[i];

    vector<int> startingIndex;
    for(int i = 0; i < n; i++){
        if(petrol_capacity[i]-consumption_between_pumps[i] > 0){
            startingIndex.push_back(i);
        }
    }

    if(startingIndex.size() == 0){
        cout<<"Case "<<m++<<": Not Possible"<<endl;
    }
    else{
        bool is_completed = true;

        for(int i = 0; i < startingIndex.size(); i++){
            int currentIndex = startingIndex[i];
            int extra_petrol = petrol_capacity[currentIndex] - consumption_between_pumps[currentIndex];
            currentIndex = (currentIndex+1)%n;

            for(int j = 1; j < n; j++){
                int current_extra_petrol = petrol_capacity[currentIndex]-consumption_between_pumps[currentIndex];
                extra_petrol += current_extra_petrol;

                if(extra_petrol < 0){
                    break;
                }

                currentIndex++;
                if(currentIndex >= n)
                    currentIndex = 0;
            }
            if(extra_petrol > 0){
                cout<<"Case "<<m++<<": Possible from station "<<startingIndex[i]+1<<endl;
                return;
            }
        }
        cout<<"Case "<<m++<<": Not possible"<<endl;
        
    }
}
 
int main(){
 
    fast_io;
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    cin>>t;

    while(t--){
        solve();
    }

 
    return 0;
}