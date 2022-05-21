cmake_minimum_required(VERSION 3.22)
project(RegistrationSystem)

set(CMAKE_CXX_STANDARD 20)
link_libraries(ws2_32 wsock32)

add_executable(RegistrationSystem
        Backend/StudentData/Id.cpp
        Backend/StudentData/Id.h
        Backend/StudentData/CreditHours.cpp
        Backend/StudentData/CourseTutor.h
        Backend/StudentData/CourseTutor.cpp
        Backend/StudentData/CreditHours.h
        Backend/StudentData/Course.cpp
        Backend/StudentData/Course.h
        Backend/StudentData/Department.cpp
        Backend/StudentData/Department.h
        Backend/StudentData/Faculty.cpp
        Backend/StudentData/Faculty.h
        Backend/StudentData/GPA.cpp
        Backend/StudentData/GPA.h
        Backend/StudentData/Date.cpp
        Backend/StudentData/Date.h
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
        Backend/main.cpp Backend/StudentData/CreditHours.cpp Backend/StudentData/CreditHours.h Backend/StudentData/GPA.cpp Backend/StudentData/GPA.h Backend/StudentData/Course.cpp Backend/StudentData/Course.h Backend/StudentData/CourseTutor.cpp Backend/StudentData/CourseTutor.h Backend/StudentData/Faculty.cpp Backend/StudentData/Faculty.h Backend/StudentData/Department.cpp Backend/StudentData/Department.h)
