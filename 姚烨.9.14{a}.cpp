#include <iostream>
using namespace std;
int main(){
int n,m,b,c;
cout<<"��������������"; 
cin>>n;
cout<<"���룺"; 
b=n;
c=0;
int a[100000];
for(b=0;b<n;b++){
	cin>>a[b];}
	cout<<"Ҫ���ҵ�����"; 
	cin>>m;

for(b=0;b<n;b++){
	if(a[b]==m){c++;
		}
		}
cout<<"��ͬ��������"<<c;
return 0;
} 
