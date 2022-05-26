#include <iostream>
//#include "Tester.h"
#define MOD 29
#include "StudentData/Student.h"
#include "DataStructures/LinkedList.h"
#include "server.h"
#include "DataStructures/bst.h"
#include "DataStructures/Hashtable.h"
int main(int argc, char const *argv[])
{
    /*student s = new student();
    WSADATA wsadata;
    int initResult = WSAStartup(MAKEWORD(2, 2), &wsadata);

    if (initResult != 0) {
        printf("init failed! \n");
        printf("%d\n", initResult);
    } else printf("success\n");
    struct addrinfo *result = NULL,
            *ptr = NULL,
            hints;

    ZeroMemory( &hints, sizeof(hints) );
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    initResult = getaddrinfo(argv[1], DEFAULT_PORT, &hints, &result);
    if (initResult != 0) {
        printf("getaddrinfo failed: %d\n", initResult);
        WSACleanup();
        return 1;
    }
    SOCKET ConnectSocket = INVALID_SOCKET;
    ptr=result;
    ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype,
                           ptr->ai_protocol);
    if (ConnectSocket == INVALID_SOCKET) {
        printf("Error at socket(): %ld\n", WSAGetLastError());
        freeaddrinfo(result);
        WSACleanup();
        printf("misery\n");
    }
    initResult = connect( ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
    if (initResult== SOCKET_ERROR) {
        closesocket(ConnectSocket);
        ConnectSocket = INVALID_SOCKET;
    }
    freeaddrinfo(result);
    if (ConnectSocket == INVALID_SOCKET) {
        printf("Unable to connect to server!\n");
        WSACleanup();
    }*/
    Hashtable* h= newHashtable(MOD, 10);
    Name* n1 = new Name("forat ", "mahmoud ", "moftah");
    Date* d = new Date(30, 10, 2006);
    student* s = new student(n1, "Egypt", d);
    Name* n2 = new Name("forat ", "mahmoud ", "moftah");
    Date* d2 = new Date(25, 10, 2006);
    student* s2 = new student(n2, "Egypt2", d2);
    insert(h,s);
    insert(h,s2);
    student* found = search(h,(s->getId()));
    int t = 3;
}
