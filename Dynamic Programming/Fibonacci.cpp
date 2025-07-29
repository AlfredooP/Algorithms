//#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

int result;

//Recursividad
int fibRec(int n) {
	if(n <= 2) {
		result = 1; 
	}
	else {
		result = fibRec(n-1) + fibRec(n-2);
	}
	return result;
}


//Top-down
vector<int> memo; //unordered_map<int, int> memo;
int fibTD(int n) {
	if (memo.size() <= n) {
		memo.resize(n + 1, -1);
	}
	if (memo[n] != -1) { // if (memo.find(n) != memo.end()) {
		return memo[n];
	}
	if (n <= 2) {
		result = 1;
	}
	else {
		result = fibTD(n-1) + fibTD(n-2);
	}
	memo[n] = result;
	return result;
}


//Bottom-up
int fibBU(int n) {
	if (n == 0) {
		return 0;
	}
	vector<int> memo(n + 1, 0);
	memo[1] = 1;
	for (int i = 2; i <= n; i++) {
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	return memo[n];
}


int main() {
	int n;
	cin >> n;
	cout << "Bottom-up: " << fibBU(n) << endl;
	cout << "Top-down: " << fibTD(n) << endl;
	cout << "Recursividad: " << fibRec(n) << endl;

	return 0;
}