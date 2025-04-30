/*

Baekjoon 3003 킹 퀸 룩 비숍 나이트
https://www.acmicpc.net/problem/3003

2025 04 30 
체스 배열과
유저 배열 그리고 
제출해야할 배열 세개를 만들어서

체스배열[원소] - 유저배열[원소]를 하여
제출해야할 배열에 넣는다

for(0to 5){
	answer[i] = chess[i] - user[i]; // answer = 정답배열 chess = 체스배열 user = 유저 배열
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