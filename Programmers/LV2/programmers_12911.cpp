// https://school.programmers.co.kr/learn/courses/30/lessons/12911

// 다음 큰 숫자

// 문제 설명
// 자연수 n이 주어졌을 때, n의 다음 큰 숫자는 다음과 같이 정의 합니다.

// 조건 1. n의 다음 큰 숫자는 n보다 큰 자연수 입니다.
// 조건 2. n의 다음 큰 숫자와 n은 2진수로 변환했을 때 1의 갯수가 같습니다.
// 조건 3. n의 다음 큰 숫자는 조건 1, 2를 만족하는 수 중 가장 작은 수 입니다.
// 예를 들어서 78(1001110)의 다음 큰 숫자는 83(1010011)입니다.

// 자연수 n이 매개변수로 주어질 때, n의 다음 큰 숫자를 return 하는 solution 함수를 완성해주세요.

// 제한 사항
// n은 1,000,000 이하의 자연수 입니다.
// 입출력 예
// n	result
// 78	83
// 15	23
// 입출력 예 설명
// 입출력 예#1
// 문제 예시와 같습니다.
// 입출력 예#2
// 15(1111)의 다음 큰 숫자는 23(10111)입니다.
#include <iostream>

#include <string>

using namespace std;

int count_one_in_binary(int n) {
    if (n == 0) return 0;
    string res = "";
    int count = 0;
    while (n > 0){
        char temp = char('0' + (n % 2));
        res = temp + res;
        if (temp == '1') count++;
        n /= 2;
    }
    return count;
}

int solution(int n) {
    int num = count_one_in_binary(n);
    for (int i = n + 1; i < 1000000; i++){
        if ( num == count_one_in_binary(i)) return i;
    }
    return 0;
}

// bitset 이용하면 더 좋음

// #include <bitset>

// int solution(int n) {
//     int num = bitset<20>(n).count();

//     while (bitset<20>(++n).count() != num);
//     return n;
// }

int main(){
    cout << solution(78) << endl;
    return 0;
}