/*

Baekjoon - 3052 - ������

https://www.acmicpc.net/problem/3052

�ذ��� 1:

10���� �Է� �ް� �� �������� �ߺ��� ������� �ʴ� set �ڷᱸ������
�����Ѵ�. �� �� set �ڷᱸ���� ���̸� ��ȯ�Ѵ�.

�ذ��� 2: 
if �� ����� �ߺ����� �����ϸ� �迭�� ��������ʰ� �ƴ϶�� �ִ´�.
(�ð����⵵�� �� �ɸ�����...? ������ 10���̴� �̰͵� ��� ������ �� ���̴�.)

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
		if (find(vec.begin(), vec.end(), x % 42) == vec.end()) //algorithm find(vector.begin(), vector.end(),int n(n= ã�����)) ��ȯ�� : iterator
		{ 
			vec.push_back(x % 42);
		}
	}
	return vec.size();
}



int main() {
	cout << solution2();
}