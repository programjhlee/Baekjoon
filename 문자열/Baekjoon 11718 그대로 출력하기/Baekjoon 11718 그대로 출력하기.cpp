/*

Baekjoon 11718 그대로 출력하기
https://www.acmicpc.net/problem/11718

cin 의경우 공백을 기준으로 구분하기때문에

getline을 이용해야한다.



*/

#include <iostream>
#include <string>

using namespace std;
int main() {
	while (true) {
		string s;
		getline(cin, s);
		if (s == "") {
			break;
		}
		getline(cin, s);
		cout << s << endl;
	}
}
