//
// Created by 李凝炜 on 2024/4/20.
//

#include "work1_8.h"

#include<iostream>
using namespace std;
const string resp[4] = {"第一次输入错误" , "第二次输入错误" , "第三次输入错误" , "第n次输入错误"};
void work1_8() {
    cout<<"输入一个数，输入exit结束"<<endl;
    string tmp;
    int count = 0;

    while(cin>>tmp && tmp != "exit") {
        ++count;
        switch (count) {
            case 1:
                cout<<resp[0]<<endl;
                break;;
            case 2:
                cout<<resp[1]<<endl;
                break;
            case 3:
                cout<<resp[2]<<endl;
                break;
            default:
                cout<<resp[3]<<endl;
                break;
        }
    }

}

