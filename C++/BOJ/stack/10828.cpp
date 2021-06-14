#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

/* 10828 스택 -> print로 풀이시 에러 -> 해결 방법 생각해보기 
                cout을 사용할 때도 top을 입력하면 error 발생
                => 오답 : 변수 선언을 반복문 안에다 해서 그런 것임..^^
                => c++ stack을 사용시, stack이 비어있을 때 pop, top 사용시 프로그램이 종료 되어 버림 */



int main(void) {
    int N;

    int value;
    string opt;

    stack<int> stack;

    scanf("%d", &N);

    for (int i=0; i<N; i++){
        cin>>opt;

        if (opt == "push") {
            cin>>value;
            stack.push(value);
        }

        else if (opt == "pop") {
             if (stack.empty()) {
                cout<<"-1\n";
                continue;
            }
            cout<<stack.top()<<"\n";
            stack.pop();
        }

        else if (opt == "size") {
            cout<<stack.size()<<"\n";
        }

        else if (opt == "empty") {
            if (stack.empty()) {
                cout<<"1\n";
                continue;
            }
            cout<<"0\n";
        }

        else if (opt == "top") {
            if (stack.empty()) {
                cout<<"-1\n";
                continue;
            }
            cout<<stack.top()<<"\n";
        }
    }
    return 0;
}