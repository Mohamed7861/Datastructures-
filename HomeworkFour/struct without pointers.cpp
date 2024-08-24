#include<iostream>
using namespace std;

struct student{
int id;
string name;
int age;
student(int i,string n,int a){
id=i;
name=n;
age=a;
cout<<"your id is "<<id<<endl;
cout<<"your name is "<<name<<endl;
cout<<"your age is "<<age<<endl;

}
};

int main()
{
cout<<" :first student: "<<endl;
  student s1 (1001,"john Doe",20);
   cout<<endl;
cout<<" :second student: "<<endl; 
  student s2 (1002,"jane smith",21);
   cout<<endl;
cout<<" :third student: "<<endl;
  student s3 (1003,"Bob johnson",19); 
    return 0;
}