/*

Baekjoon 1157 단어 공부
https://www.acmicpc.net/problem/1157


2025 04 30 첫번째 접근

단어 길이가 100만이다. 제한시간은 2초
즉 최대 O(NlogN)의 시간복잡도로 해결해야한다. 
알파벳 키와 갯수 value 배열을 만든다.

단어를 쭉 탐색하면서 저장한다

O(N)의 시간복잡도로 해결 할수 있다.

alphabetArr[]; // 알파벳 Array

s // 단어

for(int i = 0; i <s.length();i++){
	
	for(int j = 0; j < alphabetArr.size();j++){
		if(alphabetArr[j][0] == s[i]){
			alphabetArr[j][1]++;
		}
	}
}


return max(alphabetArr);


*/


#include <iostream>
#include <cctype> // upper lower 함수 
#include <vector>
#include <string>

using namespace std;

char solution(string s);

/*
int main() {

	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	string s;
	cin >> s;

	cout << solution(s);

}


char solution(string s) {
	vector<pair<char, int>> alpha = { {'a', 0 },{'b', 0 },{'c', 0 },{'d', 0 },{'e', 0 },{'f', 0 },{'g', 0 },{'h', 0 },{'i', 0 },
	{'j', 0 },{'k', 0 },{'l', 0 },{'m', 0 },{'n', 0 },{'o', 0 },{'p', 0 },{'q', 0 }, {'r', 0 }, {'s', 0 }, {'t', 0 }, {'u', 0 }, {'v', 0 }, 
	{'w', 0 }, {'x', 0 }, {'y', 0 }, {'z', 0 }};

	for (char& c : s) {
		c = tolower(c);
	}

	for (int i = 0; i < s.length();i++) {
		for (int j = 0; j < alpha.size();j++) {
			if (s[i] == alpha[j].first) {
				alpha[j].second++;
			}
		}
	}

	int max = alpha[0].second;
	char answer = alpha[0].first;
	bool noMax = false;

	for (int i = 1; i < alpha.size();i++) {
		if (max == alpha[i].second) {
			noMax = true;
		}
		if (max < alpha[i].second) {
			max = alpha[i].second;
			answer = alpha[i].first;
			noMax = false;
		}
		
	}
	if (noMax) {
		return '?';
	}

	return toupper(answer);
}

*/

// 위의 코드는 나의 제출 코드 아래는 개선 코드 
// 아래에 있는 코드가 시간복잡도 면에서 아주 훌륭하다. 위는 48ms 아래는 8 ms 가 나왔다. 메모리는 똑같은데도!

char solution(string s);


int main() {

	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	string s;
	cin >> s;

	cout << solution(s);

}



char solution(string s) {
	vector<int> alpha(26, 0);// 위의 코드와 다르게 인덱스에 직접 접근 하는 배열

	for(char &c : s) {
		c = tolower(c);
		alpha[c - 'a']++; // char c - 'a' 만약 a 면 0 b 면 1 ascii 코드값을 이용한 인덱스 접근 방법
	}

	int maxIdx = 0;
	int maxCount = alpha[0];
	bool noMax = false;

	for (int i = 1; i < 26;i++) {
		if (maxCount < alpha[i]) {
			maxCount = alpha[i];
			maxIdx = i;
			noMax = false;
		}
		else if (alpha[i] == maxCount) {
			noMax = true;
		}
	}

	if (noMax) {
		return '?';
	}
	else {
		return 'A' + maxIdx;
	}


}