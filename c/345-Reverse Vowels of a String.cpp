#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        set<char> Vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int len = s.length();
        char tmp;



        int k = len-1;
        for(int i=0;i<len;i++){
           if(Vowels.count(s[i])) {
               for(int j=k;j>0;j--){
                   if(j<=i)
                       return s;
                   else if(Vowels.count(s[j])) {
                       tmp = s[i];
                       s[i] = s[j];
                       s[j] = tmp;
                       k=j-1;
                       break;
                   }
               }
           }
        }
        return s;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    Solution alpha;
    string re = alpha.reverseVowels("BBBMMMikeaAE");
    cout <<re;
    string re2 = alpha.reverseVowels("aeiuo");
    cout <<re2;
    return 0;
}
