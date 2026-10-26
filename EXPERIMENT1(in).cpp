#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    int rollNo;
    string name;
    public:
    Student(int r, string n){
        rollNo = r;
        name = n;
        cout<<"Student object created"<<endl;
    }
    void display(){
        cout<<"Roll Number:"<<rollNo<<endl;
        cout<<"Name:"<<name<<endl; 
    }
    ~Student(){
        cout<<"Student object destroyed"<<endl;
    }
};
int main(){
    cout<<"Enter your roll number:";
    int roll;
    cin>>roll;
    cout<<"Enter your name:";
    string name;
    cin>>name;
    Student s1(roll,name);
    s1.display();
}
