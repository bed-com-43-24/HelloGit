#pragma once
#ifndef Person_h
using namespace std;
#include <string>

    class  Person{
        public:
        Person();
        Person (float newWeight);

        ~Person();
        //overload the add operator
        float operator + (const Person & other Person);
         
        private:
        float mWeight;
        string mFirstName;
        int mAge;


    };
    #endif