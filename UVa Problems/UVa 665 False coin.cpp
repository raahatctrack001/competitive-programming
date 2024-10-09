#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int M;
    cin >> M; // Number of test cases
    cin.ignore();
    while (M--) {
        int N, K;
        cin >> N >> K; // Number of coins and weighings
        bool lighter[N+1], heavier[N+1], normal[N+1];
        memset(lighter, false, sizeof(lighter));
        memset(heavier, false, sizeof(heavier));
        memset(normal, false, sizeof(normal));

        for (int i = 0; i < K; ++i) {
            int P;
            cin >> P;
            vector<int> left(P), right(P);
            for (int j = 0; j < P; ++j) cin >> left[j];
            for (int j = 0; j < P; ++j) cin >> right[j];
            
            char result;
            cin >> result;
            
            if (result == '=') {
                for (int j = 0; j < P; ++j) {
                    normal[left[j]] = true;
                    normal[right[j]] = true;
                }
            } else if (result == '<') {
                for (int j = 0; j < P; ++j) {
                    if (!normal[left[j]]) lighter[left[j]] = true;
                    if (!normal[right[j]]) heavier[right[j]] = true;
                }
                for (int j = 0; j < P; ++j) {
                    normal[left[j]] = normal[right[j]] = true;
                }
            } else if (result == '>') {
                for (int j = 0; j < P; ++j) {
                    if (!normal[left[j]]) heavier[left[j]] = true;
                    if (!normal[right[j]]) lighter[right[j]] = true;
                }
                for (int j = 0; j < P; ++j) {
                    normal[left[j]] = normal[right[j]] = true;
                }
            }
        }
        
        int falseCoin = 0;
        for (int i = 1; i <= N; ++i) {
            if (!normal[i] && (lighter[i] ^ heavier[i])) {
                if (falseCoin == 0) falseCoin = i;
                else { falseCoin = 0; break; }
            }
        }
        
        cout << falseCoin << endl;
        if (M) cout << endl; // Print a blank line between test cases.
        cin.ignore();
    }
    return 0;
}
