#include <iostream>
#include <stack>
// Using iterative function
std::stack<int> copy_stack(std::stack<int> &input)
{
    std::stack<int> temp;
    while (not input.empty())
    {
        // do the process till the time input stack doesnt becomes empty;
        temp.push(input.top());
        input.pop();
    }
    std::stack<int> output;
    while (not temp.empty())
    {
        output.push(temp.top());
        temp.pop();
    }
    return output;
}
// using recursive function
void f(std::stack<int> &st, std::stack<int> &result)
{
    if (st.empty())
        return;
    int curr = st.top();
    st.pop();
    f(st, result);
    result.push(curr);
}
int main()
{
    std::stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // std::stack<int> reverse = copy_stack(st);
    std::stack<int> res;
    f(st, res);
    while (not res.empty())
    {
        std::cout << res.top() << std::endl;
        res.pop();
    }
    std::cout << std::endl;
    // while(not reverse.empty()){
    //     std::cout<<reverse.top()<<std::endl;
    //     reverse.pop();
    // }
    return 0;
}