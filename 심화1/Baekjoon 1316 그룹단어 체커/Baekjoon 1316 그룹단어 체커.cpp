/*

Baekjoon 1316 그룹단어 체커
https://www.acmicpc.net/problem/1316

알파벳 false 배열을 만들고 새로운 단어가 들어오면 그단어에 대해 true로 만들어준다

만약 이전단어와 다른 단어가 들어왔는데 그단어가 true라면 break 후 그룹단어가 아니다 선언

그룹단어이면 result +1 해준다.

슈도 코드

for(string){
	
	if(string isGroup){
		result += 1;
	}

}

return result;


isGroup 슈도코드

alphaArr = (26,false)

char before;

for(char c in s){
	
	if(before!= c){
		if(alphaArr[c] == true) // c가 입력된 적이 있다면 그룹단어가 아니므로 false 반환{
			return false;
		}else{// 입력된적이 없다면 true로 바꾸고 직전단어를 c 로 바꿈
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