#include <bits/stdc++.h>
using namespace std;

int Square_Diff(int n){

int l, k, m;

	l = (n * (n + 1) * (2 * n + 1)) / 6;
	
	k = (n * (n + 1)) / 2;

	k = k * k;
	
	m = abs(l - k);
	
	return m;

}

int main()
{
	int n = 10;
	cout << Square_Diff(n);
	return 0;
	
}

