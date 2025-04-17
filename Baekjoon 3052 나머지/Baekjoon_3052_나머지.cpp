/*

Baekjoon - 3052 - 나머지

https://www.acmicpc.net/problem/3052

해결방법 1:

10개를 입력 받고 그 나머지를 중복을 허용하지 않는 set 자료구조형에
삽입한다. 그 후 set 자료구조의 길이를 반환한다.

해결방법 2: 
if 를 사용해 중복값이 존재하면 배열에 집어넣지않고 아니라면 넣는다.
(시간복잡도가 더 걸리지만...? 문제는 10개이니 이것도 통과 판정이 날 것이다.)

*/

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int solution1() {
	set <int> set;

	for (int i = 1; i <= 10;i++) {
		int x;
		cin >> x;
		set.insert(i % 42);
	}

	return set.size();
}

int solution2() {
	vector <int > vec;
	for (int i = 1; i <= 10;i++) {
		int x;
		cin >> x;
		if (find(vec.begin(), vec.end(), x % 42) == vec.end()) //algorithm find(vector.begin(), vector.end(),int n(n= 찾을대상)) 반환값 : iterator
		{ 
			vec.push_back(x % 42);
		}
	}
	return vec.size();
}



int main() {
	cout << solution2();
}