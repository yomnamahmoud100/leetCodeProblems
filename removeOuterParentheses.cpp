#include <iostream>
#include <stack>
#define fast ios_base::sync_with_stdio(0);       cin.tie(0);      cout.tie(0);
using namespace std;
string removeOuterParentheses(string s) {
        stack<char>stack;
        string res = "";
        for(int i = 0; i<s.size(); i++){
            if (s[i] == '(')
            {
                stack.push(s[i]);
                if (stack.size() > 1)res+=s[i];
            }
            else if (s[i] == ')'){
                if (stack.size() > 1) res += s[i];
                stack.pop();
            }
        }
        return res;
}
int main() {
    fast;
    cout<<removeOuterParentheses("(()())(())")<<endl;
    return 0;
}
