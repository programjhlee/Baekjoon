/*

Baekjoon 11720 숫자의 합
https://www.acmicpc.net/problem/11720

2025 04 29 첫번째 접근

슈도 코드

string s;
int sum = 0;
for(0 to stringLength){

	sum += (int)(s.at(i) - '0'); // i = for의 변수값
	

}
print(sum)


*/


#include <iostream>
#include <string>

using namespace std;


int main() {

	int N;
	cin >> N;

	string s;
	cin >> s;
	
	int sum = 0;
	for(int i = 0; i < N; i++){
		
		sum += s.at(i) - '0';
			
	}
	cout << sum;

}
