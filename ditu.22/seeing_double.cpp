#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;

    string ans = " " ;
    
    string aans = " " ;

    for(int i = 0 ; i < 2 * sz(s); ++i){
        ans = i + i;
    }

    for(int i = 0; i < sz(ans) ; ++i){
        aans.push_back(i);
        i+= 2;
        for(int j = sz(ans); j >= 1; ++j){
            aans.push_back(j);
                i+= 2;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
