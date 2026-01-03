#include <iostream>
#include <queue>
#include <stack>
class ClassName {
private:
   
public:
};
int main() {
        std::queue<int> que;
    que.push(5);
    que.push(4);
    que.push(3);
    que.push(2);
    que.push(1);
    std::stack<int> st;
    while(!que.empty()){
        st.push(que.front());
        que.pop();
    }
    while(!st.empty()){
        que.push(st.top());
        st.pop();
    }
    while(!que.empty()){
        std::cout<<que.front()<<" ";
        que.pop();
    }
    std::cout<<std::endl;
    return 0;
}