//
// Created by yankang on 1/17/23.
//
#include <string>
#include <utility>
#include "test.h"
#include <iostream>

//int test_a_1 = 22;

int mul = 3;

Device::Device(std::string n, std::string t) {
    name = std::move(n);
    type = std::move(t);
}

std::string Device::get_name() {
    return name;
}

std::string Device::get_type() {
    return type;
}

inline int add(int a,int b){
    return a + b;
}

