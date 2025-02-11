#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define nl cout<<endl
#define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void printNext(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    for(int i=1;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty()==false&&s.top()<arr[i]){
            cout<<s.top()<<"-->"<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while(s.empty()==false){
        cout<<s.top()<<"-->"<<-1<<endl;
        s.pop();
    }
}
int main(){
    fast_cin();
    int n;
    cin>>n;
    int arr[n];
    arrin(i,arr,n);
    printNext(arr,n);
    
    return 0;
}