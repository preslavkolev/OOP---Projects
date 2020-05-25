//
// Created by Presli Kolev on 5/25/2020.
//

#ifndef LIBRARY_USER_H
#define LIBRARY_USER_H


#include <iostream>

class User_of_lib{
private:
    char* username;
    char* password;
    unsigned int access_level;



public:
    User_of_lib(): username(nullptr), password(nullptr), access_level(0) {};
    User_of_lib (char* _user, char* _pass, unsigned int acc_lv): username(_user), password(_pass), access_level(acc_lv) {};
    User_of_lib(const User_of_lib&);
    User_of_lib operator=(const User_of_lib&);
    ~User_of_lib();



};





#endif //LIBRARY_USER_H
