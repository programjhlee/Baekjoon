/*

baekjoon 10811 바구니

https://www.acmicpc.net/problem/10811

나의 해결방법 :

원본 배열을 s 라 하고 

임시배열 temp를 만든다.

이중 for문을 돌면서 문자열을 역순으로 합친다


슈도 코드


for(횟수){
	temp;
	for(j 번째부터 i번째까지){
		temp.push(s[j - 1]);
	}
	for(k = i번째부터 k = j번째까지){
	s[i] = temp[k - i]; // 이때 temp 는 
	}
}

for(s 길이){
 cout << s; 
 }

*/



#include <iostream>
#include <vector>

using namespace std;



void solution(int n,int m) {
	vector<int> vec;
	for (int x = 1; x <= n; x++) {
		vec.push_back(x);
	}

	for (int x = 0; x < m;x++) {
		int i, j;
		cin >> i >> j;
		vector<int> temp;
		for (int k = j ; k >= i ; k--) {
			temp.push_back(vec[k-1]);
		}
		for (int k = i; k <= j; k++) {
			vec[k - 1] = temp[k - i];
		}
	}
	for (int i = 0; i < vec.size() - 1;i++) {
		cout << vec[i] << " ";
	}
	cout << vec[vec.size() - 1];

}


int main() {
	int n, m;
	cin >> n >> m;
	solution(n, m);
}