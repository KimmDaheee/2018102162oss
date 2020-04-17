#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int result = 1;

	for (int i = 0; i < k; i++) 
	{
		result *= (n - i);
	}

	for (int i = 1; i < k + 1; i++)
	{
		result /= i; //수정
	}

	cout << result;

}