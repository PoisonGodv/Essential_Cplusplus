//
// Created by 李凝炜 on 2024/4/21.
//

#include "work2_3.h"
#include<iostream>
using namespace std;
inline bool check(std::vector<int> &vec, int num) {
    if(num > 20) {
        cout<<"too big"<<endl;
        return false;
    }
    if(num <= 0) {
        cout<<"error num"<<endl;
        return false;
    }
    if(num > vec.size()) {
        cout<<"调用计算"<<endl;
       calc(vec , num);
    }
    return true;
}
bool calc(std::vector<int> &vec, int num) {
    for(int i = vec.size() ; i < num; ++i) {
        const int n = i+1;
        vec.emplace_back(n * ( 3 * n - 1) / 2);
    }
    return true;
}
void test_work2_3() {
    cout<<"输入小于20的位数，输入-1结束输入"<<endl;
    int in;
    vector<int> test_vec;
    while(cin>>in && in != -1) {
        if(check(test_vec , in)) {
            printvec(test_vec);
        }else {
            cout<<"input error"<<endl;
            return;
        }
    }
}
bool printvec(const std::vector<int> &vec) {
    for(const auto out: vec) {
        cout<<out<<endl;
    }
    return true;
}


