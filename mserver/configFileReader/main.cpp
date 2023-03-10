#include <iostream>
#include<stdio.h>
//м╥нд╪Ч 
#include "ConfigFileReader.h"
int main()
{
    std::cout << "hello world" << std::endl;
// #ifdef WIN32
//     CConfigFileReader config("../etc/chatserver.conf");
// #else
//     CConfigFileReader config("etc/chatserver.conf");
// #endif

    // const char *logbinarypackage = config.getConfigName("dbserver");

    // printf("new client fd %s! \n", logbinarypackage);
    printf("new client fd ! \n");
    return 0;
}
