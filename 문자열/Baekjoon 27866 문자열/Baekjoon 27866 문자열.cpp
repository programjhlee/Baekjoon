/*

Baekjoon 27866 문자열
https://www.acmicpc.net/problem/27866


2025 04 29 첫번째 접근

string을 이용하여 인덱스에 접근한다

슈도코드


string S;

cout << a[i] // i = 인덱스


*/

#include <iostream>
#include <string>

using namespace std;


int main() {
	string S;
	cin >> S;

	int i;
	cin >> i;

	cout << S.at(i - 1);
}
