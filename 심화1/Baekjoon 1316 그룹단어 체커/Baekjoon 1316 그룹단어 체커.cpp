/*

Baekjoon 1316 �׷�ܾ� üĿ
https://www.acmicpc.net/problem/1316

���ĺ� false �迭�� ����� ���ο� �ܾ ������ �״ܾ ���� true�� ������ش�

���� �����ܾ�� �ٸ� �ܾ ���Դµ� �״ܾ true��� break �� �׷�ܾ �ƴϴ� ����

�׷�ܾ��̸� result +1 ���ش�.

���� �ڵ�

for(string){
	
	if(string isGroup){
		result += 1;
	}

}

return result;


isGroup �����ڵ�

alphaArr = (26,false)

char before;

for(char c in s){
	
	if(before!= c){
		if(alphaArr[c] == true) // c�� �Էµ� ���� �ִٸ� �׷�ܾ �ƴϹǷ� false ��ȯ{
			return false;
		}else{// �Էµ����� ���ٸ� true�� �ٲٰ� �����ܾ c �� �ٲ�
			alphaArr[c] = true; 
			before = c;
		}
	}


}


*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isGroup(string s);


int main() {
	int N;
	cin >> N;

	int result = 0;

	for (int i = 0; i < N;i++) {
		string s;
		cin >> s;
		if (isGroup(s)) {
			result += 1;
		}
	}
	cout << result;
}

bool isGroup(string s) {
	
	vector<bool> isIn(26, false);
	
	char before = s[0];
	isIn[s[0] - 'a'] = true;

	for (int i = 0; i < s.length(); i++) {
		if (before != s[i]) {
			if (isIn[s[i] - 'a']) {
				return false;
			}
			else {
				isIn[s[i] - 'a'] = true;
				before = s[i];
			}
		}
	}
	return true;
	

}