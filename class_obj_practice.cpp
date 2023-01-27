#include<bits/stdc++.h>
using namespace std;

class Student{

    string passcode;
    public:



    int id;
    string name;

    Student(){
        cout<<"Constructor";
    }

    Student(int id , string name , string passcode){
        this->id = id;
        this->name = name;
        this->passcode = passcode;
    }
    
    void intro(){
        cout<<"My name is "<<name <<", my id is "<<id << " and passcode is "<< passcode << endl;
    }
    void setPass(string s){
        passcode = s;
    }

    friend class bestFriend;
};

class bestFriend {
    public:
    void sharingSecret(Student s){
        cout<<s.passcode <<endl;
    }
};

int main(){
    Student s1( 1, "Mohit" , " 001 ");
    return 0;
}