/*

Baekjoon 2675 ���ڿ� �ݺ�
https://www.acmicpc.net/problem/2675

2025 04 29

�����ڵ�

string s;
string answer = ";

for(0 to s.length())
 for(1 to R){ 
	answer += s[i] // i = ���ڿ� �ε���
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