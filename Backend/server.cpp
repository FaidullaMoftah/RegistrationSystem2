#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>

/*
//This object contains information about the specific microsoft implementation of sockets
WSADATA wsadata;
void initSocket(){
    int initResult =  WSAStartup(MAKEWORD(2, 2), &wsadata);

if(initResult != 0){
    printf("init failed! \n");
    printf("%d\n", initresult);
    return;
}
}
*/