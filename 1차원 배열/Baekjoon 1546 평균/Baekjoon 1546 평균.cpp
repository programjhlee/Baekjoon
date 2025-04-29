/*

Baekjoon 1546 ���
https://www.acmicpc.net/problem/1546



2025 04 29 ù��° ����

���� �ڵ�

scoreArr[] // ���� �迭

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
	
	double M = *max_element(scoreArr.begin(), scoreArr.end()); // max_elements =  �迭 ������ �ְ��� ���ͷ����͸� ��ȯ���ִ� �Լ� 
	double sum = 0;

	for (int i = 0; i < N; i++) {
		sum += (scoreArr[i]/ M * 100);
	}

	cout << sum / N << endl;
}