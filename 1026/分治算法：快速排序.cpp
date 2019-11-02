#include <stdio.h>
#include <iostream>
using namespace std;
int a[8] = {6,10,11,8,4,1,9,7};

void qsort(int left,int right){
	int i=left,j=right,mid=a[(left+right)/2];
	while(i<=j){
		while(a[i]<mid) i++; //������Ҵ��ڵ���mid���� 
		while(a[j]>mid) j--; //���ұ���С�ڵ���mid����
		if(i<=j){
			swap(a[i],a[j]); //���� 
			i++,j--;		 //������ 
		}		
	}	
	if(left<j) qsort(left,j); //�����������ֱַ�ݹ飬�������� 
	if(i<right) qsort(i,right);
}

void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	
	for(int i=0;i<8;i++) cout<<a[i]<<endl;
	cout<<"Let's make a sort"<<endl;
	
	qsort(0,7);
	
	for(int i=0;i<8;i++) cout<<a[i]<<endl;

	return 0;
}

