/*

Baekjoon 너의 평점은
https://www.acmicpc.net/problem/25206



슈도코드

double result1 = 0; // 학점 x 과목평점의 합 
double result2 = 0; 학점 총합
for(score, Grade in studentScore){
	
	result1 += calcScore(score,Grade)
	result2 += score;

}

return result1 / result2;


*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

double calcScore(int score, string grade);

int main() {

	vector<string> subject(20, "");
	vector<double> score(20, 0);
	vector<string> grade(20, "");

	double result1 = 0;
	double result2 = 0;

	for (int i = 0; i < 20; i++) {
		cin >> subject[i] >> score[i] >> grade[i];
		result1 += calcScore(score[i], grade[i]);
		result2 = grade[i] == "P" ?  result2 + 0 : result2 + score[i];
	}

	cout << result1 / result2;

}


double calcScore(double score, string grade) {
	if (grade == "A+") {
		return 4.5 * score;
	}
	if (grade == "A0") {
		return 4.0 * score;
	}
	if (grade == "B+") {
		return 3.5 * score;
	}
	if (grade == "B0") {
		return 3.0 * score;
	}
	if (grade == "C+") {
		return 2.5 * score;
	}
	if (grade == "C0") {
		return 2.0 * score;
	}
	if (grade == "D+") {
		return 1.5 * score;
	}
	if (grade == "D0") {
		return 1.0 * score;
	}
	if (grade == "F") {
		return 0.0 * score;
	}
	return 0.0;

}