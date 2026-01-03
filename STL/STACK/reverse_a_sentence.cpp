#include <iostream>
#include <stack>
void reverse_sentence(std::string sentence)
{
    std::stack<std::string> st;
    

    for (int i = 0; i < sentence.length(); i++)
    {
        std::string word = "";
        while (sentence[i] != ' ' && i < sentence.length())
        {
            word += sentence[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        std::cout<<st.top()<<" ";
        st.pop();
    }
    std::cout<<std::endl;
}
    int main()
    {
        std::string s = "Hey, How are you doing?";
        reverse_sentence(s);
    }