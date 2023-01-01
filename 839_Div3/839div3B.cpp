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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int t; cin>>t;
    while(t--)
    {
        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[3]>>arr[2];
        if(arr[0]<min(arr[1],arr[3]) && arr[1]<arr[2] && arr[3]<arr[2]){
            cout<<"YES\n"; continue;
        }
        if(arr[3]<min(arr[0],arr[2]) && arr[0]<arr[1] && arr[2]<arr[1]){
            cout<<"YES\n"; continue;
        }
        if(arr[2]<min(arr[3],arr[1]) && arr[3]<arr[0] && arr[1]<arr[0]){
            cout<<"YES\n"; continue;
        }
        if(arr[1]<min(arr[2],arr[0]) && arr[2]<arr[3] && arr[0]<arr[3]){
            cout<<"YES\n"; continue;
        }
        cout<<"NO\n";
    }
}
