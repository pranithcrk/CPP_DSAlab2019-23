#include <iostream>

using namespace std;
struct students{
    int rollno;
    string name;
    int marks[4];
    int totalMarks;
    
}s1;
class Studentdemo{
    public:


void setdata(){
    cout<<"Enter the name of student: "<<"\n";
    cin>>s1.name;
    cout<<"Enter the roll no: "<<"\n";
    cin>>s1.rollno;
    for(int i=0;i<4;i++){
        cout<<"Enter the marks of subject "<<i+1<<"\n";
        cin>>s1.marks[i];
        
    }
    
}
int totalmrks(){
    int ttlmrks=0;
    for(int j=0;j<4;j++){
        ttlmrks+=s1.marks[j];
        
    }
    return ttlmrks;
} 
void displayDetails(){
    cout<<" name of student: "<<"\n"<<s1.name<<"\n";
    
    
    cout<<" rollno of student: "<<"\n"<<s1.rollno<<"\n";
    for(int k=0;k<4;k++){
        cout<<"marks in subject "<<"\n"<<s1.marks[k]<<"\n";
    }
    cout<<"Total marks of student: "<<"\n"<<totalmrks()<<"\n";
    
    
}
};

int main()
{
    cout<<"Hello World"<<"\n";
    int z;
    int totaltop[z];
    int g;
    
    cout<<"Enter the no. of student you want to use program for "<<"\n";
    cin>>z;
    for(int b=0;b<z+1;b++){
        Studentdemo studb;
        studb.setdata();
        studb.displayDetails();
        g=studb.totalmrks();
        totaltop[b]=g;
    }
        
        
        
    
  
        
    
    


    return 0;
}
