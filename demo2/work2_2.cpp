//
// Created by 李凝炜 on 2024/4/21.
//

#include "work2_2.h"
#include<iostream>
#include<vector>

bool work2_2_1(std::vector<int> & vec, const int &num) {
    if(num > 20) {
        cout<<"num is too big"<<endl;
        return false;
    }
    if(num <= 0) {
        cout<<"error num"<<endl;
        return false;
    }
    if(num < vec.size()) return true;
    for(int i = vec.size() ; i < num ;++i) {
        int n = i + 1;
        vec.emplace_back(n * (3 * n - 1) / 2);
    }
    return true;
}
template<typename T>
bool work2_2_2(vector<T> &vec , const string & type) {
    if(type != "int") {
        cout<<"type error"<<endl;
        return false;
    }

    for(auto tmp : vec) {
        cout<<tmp<<endl;
    }
    return true;
}

void test_work_2() {
    vector<int> test_vec;
    cout<<"输入要产生几位Pentagonal"<<endl;
    int n;
    cin>>n;
    work2_2_1(test_vec , n);
    work2_2_2(test_vec , "int");
}

