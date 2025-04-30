/*

Baekjoon 10988 �Ӹ�������� Ȯ���ϱ�
https://www.acmicpc.net/problem/10988

2025 04 30 ù��° ����

�� ������ ������ ����Ͽ� ���� Ǯ���ִ�

�ε��� �� ������ �����ͷ� �����ϰ�

�糡���� �����Ҷ����� �˻��ϴ� ���� ���ڰ� �ٸ��� break �ϰ� �縰����� �ƴ��� ����

�´ٸ� �縰����� ����



���� �ڵ�

string s;

startPt = 0;
endPt = s.length() - 1;

while(startPt < endPt) // ���� �ε��������� ���� �˻��� �ʿ� �����Ƿ� �ε�ȣ�� <
{
	if(s[startPt]!=s[endPt]){
		return 0;
	}
	startPt++;
	endPt--;
}
return 1;

*/


#include <iostream>
#include <string>

using namespace std;


int isPalindrome(string s);


int main() {
	string s;
	cin >> s;

	cout << isPalindrome(s);

}


int isPalindrome(string s) {
	int startPt = 0;
	int endPt = s.length() - 1;

	while (startPt < endPt) {
		if (s[startPt] != s[endPt]) {
			return 0;
		}
		startPt++;
		endPt--;
	}
	return 1;
}