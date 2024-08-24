#include<iostream>
using namespace std;

struct student{
int id;
string name;
int age;
};

int main()
{
student* p= new student {1001,"john Doe",20};
     cout<<" :first student: "<<endl;
  cout<<"your id is : "<<p->id<<endl;
  cout<<"your name is : "<<p->name<<endl;
  cout<<"your age is : "<<p->age<<endl;
 cout<<endl;
     cout<<" :second student: "<<endl;
student* c= new student {1002,"jane smith",21};
  cout<<"your id is : "<<c->id<<endl;
  cout<<"your name is : "<<c->name<<endl;
  cout<<"your age is : "<<c->age<<endl;    
 cout<<endl;
     cout<<" :third student: "<<endl;
student* g= new student {1003,"Bob jahnson",19};     
  cout<<"your id is : "<<g->id<<endl;
  cout<<"your name is : "<<g->name<<endl;
  cout<<"your age is : "<<g->age<<endl;
    return 0;
}