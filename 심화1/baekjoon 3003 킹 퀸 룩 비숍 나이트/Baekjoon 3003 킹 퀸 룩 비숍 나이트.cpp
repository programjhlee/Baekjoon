/*

Baekjoon 3003 ŷ �� �� ��� ����Ʈ
https://www.acmicpc.net/problem/3003

2025 04 30 
ü�� �迭��
���� �迭 �׸��� 
�����ؾ��� �迭 ������ ����

ü���迭[����] - �����迭[����]�� �Ͽ�
�����ؾ��� �迭�� �ִ´�

for(0to 5){
	answer[i] = chess[i] - user[i]; // answer = ����迭 chess = ü���迭 user = ���� �迭
}

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	vector<int> chess = { 1,1,2,2,2,8 };
	vector<int> user(6, 0);
	vector<int> answer(6, 0);

	for (int i = 0; i < 6;i++) {
		cin >> user[i];
		answer[i] = chess[i] - user[i];
		cout << answer[i] << " ";
	}
}