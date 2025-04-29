/*

Baekjoon 2908
https://www.acmicpc.net/problem/2908

문자열 뒤집는 방법은 두가지가 있는데

1. reverse() 사용

2. for문 사용

이중 2번 같은경우엔 구현할수 있으므로 reverse 를 사용하여 구현하고자한다.



*/

#include <iostream>
#include <algorithm> // reverse()사용하고자 include
#include <string>

using namespace std;

int main() {
	string n1;
	string n2;

	cin >> n1 >> n2;
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());

	cout << max(stoi(n1), stoi(n2));
;
}
