// https://school.programmers.co.kr/learn/courses/30/lessons/12937

// 짝수와 홀수

// 문제 설명
// 정수 num이 짝수일 경우 "Even"을 반환하고 홀수인 경우 "Odd"를 반환하는 함수, solution을 완성해주세요.

// 제한 조건
// num은 int 범위의 정수입니다.
// 0은 짝수입니다.
// 입출력 예
// num	return
// 3	"Odd"
// 4	"Even"

#include <string>
#include <vector>
#include <iostream>

std::string solution(int num) {
    return num % 2 ? "Odd" : "Even";
}

int main(){
    int num = 3;
    std::string answer = solution(num);

    return 0;
}