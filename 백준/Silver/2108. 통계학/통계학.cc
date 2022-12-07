#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMean(vector<int> v)
{
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i];

	int res;
	if (sum > 0)
		res = (int)(sum / v.size() + 0.5);
	else
		res = -(int)(-sum / v.size() + 0.5);

	return res;
}

int getMedian(vector<int> v)
{
	return v[(v.size() - 1) / 2];
}

int getMode(vector<int> v)
{
	vector<int> freq(8001);
	for (int i = 0; i < v.size(); i++)
		freq[v[i] + 4000]++;

	int max = 0, maxIdx, res;
	for (int i = 0; i < 8001; i++)
	{
		if (freq[i] > max)
		{
			max = freq[i];
			maxIdx = i;
			res = i - 4000;
		}
	}

	freq[maxIdx] = 0;
	for (int i = 0; i < 8000; i++)
	{
		if (freq[i] == max)
		{
			res = i - 4000;
			break;
		}
	}

	return res;
}

int getRange(vector<int> v)
{
	return v[v.size() - 1] - v[0];
}

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	cout << getMean(vec) << endl
		 << getMedian(vec) << endl
		 << getMode(vec) << endl
		 << getRange(vec) << endl;
}