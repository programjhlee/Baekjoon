/*

Baekjoon 2444 별찍기 - 7;
https://www.acmicpc.net/problem/2444

2025 04 30 첫번째 접근
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
	* 
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
	*
   ***
  *****
 *******
*********

이부분을 먼저 만들껀데 이부분은 
	*      
   **    
  ***
 ****
***** 

	*
	**
 	***
	****

두개로 나눌수있다

N= 이 5일 경우 

왼쪽부분은  5번 루프 하면서 
공백 4개 별 1개 공백 3개 별 2개 공백 2개 별 3개 ... 이렇게 만들고
오른쪽 부분은 4번 루프하면서 별 0개 별 1개 별 2개 별 3개 로 만들면된다

밑의 부분은  마찬가지로 절반으로 잘라
왼쪽 부분은 루프를 5번 루프하면서
공백 1개 별 4개 공백 2개 별 3개.... 이렇게 만들고
오른쪽부분은 별 3개 별 2개 별 1개 별 0개 이렇게 만들면된다

*/


#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++) {
			cout << "*";
		}
		for (int l = 0; l < i; l++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < N - 1 - i ; k++) {
			cout << "*";
		}
		for (int l = 0; l < N - i - 2; l++) {
			cout << "*";
		}
		cout << endl;
	}

}