/*

Baekjoon 1152 �ܾ��� ����
https://www.acmicpc.net/problem/1152


2025 04 29 �ΰ��� �ذ���� ��������.

1. �����ϰ� �����ϱ�

arr[];
string temp = "";
for(1 to stringLength(){
	temp += s.at(i);
	if(s.at(i) == " " and temp != "") // ���� �ܾ �����̰� temp�� ���ڰ� ����Ǿ��ִٸ�{
		arr.push(temp);
		temp = "";
	}
}

2.String stream ����ϱ�

String stream �����̳� ���๮�ڸ� �������� ���ڿ��� ��Ʈ���� �����ϴ� �Լ�.

getline�� �̿��Ͽ� �������ִ�

string str;
cin >> str;

stringstream ss(str);

string temp �и��� ���ڸ� ���� string ����;

arr[];//�и��� ���ڸ� ���� �迭

while(getline(ss,temp," ")){
	arr.push(temp);
}

1���� ��� �����Ҽ� �����Ƿ� ���� ��� ������ Ȱ���Ͽ� �ڵ带 �ۼ��غ���.

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {

	string str;
	getline(cin, str); //������ �Է¹��� �� ������ getline�� ����ؾ��Ѵ�..!
	stringstream ss(str);
	string tk;
	vector<string> answer;

	while (ss >> tk){
		answer.push_back(tk);
	}
	cout << answer.size();
}
