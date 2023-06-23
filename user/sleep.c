//
// Created by 冯益民 on 2023/6/23.
//
#include "../kernel/types.h"
#include "user.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) { //参数错误
        fprintf(2, "usage: sleep <time>\n");
        exit(1);
    }
    //fprintf(2,"我想怎么样就怎么样，我就相对引用\n");
    //fprintf(2,"事实证明，只要有用就可以了\n");
    sleep(atoi(argv[1]));
    exit(0);
}