#include<bits/stdc++.h>
using namespace std;

int main()
{
	char exp[400],stk[240],rpn[240];
	int t,len=0;
	cin>>t;
	while(t--)
	{
		int j=0,k=0;
		cin>>exp;
		len=strlen(exp);
		for(int i=0;i<len;i++)
		{
			if((exp[i]>='A'&&exp[i]<='Z')||(exp[i]>='a'&&exp[i]<='z'))
			{
				rpn[k]=exp[i];
				k++;
			}
			else if(exp[i]=='('||exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'||exp[i]==')')
			{	
				stk[j]=exp[i];
				j++;
				if(stk[j-1]==')')
				{
					stk[j-1]=NULL;
					j=j-2;
					while(stk[j]!='(')
					{
						rpn[k]=stk[j];
						k++;
						j--;
					}
					stk[j]=NULL;
				}
			}
		}
		if(stk[j]==NULL)
		{
			for(int l=0;l<k;l++)
				cout<<rpn[l];
		}
		cout<<endl;
	}
	return 0;
}