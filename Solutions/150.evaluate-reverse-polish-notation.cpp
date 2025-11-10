class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>stack;
       unordered_set<string>operators={"+","-","*","/"};
       for(auto token:tokens){
        if(!operators.count(token)) stack.push(stoi(token));
        else{
           int first=stack.top();
           stack.pop();
           int second=stack.top();
           stack.pop();
           if(token=="+") stack.push(first+second);
           else if(token=="-") stack.push(second-first);
           else if(token=="*") stack.push(first*second);
           else stack.push(second/first); 
        }
       }
        return stack.top();
    }
};