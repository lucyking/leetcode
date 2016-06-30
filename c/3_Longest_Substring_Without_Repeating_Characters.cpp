#include <iostream>
#include <set>

using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s){
        int i=0,j=0;
        set<char> st;
        set<string> ss;
        for(i=j;i<s.length();i++){
            if(!st.count(s[i])) {
                st.insert(s[i]);
                if(st.size()==s.length())
                    return s.length();
                else if(i+1==s.length())
                    ss.insert(s.substr(j, i - j + 1 ));
            }
            else if(st.count(s[i])) {
                ss.insert(s.substr(j, i - j  ));
                j=i;
                st.clear();
                st.insert(s[i]);
            }
        }

        int max=0;
        for(set<string>::iterator p = ss.begin();p!=ss.end();p++){
            if((*p).size()>max)
                max=(*p).size();
        }
        return max;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    cout << a.lengthOfLongestSubstring("aab");
    cout << a.lengthOfLongestSubstring("dvdf");
    cout << a.lengthOfLongestSubstring("abcabcbb");
    cout << a.lengthOfLongestSubstring("abcdabcbb");
    cout << a.lengthOfLongestSubstring("bbbbb");
    cout << a.lengthOfLongestSubstring("pwwkew");
    return 0;
}