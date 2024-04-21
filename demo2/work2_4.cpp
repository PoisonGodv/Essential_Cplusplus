//
// Created by 李凝炜 on 2024/4/21.
//

#include "work2_4.h"
#include<iostream>
const vector<int> * work_1(int num) {
    if(num < 0) {
        cout<<"num is error"<<endl;
        return nullptr;
    }
    if(num > 20) {
        cout<<"num big"<<endl;
        return nullptr;
    }
    static vector<int> sta_vec;
    if(sta_vec.size()<num) {
        for(int i = (int)sta_vec.size() ; i < num ; ++i) {
            int n = i + 1;
            cout<<"从"<<n<<"开始拓展"<<endl;
            sta_vec.emplace_back(n * (3 * n - 1) / 2);
        }
    }
    return &sta_vec;
}

void print_place(const vector<int>& tmp, const int num) {
    cout<<tmp[num - 1]<<endl;
}

void test_work2_4() {
    cout<<"输入-1结束输入，输入一个位置，返回当位置的值"<<endl;
    int p;
    while(cin>>p && p != -1) {
        if(work_1(p) != nullptr)
            print_place(*(work_1(p)) , p);
    }

}

