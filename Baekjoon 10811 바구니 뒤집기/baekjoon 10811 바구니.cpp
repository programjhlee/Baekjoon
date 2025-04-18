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


 2025 - 04 - 18

 가독성 개선을 위한 코드 수정 

 초기 arr를 길이로 가지고 그 원소들을 0으로 초기화 하는 temp로 수정하기.

 이전코드보다 길어졌지만 값을 대입하는과정에서 불필요한 연산이 없어졌다
 


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
		vector<int> temp (vec.size(),0); // tempArr 수정
		int tempidx = i - 1;
		int vecidx = j - 1;
		
		while (tempidx <=(j-1) && vecidx >= (i-1)) {
			temp[tempidx++] = vec[vecidx--];
		}
		for (i; i <= j; i++) {  // 위의 예시로 가정하면 temp의 원소 상태 {0,0,4,3,0}
			vec[i - 1] = temp[i - 1]; // vec[4] = temp[4] vec[3] = temp[3]
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