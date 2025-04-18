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


 2025 - 04 - 18

 ������ ������ ���� �ڵ� ���� 

 �ʱ� arr�� ���̷� ������ �� ���ҵ��� 0���� �ʱ�ȭ �ϴ� temp�� �����ϱ�.

 �����ڵ庸�� ��������� ���� �����ϴ°������� ���ʿ��� ������ ��������
 


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
		vector<int> temp (vec.size(),0); // tempArr ����
		int tempidx = i - 1;
		int vecidx = j - 1;
		
		while (tempidx <=(j-1) && vecidx >= (i-1)) {
			temp[tempidx++] = vec[vecidx--];
		}
		for (i; i <= j; i++) {  // ���� ���÷� �����ϸ� temp�� ���� ���� {0,0,4,3,0}
			vec[i - 1] = temp[i - 1]; // vec[4] = temp[4] vec[3] = temp[3]
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