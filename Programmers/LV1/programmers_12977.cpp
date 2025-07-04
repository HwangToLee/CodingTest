// https://school.programmers.co.kr/learn/courses/30/lessons/12977?language=cpp

// 소수 만들기

// 문제 설명
// 주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 합니다. 숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 개수를 return 하도록 solution 함수를 완성해주세요.

// 제한사항
// nums에 들어있는 숫자의 개수는 3개 이상 50개 이하입니다.
// nums의 각 원소는 1 이상 1,000 이하의 자연수이며, 중복된 숫자가 들어있지 않습니다.
// 입출력 예
// nums	result
// [1,2,3,4]	1
// [1,2,7,6,4]	4
// 입출력 예 설명
// 입출력 예 #1
// [1,2,4]를 이용해서 7을 만들 수 있습니다.

// 입출력 예 #2
// [1,2,4]를 이용해서 7을 만들 수 있습니다.
// [1,4,6]을 이용해서 11을 만들 수 있습니다.
// [2,4,7]을 이용해서 13을 만들 수 있습니다.
// [4,6,7]을 이용해서 17을 만들 수 있습니다.

#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

bool isPrime(int sum) {
  if (sum < 2) return false;
  for (int i = 2; i < sum; i++){
    if (sum % i == 0) return false;
  }
  return true;
}

int solution(vector<int> nums) {
    int answer = 0;

    for (int i = 0; i < nums.size(); i++){
      for (int j = i+1; j < nums.size(); j++){
        for (int k = j+1; k < nums.size(); k++){
          if (isPrime(nums[i] + nums[j] + nums[k]))
            answer++;
        }
      }
    }

    return answer;
}

int main(){
  string line;
  getline(cin, line);
  istringstream iss(line);

  vector<int> nums;
  int num;
  while(iss >> num) {
    nums.push_back(num);
  }

  int answer = solution(nums);

  cout << answer << endl;

  return 0;
}