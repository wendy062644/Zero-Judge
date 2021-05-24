#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,l,s=0,k=0;
	cin>>n>>m;
	int num[n]={0};
	for(int a=0;n>a;a++)
	{
		for(int b=0;m>b;b++)
		{
			cin>>l;
			num[a]=max(l,num[a]);
		}
		s=s+num[a];
	}
	cout<<s<<endl;
	if(s%num[0]==0){cout<<num[0];k++;}
	for(int a=1;n>a;a++)
	{
		if(s%num[a]==0){cout<<" "<<num[a];k++;}
	}
	if(k==0){cout<<-1;}
}

c295: APCS-2016-1029-2最大和
網址:https://zerojudge.tw/ShowProblem?problemid=c295
執行結果: AC (3ms, 332KB)	
