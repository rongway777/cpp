//
// Created by yankang on 1/17/23.
//


#include <string>

extern int test_a;

//其实是带extern的
void fun();

//防止重复定义
//class、inline、const
#ifndef CPP_TEST_H
#define CPP_TEST_H

class Device {
public:
    std::string name;
    std::string type;

    Device(std::string n,std::string t);

    std::string get_name();
    std::string get_type();
};

#endif //CPP_TEST_H


