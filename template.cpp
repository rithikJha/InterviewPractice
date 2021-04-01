#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Input
#define daci(x) 	int x; cin>>x
#define dacll(x) 	long long x; cin>>x
#define dacs(x) 	string x; cin>>x
#define c(x)		cin>>x

// Output
#define cnl(x)		cout<<x<<endl
#define csl(x)		cout<<x<<" "
#define deb(x) 		cout << #x << "=" << x << endl
#define deb2(x, y) 	cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pres(x,y)   fixed<<setprecision(y)<<x

// Variables
#define ll 										long long
typedef pair<int, int>							pii;
typedef pair<ll, ll>							pl;
typedef vector<int>								vi;
typedef vector<ll>								vl;
typedef vector<pii>								vpii;
typedef vector<pl>								vpl;
typedef vector<vi>								vvi;
typedef vector<vl>								vvl;
typedef map<int, int>    						mii;
typedef priority_queue<int> 					pqb;
typedef priority_queue<int, vi, greater<int> >	pqs;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Algorithms
#define all(x) 					x.begin(), x.end()
#define clr(x) 					memset(x, 0, sizeof(x))
#define sortall(x) 				sort(all(x))
#define iterate(it, a) 			for(auto it = a.begin(); it != a.end(); it++)
#define make_array(arr,n,type)  type *arr=new type[n];
#define w(x)            		daci(x); while(x--)
#define w1(x)            		int x=1; while(x--)
#define fo(i,n) 				for(int i=0;i<n;i++)
#define Fo(i,k,n) 				for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pb 						push_back
#define mp 						make_pair
#define F 						first
#define S 						second
#define setbits(x)              __builtin_popcountll(x)
#define zrobits(x)              __builtin_ctzll(x)

// Constants
#define mod    	1000000007
#define inf    	1e18
#define PI 		3.1415926535897932384626
const int N = 3e5, M = N;

/******************************************************************************************/




/****************************ESSENTIAL FUNCTIONS AND VARIABLES******************************/
int mpow(int base, int exp);
void ipgraph(int, int);
void dfs(int u, int parent);
void bfs(int u);
vi graph[N];
int nodes = 0, edges = 0, cnt_comp = 0;
int dp[N];

int visited[N] = {0};



mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0, lim - 1);
	return uid(rang);
}

void runIT()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/******************************************************************************************/










/*************************************PROBLEM LOGIC***********************************/
void solve() {
	
}

int32_t main() {

	runIT();
	w1(t) {
		solve();
	}

	return 0;
}
/******************************************************************************************/








/********************************HELPER FUNCTIONS***************************************/

// FAST EXPONENTIATION
int mpow(int base, int exp) {
	base %= mod;
	int result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % mod;
		base = ((ll)base * base) % mod;
		exp >>= 1;
	}
	return result;
}

// INPUT GRAPH
void ipgraph(int nodes, int edges) {
	int u, v;
	fo(i, edges) {
		c(u); c(v);
		graph[u].pb(v);
		graph[v].pb(u);
	}
}

// DFS A NODE
void dfs(int u, int parent) {

	for (int neighbor : graph[u]) {
		if (neighbor == parent) continue;
		dfs(neighbor, u);
	}
}

// BFS A NODE
void bfs(int u) {

	queue<int> helper;
	visited[u] = 1;
	helper.push(u);
	while (!helper.empty()) {
		int curr = helper.front();
		helper.pop();

		cout << curr << endl;
		for (int neighbor : graph[curr]) {
			if (visited[neighbor] == 0) {
				helper.push(neighbor);
				visited[neighbor] = 1;
			}

		}
	}
}

/******************************************************************************************/
