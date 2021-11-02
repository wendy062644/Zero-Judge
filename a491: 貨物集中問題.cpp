#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, R, C, num;
	long long minx, miny, xx, yy;
	cin >> n;
	while(n--)
	{
		vector<long long> x(2001);
		vector<long long> y(2001);
		vector<long long> X(2001);
		vector<long long> Y(2001);
		cin >> R >> C;
		for(int a = 1; R >= a; a++)
		{
			for(int b = 1; C >= b; b++)
			{
				cin >> num;
				x[b] += num;
				y[a] += num;
			}
		}
		for(int a = 1; C >= a; a++)
		{
			for(int b = 1; C >= b; b++)
			{
				X[a] += x[b]*(abs(a-b));
			}
			if(a == 1){minx = X[a]; xx = a;}
			else{
				if(minx > X[a]){minx = X[a]; xx = a;}
			}
		}
		for(int a = 1; R >= a; a++)
		{
			for(int b = 1; R >= b; b++)
			{
				Y[a] += y[b]*(abs(a-b));
			}
			if(a == 1){miny = Y[a]; yy = a;}
			else{
				if(miny > Y[a]){miny = Y[a]; yy = a;}
			}
		}
		cout << yy << " " << xx << endl << (minx+miny)*100 << endl;
	}
} 
//題目: https://zerojudge.tw/ShowProblem?problemid=a491  NA (score:80%)
