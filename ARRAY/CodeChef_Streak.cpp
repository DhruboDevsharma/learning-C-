#include <iostream>
#include <vector>
using namespace std;

int maxStreak(vector<int>& arr) {
    int count = 0, maxCount = 0;
    for(int x : arr) {
        if(x > 0) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> Om(N), Addy(N);

        for(int i=0; i<N; i++) cin >> Om[i];
        for(int i=0; i<N; i++) cin >> Addy[i];

        int omStreak = maxStreak(Om);
        int addyStreak = maxStreak(Addy);

        if(omStreak > addyStreak) cout << "OM\n";
        else if(addyStreak > omStreak) cout << "ADDY\n";
        else cout << "DRAW\n";
    }
    return 0;
}
