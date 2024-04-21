//
// Created by 李凝炜 on 2024/4/20.
//

#include "work2_1.h"
#include<iostream>
using namespace std;

void work2_1() {
    cout<<"请输入任何，直到输入exit结束"<<endl;
    string tmp;
    while(cin>>tmp && tmp != "exit") {
        cout<<"你输入的是 "<<tmp<<endl;

    }

}
