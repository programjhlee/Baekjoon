/*

Baekjoon 11718 �״�� ����ϱ�
https://www.acmicpc.net/problem/11718

cin �ǰ�� ������ �������� �����ϱ⶧����

getline�� �̿��ؾ��Ѵ�.



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
