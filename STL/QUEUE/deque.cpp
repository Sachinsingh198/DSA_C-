#include <iostream>
#include <deque>
#include <stack>
int main(){
    std::deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_front(6);
    dq.push_front(5);
    dq.push_back(7);
    dq.pop_back();
    dq.pop_front();
    while(not dq.empty()) {
        std::cout<<dq.front()<<" ";
        dq.pop_front();
    }
}