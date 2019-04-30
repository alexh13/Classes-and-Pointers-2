//
// Created by Alex Hughes on 2019-04-26.
//
/*
Alex Hughes
CS 110B
4/26/19
Professor Dave
Assignment 13.1

Assignment calls for making the following refinements to the class that you wrote in the last assignment.
All the requirements from that class are still in force. For example, all MyStrings must always be stored in a dynamic
array that is exactly the correct size to store the string. On top of that, I added in a read() function to allow
the client programmer to specify the delimiting character.


Precondition/Postcondition:



MyString();
    Post: initialize data member 'desc' with memory of size 1 and copy empty string to it


MyString(const char *inDesc);
    Pre: Takes one argument - pointer to char object 'inDesc' and const
    Post: Object is created with object pointer given at input


MyString(const MyString& right);
    Pre: Takes one argument, reference MyString object 'right' and is const
    Post: Object is created with size accordingly with specified object


~MyString();
    Pre: Object exist with valid length
    Post: Object is destroyed


MyString operator=(const MyString& right);
    Pre: Input argument contains address to MyString object: right
    Post: Object is copied with size accordingly with specified object


MyString operator+=(const MyString& right);
    Pre: Input argument contains address to MyString object: right
    Post: Returns pointer to this object

MyString operator+=(const char *right);
    Pre: Input argument contains pointer to char object: right
    Post: Returns pointer to char object created by combination of concatenation and assignment operator

int length() const;
    Pre: Length
    Post: Returns length of object


friend ostream& operator<<(ostream& out, const MyString& source);
    Pre: The out of ostream object is waiting to receive MyString output
    Post: MyString source passed by reference to the ostream out and is const


friend istream& operator>>(istream& in, MyString &source);
    Pre: The in of istream object waiting to receive MyString input
    Post: MyString source has been passed by reference into the istream 'in'


friend bool operator<(const MyString &Left, const MyString &Right);
    Pre: Input argument is address to two MyString object: left and right
    Post: function return true, if left < right, else false


friend bool operator<=(const MyString &Left, const MyString &Right);
    Pre: input parameters contain reference to two MyString object: left and right
    Post: function return true, if left <= right, else false


friend bool operator==(const MyString &Left, const MyString &Right);
    Pre: input parameters contains reference to two MyString object: left and right
    Post: function return true, if left == right, else false


friend bool operator!=(const MyString &Left, const MyString &Right);
    Pre: input parameters contains reference to two MyString object: left and right
    Post: function return's true, if Left != Right, else false

friend bool operator>=(const MyString &Left, const MyString &Right);
    Pre: input parameters contains reference to two MyString object: left and right
    Post: function return's true, if left >= right, else false


friend bool operator>(const MyString &Left, const MyString &Right);
    Pre: Input parameters contains reference two MyString object: left and right
    Post: function return's true, if left > right, else false


void read(istream& inString, char delim);
    Pre: Input argument contains two argument, stream and delimiting character
    Post: Reads character by character in a loop. Use in.getline() function to do reading of the input into an
    array, then use strcpy() to copy into your data member.


friend const MyString operator+(const MyString &left, const MyString &right);
    Pre: Input parameters contains reference to two MyString object: left and right
    Post: function return's addition of two MyString objects


char operator[](int index) const;
    Pre: Input argument contains value of index
    Post: Returns the index to MyString specifying the char to that location which is const


char& operator[](int index);
    Pre: Input argument contains value of index
    Post: Returns the index to MyString specifying the char to that location

*/


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


        friend std::istream& operator>>(std::istream& in, MyString& target);


        friend MyString operator+(const MyString& left, const MyString& right);


        void read(std::istream& in, char delimiter);


        MyString operator+=(const MyString& right);



    };
}


#endif

/*
OUTPUT:
 /Users/alexhughes/CLionProjects/assignment13_1/cmake-build-debug/assignment13_1
----- Testing basic String creation & printing
string [0] = Wow
string [1] = C++ is neat!
string [2] =
string [3] = a-z

----- Now reading MyStrings from file

----- first, word by word
Read string = The
Read string = first
Read string = time
Read string = we
Read string = will

Read string = read
Read string = individual
Read string = words,
Read string = next
we
Read string = read
Read string = whole
Read string = lines

----- now, line by line
Read string = The  first  time  we  will
Read string =     read individual words, next
Read string = we read whole lines

----- Testing access to characters (using const)
Whole string is abcdefghijklmnopqsrtuvwxyz
now char by char: abcdefghijklmnopqsrtuvwxyz
----- Testing access to characters (using non-const)
Start with abcdefghijklmnopqsrtuvwxyz and convert to ABCDEFGHIJKLMNOPQSRTUVWXYZ

----- Testing relational operators between MyStrings
Comparing app to apple
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing apple to
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
Comparing  to Banana
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing Banana to Banana
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false

----- Testing relations between MyStrings and char *
Comparing he to hello
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing why to wackity
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true

----- Testing concatentation on MyStrings
outrageous + milk = outrageousmilk
milk +  = milk
 + cow = cow
cow + bell = cowbell

----- Testing concatentation between MyString and char *
abcde + XYZ = abcdeXYZ
XYZ + abcde = XYZabcde

----- Testing shorthand concat/assign on MyStrings
who += what = whowhatandwhowhat
what += WHEN = whatWHENandwhatWHEN
WHEN += Where = WHENWhereandWHENWhere
Where += why = WherewhyandWherewhy

----- Testing shorthand concat/assign using char *
I love  += programming = I love programming

----- Testing copy constructor and operator= on MyStrings
original is cake, copy is fake
original is cake, copy is fake
after self assignment, copy is Copy Cat
Testing pass & return MyStrings by value and ref
after calling Append, sum is BinkyBoo
val is winky
after assign,  val is BinkyBoo

Process finished with exit code 0

 */