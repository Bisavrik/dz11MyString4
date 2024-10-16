#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <initializer_list>

using namespace std;

class MyString 
{
private:
    char* str;
    int length;
    static int objectCount;

public:
    MyString();
    MyString(int size);
    MyString(const char* inputStr);
    MyString(initializer_list<char> initList); 
    MyString(MyString&& other) noexcept; 
    MyString& operator=(MyString&& other) noexcept; 
    ~MyString();

    void input();
    void output() const;
    void MyStrcpy(MyString& obj);
    bool MyStrStr(const char* substr);
    int MyChr(char c);
    int MyStrLen() const;
    void MyStrCat(MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(MyString& b);
    MyString operator+(const MyString& b);
    MyString& operator++();
    MyString& operator--();
    char& operator[](int index);
    MyString& operator+=(char c);
    MyString& operator+=(int n);
    MyString& operator=(const MyString& obj);
    static int getObjectCount();
    const char* getStr() const;
    void setStr(const char* inputStr);
};

ostream& operator<<(ostream& os, const MyString& obj);

istream& operator>>(istream& is, MyString& obj);

#endif
