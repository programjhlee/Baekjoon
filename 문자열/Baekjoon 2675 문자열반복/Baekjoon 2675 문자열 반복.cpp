/*

Baekjoon 2675 문자열 반복
https://www.acmicpc.net/problem/2675

2025 04 29

슈도코드

string s;
string answer = ";

for(0 to s.length())
 for(1 to R){ 
	answer += s[i] // i = 문자열 인덱스
 }
 cout << answer;
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
	int T; 
	cin >> T;

	int R;
	string s;
	
	for (int i = 0; i < T; i++) {
		cin >> R >> s;
		string answer = "";
		for (int j = 0; j < s.length();j++) {
			for (int k = 0; k < R; k++) {
				answer += s.at(j);
			}
		}
		cout << answer << endl;
	}
}