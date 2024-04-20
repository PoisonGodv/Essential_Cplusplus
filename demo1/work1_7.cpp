//
// Created by 李凝炜 on 2024/4/20.
//

#include "work1_7.h"
#include<fstream>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void work1_7() {
    ifstream input_f("../work1_7.txt");
    if(!input_f) {
        perror("../work1_7.txt");
        cout<<"open error"<<endl;
        return ;
    }
    vector<string> str;
    string tmp;
    while(input_f >> tmp) {
        str.emplace_back(tmp);
    }
    for(auto s : str) {
        cout<<s<<endl;
    }
    sort(str.begin() , str.end(),[&](const string &a , const string &b)-> bool {
        return a>b;
    });//原文要求排序，在此实现自定义排序从大到小
    ofstream out_f("../work1_7_after_sort", ios_base::app);
    for(auto &output : str) {
        out_f << output<<endl;
    }

}
