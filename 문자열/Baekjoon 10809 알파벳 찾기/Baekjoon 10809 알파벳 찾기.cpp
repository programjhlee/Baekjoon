/*

Baekjoon 10809 알파벳 찾기
https://www.acmicpc.net/problem/10809


find 함수 //찾는 값의 첫번째 값을 출력한다.
이때 find 함수가 만약 찾고자하는 글자가 없다면 -1을 출력하는것이아닌
최대 크기의 양수가 출력된다.
따라서 int로 캐스팅 해주어야 한다고.


*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < alphabet.length();i++) {
		cout << (int)s.find(alphabet.at(i)) << " ";
	}

}