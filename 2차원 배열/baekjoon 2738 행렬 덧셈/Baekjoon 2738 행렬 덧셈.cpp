/*

행렬 덧셈
https://www.acmicpc.net/problem/2738


2025 05 01 

슈도 코드

answer //정답 매트릭스

for(0 to N)
	for(0to M){
		answer[n][m] = matrix 1[n][m] + matrix2[n][m]; // answer = 정답 매트릭스
}

print(answer);



*/


#include <iostream>
#include <vector>

using namespace std;


int main() {

	int N, M;
	cin >> N >> M;

	vector<vector<int>> matrix1(N, vector<int>(M, 0));
	vector<vector<int>> matrix2(N, vector<int>(M, 0));
	vector<vector<int>> answer(N, vector<int>(M, 0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M ; j++){
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrix2[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			answer[i][j] = matrix1[i][j] + matrix2[i][j];
			cout << answer[i][j] << " ";
		}
		cout << endl;
	}

}