/*

Baekjoon 9086 ���ڿ� 
https://www.acmicpc.net/problem/9086

2025 04 29 ù��° ����

ù��° �ܾ�� ������ �ܾ �����ϸ�ǹǷ�
ù��° �ε����� ������ �ε����� �����ϸ�ȴ�.

���� �ڵ�

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