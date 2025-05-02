/*

Baekjoon 2563 색종이
https://www.acmicpc.net/problem/2563

2025 05 02 첫번째 접근

주어진 좌표들중 x의 최댓값과 y의 최댓값을 정하고
그 크기를 가지는 행렬 (x,y)를 만든다. (행렬들의 원소를 0으로 채운다)
그후 주어진 색종이 좌표로부터 +10 만큼의 길이만큼 안의 원소를 1로 변환하고
그 값들을 전부 더한 값이 넓이이다.


핵심 슈도코드

for(x to x + 10){
	for(y to y + 10){
		result += matrix[x][y]// matrix[x][y] = 색종이 1x1 크기;
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