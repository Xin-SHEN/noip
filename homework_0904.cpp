/* Homework for Lecture3 */

/*
Ҫ�㣺 
1. sum_age ע����Ҫ����Ϊ�������� 
2. cout << fixed << setprecision(2) ���ڿ��������С�����ľ��ȣ���Ҫ #include <iomanip>
*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	int num = 0;
//	int age;
//	double sum_age;
//	
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cin >> age;
//		sum_age += age;
//	}
//	double average = sum_age/num;
//	cout << fixed << setprecision(2) << average << endl;
//}
//
//
#include <iostream>
using namespace std;

/*
Ҫ�㣺쳲����й�ʽ�� f(k) = f(k-1) + f(k-2), f(1) = 1, f(2) = 1 
���������������������� v3 ���� f(k), v2 ���� f(k-1), v1���� f(k-2) 
*/
//int fib(int n) {
//	int v1 = 1;
//	int v2 = 1;
//	int v3 = 1;
//	for (int i = 3; i <= n; i ++) {
//		v3 = v1 + v2;
//		v1 = v2;
//		v2 = v3;
//	}
//	return v3;
//}

/*
Ҫ�㣺 �������������ֱ�ۣ����������׹�ʽ�� a[k] = a[k-1] + a[k-2] 
ȱ������Ҫ����һ���Ƚϴ�����飬����ҪС����������ֳ���������Ĵ�С 
*/
int fib2(int n) {
	int a[100];
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < n; i++) {
		a[i] = a[i -1] + a[i - 2];
	}
	return a[n-1];
}

int main() {
	int k;
	cin >> k;
	int value = fib2(k);
	cout << value << endl;
}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;  // int = [ 2^31 - 1, -2^31 ], so INT_MAX is 2147483647 ;  INT_MIN is (-2147483647 - 1)
//	cin >> n;
//	
//	while (true) {
//		cout << n % 10;
//		n = n / 10;
//		if (n > 0) {
//			cout << " ";
//		} else {
//			break;
//		}
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int k;
//	int n;
//	int num = 0;
//	cin >> k;
//	for (int i = 0; i <= k; i++) {
//		n = i;
//		while (n > 0) {
//			int bit = n % 10;
//			if (bit == 1) {
//				num++;
//			}
//			n = n / 10;
//		}
//	}
//	cout << num << endl;
//	return 0;
//}

/*
Exercise
��֪һ����ά����a[5][2], ʹ��Ƕ��ѭ��������ÿһ�к�ÿһ�еĺ� 
*/

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a[5][2] = {
//		{1,2},
//		{11,42},
//		{12,32},
//		{13,22},
//		{14,12}
//	};
//	
//	for (int row = 0; row < 5; row++) {
//		int row_sum = 0;
//		for (int col = 0; col < 2; col++) {
//			row_sum += a[row][col];
//		}
//		cout << row_sum << endl;
//	}
//
//	for (int col = 0; col < 2; col++) {
//		int col_sum = 0;
//		for (int row = 0; row < 5; row++) {
//			col_sum += a[row][col];
//		}
//		cout << col_sum << endl;
//	}
//	return 0;
//}

/*

����Ŀ������

���һ��������������ָ��������ͬ�����ĸ�����
�����롿

����������У�

��һ��ΪN����ʾ�������еĳ���(N �� 100)��

�ڶ���ΪN������������֮����һ���ո�ֿ���

�����а���һ��������Ϊָ��������m��

�������

���ΪN��������m��ͬ�����ĸ�����
������������

3
2 3 2
2

�����������

2

*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int v[100];
//	for (int i = 0; i < n; i ++) {
//		cin >> v[i];
//	}
//	int m;
//	cin >> m;
//	
//	int sum = 0;
//	for (int i = 0; i < n; i ++) {
//		if (v[i] == m) {
//			sum++;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}

/*
����Ŀ������

��������n��m�еľ���A��B��������ǵĺ�A+B��
�����롿

��һ�а�����������n��m����ʾ���������������(1��n��100��1��m��100)��

������n�У�ÿ��m����������ʾ����A��Ԫ�ء�

������n�У�ÿ��m����������ʾ����B��Ԫ�ء�

������������֮���õ����ո������ÿ��Ԫ�ؾ���1~1000֮�䡣

�������

n�У�ÿ��m����������ʾ����ӷ��Ľ����������������֮���õ����ո������
������������

3 3
1 2 3
1 2 3
1 2 3
1 2 3
4 5 6
7 8 9

�����������

2 4 6
5 7 9
8 10 12


*/


//#include <iostream>
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int v[2][100][100];
//	for (int k = 0; k < 2; k++) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cin >> v[k][i][j];
//			}
//		}
//	}
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << v[0][i][j] + v[1][i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}


/*Lecture 4*/

//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	
//	
//    std::string str_dec = "2001, A Space Odyssey";
//    std::string str_hex = "40c3";
//    std::string str_bin = "-10010110001";
//    std::string str_auto = "0x7f";
//    
//    std::string::size_type sz;   // alias of size_t
//    
//    int i_dec = std::stoi (str_dec,&sz);
//    int i_hex = std::stoi (str_hex,nullptr,16);
//    int i_bin = std::stoi (str_bin,nullptr,2);
//    int i_auto = std::stoi (str_auto,nullptr,0);
//    
//    std::cout << str_dec << ": " << i_dec << " and [" << str_dec.substr(sz) << "]\n";
//    std::cout << str_hex << ": " << i_hex << '\n';
//    std::cout << str_bin << ": " << i_bin << '\n';
//    std::cout << str_auto << ": " << i_auto << '\n';
//    
//    
//	char a[10] = {'a'};
//	scanf("%s", a); //��ȡ����ʱ����Կո������ո�ʱ��ֹ
//	for (int i = 0; i < 10; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	
//	char c = 'e';
//	cout << toupper(c);
//	
//	char b[10];
//	cin.getline(b, 10, 'e');
//	for (int i = 0; i < 10; i++) {
//		cout << b[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
