/*

Baekjoon 1152 단어의 개수
https://www.acmicpc.net/problem/1152


2025 04 29 두가지 해결법이 생각난다.

1. 무식하게 접근하기

arr[];
string temp = "";
for(1 to stringLength(){
	temp += s.at(i);
	if(s.at(i) == " " and temp != "") // 현재 단어가 공백이고 temp에 글자가 저장되어있다면{
		arr.push(temp);
		temp = "";
	}
}

2.String stream 사용하기

String stream 공백이나 개행문자를 기준으로 문자열을 스트림에 저장하는 함수.

getline을 이용하여 빼낼수있다

string str;
cin >> str;

stringstream ss(str);

string temp 분리한 문자를 담을 string 변수;

arr[];//분리한 문자를 담을 배열

while(getline(ss,temp," ")){
	arr.push(temp);
}

1번의 경우 구현할수 있으므로 새로 배운 지식을 활용하여 코드를 작성해본다.

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main() {

	string str;
	getline(cin, str); //공백을 입력받을 땐 무조건 getline을 사용해야한다..!
	stringstream ss(str);
	string tk;
	vector<string> answer;

	while (ss >> tk){
		answer.push_back(tk);
	}
	cout << answer.size();
}
