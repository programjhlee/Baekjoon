/*

Baekjoon 크로아티아 알파벳
https://www.acmicpc.net/problem/2941

2025 04 30 첫번째 접근

치환하여 문제를 풀면 쉬울것같은데 주의점이 하나있다.
dz= 와 z= 두개가 존재한다는 것 인데 만약 탐색을 할때 
z=를 먼저 탐색하고 0 으로 치환해버리면 
dz=글자가 d0로 바뀌어버린다. 이는 버그이므로
먼저 dz=를 검사를 한후에 z=를 검사해야 문제가 없을것이다



croatiaArr;

string s

for (j in s)

	for(i in croatiaArr){
		if s[j] == croatiaArr[i]{
			s[j].replace(0);
		}
	}
}




*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
	string s;
	cin >> s;

	vector<string> croatia = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	
	for (int i = 0; i < croatia.size();i++) {
		if (s.find(croatia[i]) < s.length()) {
			while (s.find(croatia[i]) < s.length()) {
				s.replace(s.find(croatia[i]), croatia[i].length(), "0");
			}
		}
	}

	int length = 0;
	for (char& c : s) {
		if (c != '=' && c != '.') {
			length++;
		}
	}
	cout << length;

}