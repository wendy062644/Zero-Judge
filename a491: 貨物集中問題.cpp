#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, X, Y, R, C;
	long long min, point;
	cin >> n;
	while(n--)
	{
		vector<int> x(4000001);
		vector<int> y(4000001);
		vector<int> p(4000001);
		cin >> R >> C;
		for(int a = 1; R >= a; a++)
		{
			for(int b = 1; C >= b; b++)
			{
				cin >> p[(a-1)*C+b-1];
				x[(a-1)*C+b-1] = b;
				y[(a-1)*C+b-1] = a;
			}
		}
		for(int a = 1; R >= a; a++)
		{
			for(int b = 1; C >= b; b++)
			{
				point = 0;
				for(int c = 0; R*C > c; c++)
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
