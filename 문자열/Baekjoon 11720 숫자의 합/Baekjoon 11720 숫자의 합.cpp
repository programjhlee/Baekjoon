/*

Baekjoon 11720 ������ ��
https://www.acmicpc.net/problem/11720

2025 04 29 ù��° ����

���� �ڵ�

string s;
int sum = 0;
for(0 to stringLength){

	sum += (int)(s.at(i) - '0'); // i = for�� ������
	

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
