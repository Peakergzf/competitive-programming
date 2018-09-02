#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
// (avoid vector resize)
vi X(1005), Y(1005), P(1005);

int stopTime = 1;

// takes two targets and returns the distance between them
double dist(int t1, int t2) {
    return sqrt( (X[t1]-X[t2])*(X[t1]-X[t2]) + (Y[t1]-Y[t2])*(Y[t1]-Y[t2]) );
}

int main() {
    cin >> N;

    for (int i=1; i<=N; i++) {
        cin >> X[i] >> Y[i] >> P[i];
    }
    X[N+1] = 100, Y[N+1] = 100;

    // min score ended at target i ( including (0,0) and (100,100) )
    vector<double> dp(N+2);
    
    for (int i=1; i<=N+1; i++) { // for each target i
        
        // init
        dp[i] = dp[i-1] + dist(i-1,i) + stopTime;

        for (int j=0; j<=i-1; j++) { // for each target j before i
            int curPnt = 0; // penalty we get from target j to i (targets skipped in between)
            for (int k=j+1; k<=i-1; k++) { // for each target between j and i
                curPnt += P[k];
            }
            double curScore = curPnt + dp[j] + dist(j,i) + stopTime;
            dp[i] = min(dp[i], curScore);
        }
    }

    cout << fixed << setprecision(10) << dp[N+1] << endl;

    return 0;
}