#include <iostream>
#include <stack>
std::stack<int> insertAtBottom(std::stack<int>& input, int val){
        std::stack<int> temp;
        while(not input.empty()){
            temp.push(input.top());
            input.pop();
        }
        input.push(val);
        while(not temp.empty()){
            input.push(temp.top());
            temp.pop();
        }
        return input;
}

//Insert at any Index
std::stack<int> insertAtIndex(std::stack<int>& input, int index, int val){
    std::stack<int> temp;
    int curr= 0;
    int n = input.size();
    while(curr != n - index){
        temp.push(input.top());
        input.pop();
        curr++;
    }
    input.push(val);
    while(not temp.empty()){
        input.push(temp.top());
        temp.pop();
    }
    return input;
}
//Usig recursive call
void f(std::stack<int>& input, int x){
    if(input.empty()){
        input.push(x);
        return;
    }
    int curr = input.top();
    input.pop();
    f(input, x);
    input.push(curr);
}
//Remove from the bottom or any index
void removeAtBottom(std::stack<int>& input){
    std::stack<int> temp;
    int n = input.size();
    int curr = 0;
    while(not input.empty()){
        temp.push(input.top());
        input.pop();
        curr++;
    }
    temp.pop();
    while(not temp.empty()){
        input.push(temp.top());
        temp.pop();
    }
}

void removeAtIndex(std::stack<int>& input, int index){
    std::stack<int> temp;
    int curr = 0; 
    int n = input.size();
    while(curr != n - index){
        temp.push(input.top());
        input.pop();
        curr++;
    }
    temp.pop();
    while(not temp.empty()){
        input.push(temp.top());
        temp.pop();
    }
}
int main(){
    std::stack<int> st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    // std::stack<int> result = insertAtBottom(st,4);
    // while(not st.empty()){
    //     std::cout<<st.top()<<std::endl;
    //     st.pop();
    // }
    std::stack<int> res = insertAtIndex(st, 2, 200);
    removeAtBottom(res);
    removeAtIndex(res,1);
    while(not res.empty()){
        std::cout<<res.top()<<std::endl;
        res.pop();
    }
    return 0;
}