#include <iostream>


using namespace std;
struct students{
    int rollno;
    string name;
    int marks[4];
    int totalMarks;
    
};
class Studentdemo{
    private:
    students stud[3];
    public:
    void setdata();
    int totalmrks();
    void displayDetails();
    
};


void Studentdemo::setdata(){
    for(int t=0;t<3;t++){
        cout<<"Enter the name of student: "<<"\n";
        cin>>stud[t].name;
        cout<<"Enter the roll no: "<<"\n";
        cin>>stud[t].rollno;
        for(int i=0;i<4;i++){
            cout<<"Enter the marks of subject "<<i+1<<"\n";
            cin>>stud[t].marks[i];
            
        }
        
    }
}

int Studentdemo::totalmrks(){
    for(int j=0;j<3;j++){
        for(int d=0;d<4;d++){
            int ttlmrks=0;
            ttlmrks+=stud[j].marks[d];
            return ttlmrks;
            
        }
    
        
    }
    
} 
void Studentdemo::displayDetails(){
    for(int h;h<3;h++){
        cout<<" name of student: "<<"\n"<<stud[h].name<<"\n";
        cout<<" rollno of student: "<<"\n"<<stud[h].rollno<<"\n";
        for(int k=0;k<4;k++){
            cout<<"marks in subject "<<"\n"<<stud[h].marks[k]<<"\n";
            
        }
        cout<<"Total marks of student: "<<"\n"<<totalmrks()<<"\n";
        
    }
}


int main()
{
    cout<<"Hello World"<<"\n";
    Studentdemo std1;
    std1.setdata();
    std1.totalmrks();
    std1.displayDetails();
    return 0;
    
}
