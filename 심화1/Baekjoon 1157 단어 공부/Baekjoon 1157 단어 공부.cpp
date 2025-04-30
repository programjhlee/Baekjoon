/*

Baekjoon 1157 �ܾ� ����
https://www.acmicpc.net/problem/1157


2025 04 30 ù��° ����

�ܾ� ���̰� 100���̴�. ���ѽð��� 2��
�� �ִ� O(NlogN)�� �ð����⵵�� �ذ��ؾ��Ѵ�. 
���ĺ� Ű�� ���� value �迭�� �����.

�ܾ �� Ž���ϸ鼭 �����Ѵ�

O(N)�� �ð����⵵�� �ذ� �Ҽ� �ִ�.

alphabetArr[]; // ���ĺ� Array

s // �ܾ�

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
#include <cctype> // upper lower �Լ� 
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

// ���� �ڵ�� ���� ���� �ڵ� �Ʒ��� ���� �ڵ� 
// �Ʒ��� �ִ� �ڵ尡 �ð����⵵ �鿡�� ���� �Ǹ��ϴ�. ���� 48ms �Ʒ��� 8 ms �� ���Դ�. �޸𸮴� �Ȱ�������!

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
	vector<int> alpha(26, 0);// ���� �ڵ�� �ٸ��� �ε����� ���� ���� �ϴ� �迭

	for(char &c : s) {
		c = tolower(c);
		alpha[c - 'a']++; // char c - 'a' ���� a �� 0 b �� 1 ascii �ڵ尪�� �̿��� �ε��� ���� ���
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