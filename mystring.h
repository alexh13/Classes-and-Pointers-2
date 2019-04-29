//
// Created by Alex Hughes on 2019-04-29.
//

#ifndef mystring_h
#define mystring_h

#include <iostream>
namespace cs_mystring {
    class MyString
    {
    private:
        char *desc;

    public:
        MyString();
        MyString(const char *inDesc);
        MyString(const MyString &right);
        ~MyString();
        char operator[](int index)const;
        char& operator[](int index);

        long length()const;

        friend std::ostream& operator<<(std::ostream& out, const MyString& myString);
        MyString operator=(const MyString &right);


        friend bool operator>(const MyString &left, const MyString &right);
        friend bool operator<(const MyString &left, const MyString &right);
        friend bool operator>=(const MyString &left, const MyString &right);
        friend bool operator<=(const MyString &left, const MyString &right);
        friend bool operator==(const MyString &left, const MyString &right);
        friend bool operator!=(const MyString &left, const MyString &right);

/******* ADDED FOR ASSIGNMENT 5.1 ***********/

        friend std::istream& operator>>(std::istream& in, MyString& target);
        friend MyString operator+(const MyString& left, const MyString& right);
        void read(std::istream& in, char delimiter);
        MyString operator+=(const MyString& right);



    };
}


#endif
