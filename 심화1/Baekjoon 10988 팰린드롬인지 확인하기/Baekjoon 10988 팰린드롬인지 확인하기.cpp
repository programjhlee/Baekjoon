/*

Baekjoon 10988 팰린드롬인지 확인하기
https://www.acmicpc.net/problem/10988

2025 04 30 첫번째 접근

투 포인터 개념을 사용하여 쉽게 풀수있다

인덱스 양 끝값을 포인터로 지정하고

양끝값이 교차할때까지 검사하다 만약 글자가 다르면 break 하고 펠린드롬이 아님을 선언

맞다면 펠린드롬을 선언



슈도 코드

string s;

startPt = 0;
endPt = s.length() - 1;

while(startPt < endPt) // 같은 인덱스끼리는 굳이 검사할 필요 없으므로 부등호는 <
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