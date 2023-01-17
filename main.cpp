#include <iostream>
#include <string>
#include "test.h"

using namespace std;

int values[10];

#define ARRAY_SIZE (sizeof(values)/sizeof(values[0]))
#define CODE_ERROR (-1)

/**
 * C C++内存分配
 *      堆栈。本地变量
 *      堆区。malloc区域
 */

//函数声明，include头文件，include声明列表！！声明太多写不过来
int put(int index,int value);

extern int test_a_1;

//全局变量，别的cpp里面可以extern后直接调用
int define = 0;


inline int add(int a,int b){
    return a + b;
}

int main() {

    cout << "Hello, World!" << std::endl;
    string s = "hello java string";


    int a = 5;
    cout << "n = "<< a << endl;
    cout << "&n = "<< &a << "(内存地址)" << endl;

    int b = a;
    cout << "b = "<< b << endl;
    cout << "&b = "<< &b << "(内存地址)" << endl;

    int &c = a;
    c = 4;
    cout << "c = "<< c <<endl;
    cout << "&c = " << &c << "(内存地址)" << endl;


    const int &d = a;
    cout << "d = "<< d <<endl;
    cout << "&d = " << &d << "(内存地址)" << endl;

    //Note: 不要返回局部变量的引用,全局变量的应用可以引用


    cout << "put(2,4) = " << put(2,4) << endl;
    cout << "put(-1,0) = " << put(-1,0) << endl;


    cout << "test_a = " << test_a << endl;
    cout << "test_a_1 = " << test_a_1 << endl;

    Device device("FREEGUY","Mitv");

    cout << "device.name = " << device.get_name() << ", device.type = " << device.get_type() << endl;


    int result = add(2,2);

    cout << "result = " << result <<endl;

    return 0;
}


int put(int index,int value){
    if(index < 0 || index > ARRAY_SIZE - 1){
        return CODE_ERROR;
    }

    return values[index] = value;
}

//在编译期间就要编译到.o,无法像普通函数那样到link期去别的cpp找


