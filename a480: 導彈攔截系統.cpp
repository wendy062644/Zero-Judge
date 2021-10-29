#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1, x2, y1, y2, x, y;
	long long CNum;
	long long mx1 = 0, mx2 = 0;
	cin >> x1 >> y1 >> x2 >> y2 >> CNum;
	for(int a = 0; CNum > a; a++)
	{
		cin >> x >> y;
		double n, m;
		n = abs(x1-x)*abs(x1-x) + abs(y1-y)*abs(y1-y);
		m = abs(x2-x)*abs(x2-x) + abs(y2-y)*abs(y2-y);
		if(n > m){
			if(m > mx1){mx1 = m;}
		}
		else if(n == m){
			if(abs(m-mx1) > abs(m-mx2)){mx2 = m;}
			else{mx1 = m;}
		}
		else{
			if(n > mx2){mx2 = n;}
		}
	}
	cout << mx1+mx2 << endl;
}
