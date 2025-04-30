/*

Baekjoon ũ�ξ�Ƽ�� ���ĺ�
https://www.acmicpc.net/problem/2941

2025 04 30 ù��° ����

ġȯ�Ͽ� ������ Ǯ�� ����Ͱ����� �������� �ϳ��ִ�.
dz= �� z= �ΰ��� �����Ѵٴ� �� �ε� ���� Ž���� �Ҷ� 
z=�� ���� Ž���ϰ� 0 ���� ġȯ�ع����� 
dz=���ڰ� d0�� �ٲ�������. �̴� �����̹Ƿ�
���� dz=�� �˻縦 ���Ŀ� z=�� �˻��ؾ� ������ �������̴�



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