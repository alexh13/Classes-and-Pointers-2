//
// Created by Alex Hughes on 2019-04-29.
//

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cassert>
#include "mystring.h"


using namespace std;

namespace cs_mystring {

// BIG THREE (FOUR) Default constructor, constructor, copy constructor,
// destructor, assignment operator
//
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

// Two overloaded functions for the [] operator, as the first will deal with
// accessing a value in the C-String, and will pass back a copy of the first
// without the ability to change the C-String


    char MyString::operator[](int index)const
    {
        assert(index >= 0 && index < strlen(desc));
        return desc[index];
    }


// The second will pass the object reference, and this will allow us to put
// the brackets in the left side of an equation, meaning that we can actually
// change the value in the C-String object

    char& MyString::operator[](int index)
    {
        assert(index >= 0 && index < strlen(desc));
        return desc[index];
    }


// will return the length of the string without changing the calling object
    long MyString::length()const
    {
        long length = strlen(desc);
        return length;
    }


// insertion overload

    ostream& operator<<(ostream& out, const MyString& myString)
    {
        out << myString.desc;
        return out;
    }


// RELATIONAL OPERATORS

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


/***************** ADDED FOR ASSIGNMENT 5 *********************/
// temp will be a temporary char array that we will use to hold the values
// of the instream
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

// the strLength variable will hold the length of the two strings and
// will add one for the delimiter character
//
// temp will be a temporary string that will be returned as a result of the
// addition, since both of the arguments are consts
    MyString operator+(const MyString& left, const MyString& right)
    {
        long strLength = strlen(left.desc);
        strLength += strlen(right.desc);

        MyString temp = new char[strLength + 1];

        strcpy(temp.desc, left.desc);
        strcat(temp.desc, right.desc);

        return temp;

    }


// char is a temp array that we will use to read in the instream file,
// and we will rely on strcpy on how to add it into our this variable
    void MyString::read(std::istream& in, char delimiter)
    {
        char temp[128];
        in.getline(temp, 127, '\n');
        delete [] this->desc;
        this->desc = new char[strlen(temp) +1];
        strcpy(this->desc, temp);

    }

// the strLength variable is used to hold the length of both of the variables
// and add one for the ending character
//
// the temp MyString object is used to temporarily hold the value of the char
// array before we copy it in
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
