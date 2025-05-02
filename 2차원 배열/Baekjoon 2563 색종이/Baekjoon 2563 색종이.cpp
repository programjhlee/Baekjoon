/*

Baekjoon 2563 ������
https://www.acmicpc.net/problem/2563

2025 05 02 ù��° ����

�־��� ��ǥ���� x�� �ִ񰪰� y�� �ִ��� ���ϰ�
�� ũ�⸦ ������ ��� (x,y)�� �����. (��ĵ��� ���Ҹ� 0���� ä���)
���� �־��� ������ ��ǥ�κ��� +10 ��ŭ�� ���̸�ŭ ���� ���Ҹ� 1�� ��ȯ�ϰ�
�� ������ ���� ���� ���� �����̴�.


�ٽ� �����ڵ�

for(x to x + 10){
	for(y to y + 10){
		result += matrix[x][y]// matrix[x][y] = ������ 1x1 ũ��;
	}
}
print (result)


*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N; 
	cin >> N;

	vector<vector<int>> pos(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		cin >> pos[i][0] >> pos[i][1];
	}

	vector<vector<int>> paper(100, vector<int>(100, 0));

	for (int i = 0; i < N; i++) {
		int x = pos[i][0];
		int y = pos[i][1];
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (paper[j][k] != 1) {
					paper[j][k] = 1;
				}
			}
		}
	}

	int result = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			result += paper[i][j];
		}
	}

	cout << result;
}