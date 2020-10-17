#include<bits/stdc++.h>
using namespace std;
int m;
bool tmp=0;
//double l[1000001];
vector<double>l;
void calculate(int x){
	double maxn=0;
	double a,b,c;
	for(int i=1;i<=m-2;i++)
		if(l[i]+l[i+1]>l[i+2]){
			if(l[i]+l[i+1]+l[i+2]>maxn){
				a=l[i];
				b=l[i+1];
				c=l[i+2];
				maxn=l[i]+l[i+1]+l[i+2];
			}
			tmp=1;
		}
	if(!tmp){
		cout<<'0'<<endl;
		return;
		}
	cout<<"最大周长为"<<maxn<<"(选择" <<a<<","<<b<<","<<c<<"),"<<endl;
	return;
	}
void calculate(double x){
	double maxn=0;
	double a,b,c;
	for(int i=1;i<=m-2;i++)
		if(l[i]+l[i+1]>l[i+2]){
			double p,s;
			a=l[i];
			b=l[i+1];
			c=l[i+2];
			p=a+b+c;
			p/=2;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
			if(s>maxn){
				a=l[i];
				b=l[i+1];
				c=l[i+2];
				maxn=s;
			}
		}
	cout<<"最大面积为"<<maxn<<"(选择" <<a<<","<<b<<","<<c<<")。"<<endl;
	return;
	}
bool cmp(double x,double y){
	return x<y;
	}
int main(){
	cout<<"m=";
	cin>>m;
	cout<<"L=";
	l.push_back(0.00);
	for(int i=1;i<=m;i++){
		//cin>>l[i];
		double x;
		cin>>x;
		l.push_back(x);
		}
	sort(l.begin(),l.end(),cmp);
	calculate(1);
	if(tmp)
		calculate(1.00);
	return 0;
	}
