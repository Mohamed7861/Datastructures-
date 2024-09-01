#include<iostream>
using namespace std;

int main() {
    int n, s;

    cout << "Enter the number of students: ";
    cin >> n;

    cout << "Enter the number of subjects: ";
    cin >> s;

    int** dgre = new int*[n];
    for(int i = 0; i < n; i++) {
        dgre[i] = new int[s];
    }

    string* name = new string[n];
    string* sub = new string[s];

    cout << "Enter the names of subjects:\n";
    for(int i = 0; i < s; i++) {
        cout << "Subject " << (i+1) << ": ";
        cin >> sub[i];
    }
    for(int i = 0; i < n; i++) {
        cout << "Enter the name of student " << (i+1) << ": ";
        cin >> name[i];

        for(int j = 0; j < s; j++) {
            cout << sub[j] << ": ";
            cin >> dgre[i][j];
        }
    }
     cout<<"student name"<<"  ";
for(int i=0;i<s;i++){
cout<<sub[i]<<"   ";
    }
    cout<<"avg"<<endl;
    int sum;
    int avg;
    for(int i = 0; i < n; i++) {
        cout<<name[i]<<"        ";
        for(int j = 0; j < s; j++) {
            cout<<dgre[i][j]<<"      ";
     
       sum += dgre[i][j];
        }
        
        
         avg = sum / s;
         cout<<avg << endl;
    }    
    
    return 0;
}
    