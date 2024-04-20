//
// Created by 李凝炜 on 2024/4/19.
//

#include "work_1_6.h"
#include<iostream>
#include<vector>
int tmp_a[100];
void work1_6() {
    std::cout<<"输入需要输入的数字个数,小于100个"<<std::endl;
    int n;
    std::cin>>n;
    if(n > 100) {
        std::cout<<"输入错误"<<std::endl;
        return ;
    }
    std::vector<int> vec_tmp;
    for(int i = 0 ; i < n ; ++i){
        int tmp;
        std::cin>>tmp;
        vec_tmp.emplace_back(tmp);
        tmp_a[i] = tmp;
    }
    float sum = 0;

    for(auto mp : vec_tmp) {
        sum += mp;
    }
    std::cout<<"sum is "<<sum<<"\nave is"<<sum / n<<std::endl;

}
