/*

Baekjoon 10809 ���ĺ� ã��
https://www.acmicpc.net/problem/10809


find �Լ� //ã�� ���� ù��° ���� ����Ѵ�.
�̶� find �Լ��� ���� ã�����ϴ� ���ڰ� ���ٸ� -1�� ����ϴ°��̾ƴ�
�ִ� ũ���� ����� ��µȴ�.
���� int�� ĳ���� ���־�� �Ѵٰ�.


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