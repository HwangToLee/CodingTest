#include <string>
#include <vector>
#include <iostream>


using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int i = 0;
    while(true){
        answer.push_back(n % 10);
        n /= 10;
        i++;
        if (n==0) break;
    }
        
    return answer;
}

int main(){
    long long n = 123;
    vector<int> answer = solution(n);


    return 0;
}