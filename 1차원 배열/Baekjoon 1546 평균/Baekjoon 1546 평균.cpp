/*

Baekjoon 1546 평균
https://www.acmicpc.net/problem/1546



2025 04 29 첫번째 접근

슈도 코드

scoreArr[] // 점수 배열

for(1 to N){

	arr.push_back(scoreArr[i]/ Max * 100);

}



*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<double> scoreArr(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> scoreArr[i];
	}
	
	double M = *max_element(scoreArr.begin(), scoreArr.end()); // max_elements =  배열 내에서 최고값의 이터레이터를 반환해주는 함수 
	double sum = 0;

	for (int i = 0; i < N; i++) {
		sum += (scoreArr[i]/ M * 100);
	}

	cout << sum / N << endl;
}