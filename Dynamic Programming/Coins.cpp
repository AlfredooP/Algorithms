#include <vector>
#include <iostream>

using namespace std;

int min_ignore_none(int a, int b) {
	if(a == -1) return b;
	if(b == -1) return a;
	return min(a, b);
}

//Recursividad
int min_coins_Rec(int m, vector<int> coins) {
	int answer, subproblem;
	if (m == 0) {
		answer = 0;
	}
	else {
		answer = -1;
		for (int coin : coins) {
			subproblem = m - coin;
			if(subproblem < 0) {
				break;
			}
			answer = min_ignore_none(answer, min_coins_Rec(subproblem, coins) + 1);
		}
	}
	return answer;
}


//Top-down
vector<int> memo;
int min_coins_TD(int m, vector<int> coins) {
	if (memo.size() <= m) {
		memo.resize(m + 1, -1);
	}
	if (memo[m] != -1) {
		return memo[m];
	}
	if (m == 0) {
		return 0;
	}
	int answer = -1;
	for (int coin : coins) {
		int subproblem = m - coin;
		if(subproblem >= 0) {
			int candidate = min_coins_TD(subproblem, coins);
			if (candidate != -1) {
				answer = min_ignore_none(answer, candidate + 1);
			}
		}
	}
	memo[m] = answer;
	return answer;
}


//Bottom-up
int min_coins_BU(int m, vector<int> coins) {
	vector<int> dp(m+1, -1);
	dp[0] = 0;
	for(int i = 1; i <= m; i ++) {
		for(int coin : coins) {
			int subproblem = i - coin;
			if (subproblem >= 0 && dp[subproblem] != -1) {
				dp[i] = min_ignore_none(dp[i], dp[subproblem] + 1);
			}
		}
	}
	return dp[m];
}


int main() {
	int n, m;
	cout << "Valor esperado: ";
	cin >> m;
	cout <<  "Numero de monedas: ";
	cin >> n;
	vector<int> coins(n);
	int aux = 0;
	for(int i = 0; i < n; i++) {
		cout << "Valor de moneda: ";
		cin >> aux;
		coins[i] = aux;
	}
	cout << "Bottom-up: " << min_coins_BU(m, coins) << endl;
	cout << "Top-down: " << min_coins_TD(m, coins) << endl;
	cout << "Recursividad: " << min_coins_Rec(m, coins) << endl;

	return 0;
}