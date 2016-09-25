//
// Created by root on 9/25/16.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
#include <deque>

using namespace std;

int fx(map<string,int> dic,string s){
    for(auto it=dic.begin();it!=dic.end();it++)
        if(it->first==s) return 1;
    return 0;
}

string rm(string s){
    string re;
    for (int i = 0; i < s.size(); i++){
        if(!ispunct(s[i]))
            re += s[i];


    }
    return re;

}

int main(){
    string s;
    map<string,int> dic;
    deque<string> dq;
    while(cin>>s){
        s=rm(s);
        if(fx(dic,s))
            dic[s]++;
        else {
            dic.insert(make_pair(s, 1));
            dq.push_back(s);
        }

    }
    for(auto it=dq.begin();it!=dq.end();it++)
        cout << *it << " ";


    return 0;
}
