/*

Baekjoon 2566 �ִ�
https://www.acmicpc.net/problem/2566


2025 05 01 ù��° ����

��� 2�����迭�� ���鼭 ���� ���ؼ� max���� ã���� �ǰ�����...

���ٿ� �ִ� �迭�� �ִ񰪵��� ���� �̾Ƽ� �� �ִ񰪵鳢�� ���ؼ� ��¥ �ִ��� ã����

O(N^2) �ð����⵵�� O(N)���� ���ϼ� ����������?





��. �ƴϱ���.. �ᱹ ���� ���Ҷ� �ѹ��� ���ƾ��ϴϱ� �Ȱ�����..


���� �ڵ�

arr[10][10] 

int max = arr[0][0]
int maxi = 0;
int maxj = 0;

for(0 to 9){

	for(0to9){
		if (max < arr[i][j]){
			max = arr[i][j];
			maxi = i;
			maxj = j;
		}
	}
}


print(max);
print(maxi,maxj);


*/


#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> arr(9,vector<int>(9,0));


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}
	
	int max = arr[0][0];
	int maxi = 0;
	int maxj = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}

	cout << max << endl;
	cout << maxi + 1 << " " << maxj + 1;

}