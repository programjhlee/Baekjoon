/*

Baekjoon 10798 �����б�
https://www.acmicpc.net/problem/10798


���� �ڵ�

alphaArr[][];


for(0 to 4){
	for(0to S,length())//S = �ܾ�{
		print(alphaArr[j][i]);
	}
}

*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> stringArr(5,"");
	int max = 0;
	for (int i = 0; i < 5; i++) {
		string s;
		cin >> s;
		stringArr[i] = s;
		if (max < s.length()) {
			max = s.length();
		}
	}
	
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < stringArr[j].length()) {
				cout << stringArr[j][i];
			}
		}
	}
} 