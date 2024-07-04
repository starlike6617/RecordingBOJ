#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	int S[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> S[i][j];
	
	bool isStartFin = true;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (S[i][j] != 0)
				{
					isStartFin = false;
					i = N;
					break;
				}
		
		if (isStartFin)
		{
			cout << 0;
			return 0;
		}
	
	int cnt = 0;
	while (true)
	{
		cnt++;
		
		int zeroCnt[N][N] = {};
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
			{
				if (S[i][j] == 0)
					continue;
				
				if (i != 0 && S[i - 1][j] == 0) zeroCnt[i][j]++;
				if (i != N - 1 && S[i + 1][j] == 0) zeroCnt[i][j]++;
				if (j != 0 && S[i][j - 1] == 0) zeroCnt[i][j]++;
				if (j != N - 1 && S[i][j + 1] == 0) zeroCnt[i][j]++;
			}
		
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				{
					S[i][j] -= zeroCnt[i][j];
					if (S[i][j] < 0)
						S[i][j] = 0;
				}
		
		bool isFin = true;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (S[i][j] != 0)
				{
					isFin = false;
					i = N;
					break;
				}
		
		if (isFin)
			break;
	}
	
	cout << cnt;
}