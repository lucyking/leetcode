//
// Created by root on 9/22/16.
//

#include <map>
#include <stack>
#include <iostream>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> dic={{')','('},{']','['},{'}','{'}};
        for(auto& it: s ){
            const auto & p = dic.find(it);
            if(p!=dic.end()){
                if(st.empty() || p->second!=st.top())
                    return false;
                st.pop();
            }
            else
                st.push(it);
        }

        return st.empty();



    }
};
int main(){
    Solution s;
    bool re = s.isValid("()");
    cout<< re << endl;
    re = s.isValid("{()}");
    cout<< re << endl;
    re = s.isValid("{{{[[[}}}");
    cout<< re << endl;


}