#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		vector<int> x(4000001);
		vector<int> y(4000001);
		vector<int> p(4000001);
		long long R, C, point, num, N = 0, min, X, Y;
		cin >> R >> C;
		for(int a = 1; R >= a; a++)
		{
			for(int b = 1; C >= b; b++)
			{
				cin >> num;
				if(num > 0){x[N] = b; y[N] = a; p[N] = num; N++;}
			}
		}
		for(int a = 1; R >= a; a++)
		{
			for(int b = 1; C >= b; b++)
			{
				point = 0;
				for(int c = 0; N > c; c++)
				{
					point = point + p[c]*(abs(x[c]-b)+abs(y[c]-a));
				}
				if(a == 1&&b == 1){min = point; X = a; Y = b;}
				if(point < min){min = point; X = a; Y = b;}
			}
		}
		cout << X << " " << Y << endl << min*100 << endl;
	}
} 

網址: https://zerojudge.tw/ShowProblem?problemid=a491
