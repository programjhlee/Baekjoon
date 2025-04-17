/*

baekjoon 10811 �ٱ���

https://www.acmicpc.net/problem/10811

���� �ذ��� :

���� �迭�� s �� �ϰ� 

�ӽù迭 temp�� �����.

���� for���� ���鼭 ���ڿ��� �������� ��ģ��


���� �ڵ�


for(Ƚ��){
	temp;
	for(j ��°���� i��°����){
		temp.push(s[j - 1]);
	}
	for(k = i��°���� k = j��°����){
	s[i] = temp[k - i]; // �̶� temp �� 
	}
}

for(s ����){
 cout << s; 
 }

*/



#include <iostream>
#include <vector>

using namespace std;



void solution(int n,int m) {
	vector<int> vec;
	for (int x = 1; x <= n; x++) {
		vec.push_back(x);
	}

	for (int x = 0; x < m;x++) {
		int i, j;
		cin >> i >> j;
		vector<int> temp;
		for (int k = j ; k >= i ; k--) {
			temp.push_back(vec[k-1]);
		}
		for (int k = i; k <= j; k++) {
			vec[k - 1] = temp[k - i];
		}
	}
	for (int i = 0; i < vec.size() - 1;i++) {
		cout << vec[i] << " ";
	}
	cout << vec[vec.size() - 1];

}


int main() {
	int n, m;
	cin >> n >> m;
	solution(n, m);
}