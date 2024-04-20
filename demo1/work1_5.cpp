//
// Created by 李凝炜 on 2024/4/19.
//

#include "work1_5.h"

bool user_input() {
    std::cout<<"please inpute name"<<std::endl;
    std::string name;
    std::cin>>name;
    if(name.size() > 2) {
        std::cout<<name<<std::endl;
        return true;
    }else {
        std::cout<<"error"<<std::endl;
        return false;
    }
}

