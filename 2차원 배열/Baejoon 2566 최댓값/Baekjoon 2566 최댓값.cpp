/*

Baekjoon 2566 최댓값
https://www.acmicpc.net/problem/2566


2025 05 01 첫번째 접근

모든 2차원배열을 돌면서 값을 비교해서 max값을 찾으면 되겠지만...

한줄에 있는 배열의 최댓값들을 전부 뽑아서 그 최댓값들끼리 비교해서 진짜 최댓값을 찾으면

O(N^2) 시간복잡도를 O(N)으로 줄일수 있지않은가?





아. 아니구나.. 결국 값을 비교할때 한바퀴 돌아야하니까 똑같구나..


슈도 코드

arr[10][10] 

int max = arr[0][0]
int maxi = 0;
int maxj = 0;

for(0 to 9){

	for(0to9){
		if (max < arr[i][j]){
			max = arr[i][j];
			maxi = i;
			maxj = j;
		}
	}
}


print(max);
print(maxi,maxj);


*/


#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> arr(9,vector<int>(9,0));


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
	
	int max = arr[0][0];
	int maxi = 0;
	int maxj = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}

	cout << max << endl;
	cout << maxi + 1 << " " << maxj + 1;

}