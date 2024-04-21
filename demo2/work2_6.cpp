//
// Created by 李凝炜 on 2024/4/21.
//

#include "work2_6.h"
#include<iostream>
using namespace std;
template<typename T>
T max_w(T a , T b) {
    return a > b ? a : b;
}

template<typename T>
T max_w(T a[] , int num) {
    T tmp = a[0];
    for(int i = 0 ; i < num ; ++i) {
        tmp = (a[i] > tmp ? a[i] : tmp);
    }
    return tmp;
}
template<typename T>
T max_w(vector<T> &vec) {

    T tmp = vec[0];

    for(int i = 0 ; i < vec.size() ; ++i) {
        tmp = (tmp > vec[i] ? tmp : vec[i]);
    }
    return tmp;

}

void test_work2_6() {
    cout<<max_w("as" , "bs")<<endl;
    cout<<max_w(1.2, 2.2)<<endl;
    vector<string> test;
    test.emplace_back("aaaa");
    test.emplace_back("ba");
    cout<<max_w(test)<<endl;
    int tmp_int[] = {1,2,3,4};
    cout<<max_w(tmp_int , 4)<<endl;

}