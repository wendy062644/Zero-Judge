#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, R, C;
	long long num = 0, sum = 0, tt = 0, minx, miny;
	cin >> n;
	while(n--)
	{
		int xx = 1, yy = 1;
		vector<long long> x(2001);
		vector<long long> y(2001);
		cin >> R >> C;
		for(int a = 1; R >= a; a++)
		{
			tt = 0;
			for(int b = 1; C >= b; b++)
			{
				cin >> num;
				tt += num;
				y[b] += num;
			}
			x[a] = x[a-1] + tt;
		}
		sum = 0;
		for(int a = 1; C >= a; a++)
		{
			y[a] += y[a-1];
			sum += (a-1)*(y[a]-y[a-1]);
		}
		miny = sum;
		for(int a = 2; C >= a; a++)
		{
			sum = sum + y[a-1] - (y[C]-y[a-1]);
			if(miny > sum){miny = sum; yy = a;}
		}
		sum = 0;
		for(int a = 1; R >= a; a++)
		{
			sum += (a-1)*(x[a]-x[a-1]);
		}
		minx = sum;
		for(int a = 2; R >= a; a++)
		{
			sum = sum + x[a-1] - (x[R]-x[a-1]);
			if(minx > sum){minx = sum; xx = a;}
		}
		cout << xx << " " << yy << endl << (minx+miny)*100 << endl;
	}
} 

//題目: https://zerojudge.tw/ShowProblem?problemid=a491  	NA (score:80%)
