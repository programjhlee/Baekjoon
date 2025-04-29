/*

Baekjoon 5622  ���̾�
https://www.acmicpc.net/problem/5622

2025 04 29 ù��° ����

ABC �� 2�� DEF�� 3... WXYZ.. 9�̴�.
����1�� �ɷ��� 2���̰� ���� ���ڰ� �þ������ 3�ʾ� �ɸ��ٰ��Ѵ�

�� ABC�� idx = 0 �̸� abcĭ�� �ִ� ���ڸ� �ɶ� �ɸ��� ���ڴ� 3�� �� idx + 3 �̴� 

���� �ڵ�

String s // �ҸӴϰ� ����ϰ� �ִ� ���ڿ�

arr[] // ���ڿ����� ���ִ� �迭

int answer = 0;

for(1 to sLength()){
	for(j to arrLength())
		if(int(arr[j].find(s[i]) >= 0){
			answer = answer + j + 3;
		}


}
print(answer);

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){


	vector<string> arr = { "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ" };
	string s;
	
	cin >> s;

	int answer = 0;

	for (int i = 0; i < s.length();i++) {
		for (int j = 0; j < arr.size();j++) {
			if ((int)arr[j].find(s[i]) >= 0) {
				answer = answer + j + 3;
			}
		}
	}


	cout << answer;

}


//�ð����⵵  O(N)�� �Լ� �ڵ� ���۸� �ؼ� ã�ƿԴ�. �����ؼ� �־��

/*



#include <iostream>

using namespace std;

int main() {

	int time[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

	string s;
	int ans = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		ans += time[s[i] - 'A'];
	}

	cout << ans;


	return 0;
}



*/