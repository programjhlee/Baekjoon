/*

Baekjoon 5622  다이얼
https://www.acmicpc.net/problem/5622

2025 04 29 첫번째 접근

ABC 는 2고 DEF는 3... WXYZ.. 9이다.
숫자1을 걸려면 2초이고 각각 숫자가 늘어날때마다 3초씩 걸린다고한다

즉 ABC가 idx = 0 이면 abc칸에 있는 숫자를 걸때 걸리는 숫자는 3초 즉 idx + 3 이다 

슈도 코드

String s // 할머니가 기억하고 있는 문자열

arr[] // 문자열들이 들어가있는 배열

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


//시간복잡도  O(N)의 함수 코드 구글링 해서 찾아왔다. 참신해서 넣어둠

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