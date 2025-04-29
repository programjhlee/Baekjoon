/*

Baekjoon 9086 문자열 
https://www.acmicpc.net/problem/9086

2025 04 29 첫번째 접근

첫번째 단어와 마지막 단어에 접근하면되므로
첫번째 인덱스와 마지막 인덱스에 접근하면된다.

슈도 코드

String s;

cout << s[0] << s[s.length() - 1];

*/


#include <iostream>
#include <string>

using namespace std;

int main() {
	int N; 
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		cout << s[0] << s[s.length() - 1]<< endl;

	}
}