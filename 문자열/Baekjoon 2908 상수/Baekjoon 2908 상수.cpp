/*

Baekjoon 2908
https://www.acmicpc.net/problem/2908

���ڿ� ������ ����� �ΰ����� �ִµ�

1. reverse() ���

2. for�� ���

���� 2�� ������쿣 �����Ҽ� �����Ƿ� reverse �� ����Ͽ� �����ϰ����Ѵ�.



*/

#include <iostream>
#include <algorithm> // reverse()����ϰ��� include
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
