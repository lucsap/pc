    #include <bits/stdc++.h>
    using namespace std;
    #define sws std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #define ll long long
    #define mp make_pair
    #define pii pair<int, int>
    #define endl "\n"
    #define ff first
    #define ss second

    int32_t main() {
        sws;
        int n;
        cin >> n;
        vector<pii> runners(n);
        vector<pii> pos(n);
     
        for(int i=0; i < n; i++) {
            int t; cin >> t;
            runners[i].ff = t; runners[i].ss = i+1;
        }
        
        sort(runners.begin(),runners.end());

        for (int i = 0; i < n; i++ ) {
            // cout << "ff " << runners[i].ff << " ss " << runners[i].ss << endl;
            pos[i].ff = runners[i].ss;

            if (i == 0) {
                pos[i].ss = runners[i].ss = i + 1;
            } else {
                if (runners[i].ff == runners[i - 1].ff) {
                    pos[i].ss = runners[i].ss = runners[i-1].ss;
                } else {
                    pos[i].ss = runners[i].ss = i + 1;
                }
            }
        }

        sort(pos.begin(), pos.end());

        for (int i = 0; i < n; i++ ) cout << pos[i].ss << " ";
        cout << endl;
        return 0;
    }