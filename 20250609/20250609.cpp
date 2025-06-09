#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int i = 1;
    while (n > 0) {
        answer += n % 10;
        n /= 10; 
    }

    return answer;
}

int main(){
    int n = 123;
    int answer = solution(n);

    cout << answer << endl;

    return 0;
}