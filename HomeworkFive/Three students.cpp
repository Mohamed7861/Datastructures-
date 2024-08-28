#include<iostream>
#include<cstdlib>
using namespace std;
struct student{
 int id;
 string name;
 int age;
 student* ptr;
student(int i,string n, int a){
id=i;
name=n;
age=a;
ptr=nullptr;
}
};
int main()
{
int n=1;
student* p= new student(1001,"john Doe",20);
p->ptr= new student(1002,"jane smith",21);
p->ptr->ptr= new student(1003,"Bob jahnson",19);
student* print= p;
while (print != nullptr){
cout<<"   ●student "<<n++<<endl;;
cout<<"id : "<<print->id<<endl;
cout<<"name : "<<print->name<<endl;
cout<<"age : "<<print->age<<endl;
print= print->ptr;
}
    return 0 ;
}