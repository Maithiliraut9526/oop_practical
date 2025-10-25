#include<iostream>
using namespace std;

class Person{
public:
    void info(){
        cout<<"I am a person"<<endl;
    }
};

class Student : virtual public Person
{
    public:
        void Study(){
            cout<<"I am a student"<<endl;
        }
};

class Teacher : virtual public Person
{
    public:
        void teach(){
            cout<<"I am a teacher"<<endl;
        }
};

class TeachingAssistant : public Student , public Teacher {
    public:
        void Assist(){
            cout<<"I am a teaching assistant";
        }
};

int main()
{
    TeachingAssistant to;
    to.info();
    to.Study();
    to.teach();
    to.Assist();

    return 0;
}