cmake_minimum_required(VERSION 3.22)
project(RegistrationSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(RegistrationSystem
        Backend/StudentData/Id.cpp
        Backend/StudentData/Id.h
        Backend/StudentData/Name.cpp
        Backend/StudentData/Name.h
        Backend/StudentData/Address.cpp
        Backend/StudentData/Address.h
        Backend/StudentData/Date.cpp
        Backend/StudentData/Date.h
        Backend/StudentData/Payment.cpp
        Backend/StudentData/Payment.h
        Backend/StudentData/StudentContact.cpp
        Backend/StudentData/StudentContact.h
        Backend/StudentData/Marks.cpp
        Backend/StudentData/Marks.h
        Backend/StudentData/Student.cpp
        Backend/StudentData/Student.h
        Backend/DataStructures/bst.cpp
        Backend/DataStructures/bst.h
        Backend/DataStructures/LinkedList.cpp
        Backend/DataStructures/LinkedList.h
        Backend/DataStructures/Hashtable.cpp
        Backend/DataStructures/Hashtable.h
        Backend/server.cpp
        Backend/server.h
        Backend/main.cpp )
