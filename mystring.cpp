//
// Created by Alex Hughes on 2019-04-26.
//

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cassert>
#include "mystring.h"


using namespace std;


namespace cs_mystring {


    MyString::MyString()
    {
        desc = new char[1];
        strcpy(desc, "");
    }






    MyString::MyString(const char *inDesc)
    {
        desc = new char[strlen(inDesc) + 1];
        strcpy(desc, inDesc);
    }






    MyString::MyString(const MyString& right)
    {
        desc = new char[strlen(right.desc) + 1];
        strcpy(desc, right.desc);
    }






    MyString::~MyString()
    {
        delete [] desc;
    }






    MyString MyString::operator=(const MyString &right)
    {
        if (this != &right)
        {
            delete [] desc;
            desc = new char[strlen(right.desc) + 1];
            strcpy(desc, right.desc);
        }
        return *this;
    }






    char MyString::operator[](int index)const
    {
        assert(index >= 0 && index < strlen(desc));
        return desc[index];
    }






    char& MyString::operator[](int index)
    {
        assert(index >= 0 && index < strlen(desc));
        return desc[index];
    }






    long MyString::length()const
    {
        long length = strlen(desc);
        return length;
    }






    ostream& operator<<(ostream& out, const MyString& myString)
    {
        out << myString.desc;
        return out;
    }






    bool operator>(const MyString &left, const MyString &right)
    {
        if(strcmp(left.desc, right.desc) > 0)
            return true;
        return false;
    }






    bool operator<(const MyString &left, const MyString &right)
    {
        if(strcmp(left.desc, right.desc) < 0)
            return true;
        return false;
    }






    bool operator>=(const MyString &left, const MyString &right)
    {
        if(strcmp(left.desc, right.desc) >= 0)
            return true;
        return false;
    }






    bool operator<=(const MyString &left, const MyString &right)
    {
        if(strcmp(left.desc, right.desc) <= 0)
            return true;
        return false;
    }






    bool operator==(const MyString &left, const MyString &right)
    {
        if(strcmp(left.desc, right.desc) == 0)
            return true;
        return false;
    }






    bool operator!=(const MyString &left, const MyString &right)
    {
        if(strcmp(left.desc, right.desc) != 0)
            return true;
        return false;
    }






    istream& operator>>(istream& in, MyString& target)
    {
        while (isspace(in.peek())){
            in.ignore();
        }
        char temp[128];
        in.getline(temp, 127, ' ');
        delete [] target.desc;
        target.desc = new char[strlen(temp) +1];
        strcpy(target.desc, temp);

        return in;
    }






    MyString operator+(const MyString& left, const MyString& right)
    {
        long strLength = strlen(left.desc);
        strLength += strlen(right.desc);

        MyString temp = new char[strLength + 1];

        strcpy(temp.desc, left.desc);
        strcat(temp.desc, right.desc);

        return temp;
    }






    void MyString::read(std::istream& in, char delimiter)
    {
        char temp[128];
        in.getline(temp, 127, '\n');
        delete [] this->desc;
        this->desc = new char[strlen(temp) +1];
        strcpy(this->desc, temp);

    }






    MyString MyString::operator+=(const MyString& right)
    {
        long strLength = strlen(this->desc) + strlen(right.desc) + 1;
        MyString temp = new char[strLength];
        strcpy(temp.desc, this->desc);

        delete [] this->desc;
        this->desc = new char[strLength];

        strcpy(this->desc, temp.desc);
        strcat(this->desc, right.desc);

        return *this;
    }
}
