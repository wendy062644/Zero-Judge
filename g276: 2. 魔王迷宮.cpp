#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n, m, k, x[501], y[501], yy[501], xx[501];
	bool boss[501], num[501];
	cin >> n >> m >> k;
	for(int a = 0; k > a; a++)
	{
		int r, c, s, t;
		cin >> x[a] >> y[a] >> xx[a] >> yy[a];
		boss[a] = 1;
		num[x[a]][y[a]] = 1;
	}
	while(boss)
	{
		for(int a = 0; k > a; a++)
		{
			if(boss[a] == 1){
				x[a]+= xx[a];
				y[a]+= yy[a];
				if(x[a] > n||y[a] > m||x[a] < 0||y[a] < 0){boss[a] = 0; break;}
				if(num[x[a]][y[a]] > 0){boss[a] = 0;num[x[a]][y[a]] = 2; break;}
				num[x[a]][y[a]] = -1;
			}
		}
		
	}
}
