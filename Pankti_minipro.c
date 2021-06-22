#include<iostream>
using namespace std;
class  course
{
    int n;
    char m,o;
    public:
    void info()
    {
        cout<<"\t\t\t\t\t\tUNIVERSITY COURSE DETAIL"<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\tMade by:\n\t\t\t\t\t\t1.Pankti Shah \n\t\t\t\t\t\t2.Nidhi Shah \n\t\t\t\t\t\t3.Archit Rajbhar"<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\tCHARUSAT UNIVERSITY\n\t\t\t\t\t\tStudents of CSPIT EC\n\t\t\t\t\t\tSEMESTER-2  "<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
    void show1()
        {
            cout<<endl<<"\t\t\t\t1.Course overview"<<endl;
            cout<<endl<<"\t\t\t\t2.Course outline"<<endl;
            cout<<endl<<"\t\t\t\t3.Course Faculties"<<endl;
            cout<<endl<<"\t\t\t\tEnter a choice from a-c:";
            cin>>m;
            switch(m)
            {
            case 'a':
                cout<<endl<<endl<<"\t\t*****COURSE OVERVIEW*****";
                cout<<endl<<"Introduce basic terms and units related to electrical engineering.\nUnderstand the basic concepts in the field of electrical and electronics engineering.\nFocus on the fundamentals of electrostatic and electromagnetism.\nAnalyze the series and ac system."<<endl;
                break;
            case 'b':
                cout<<endl<<endl<<"\t\t*****COURSE OUTLINE*****";
                cout<<endl<<"1.Basic of electronics terms\n2.Electrical circuit analysis\n3.Electrostatic\n4.Electromagnetism\n5.Ac and dc fundamentals"<<endl;
                break;
            case 'c':
                cout<<endl<<endl<<"\t\t*****COURSE FACULTIES*****";
                cout<<endl<<"Arpan Desai"<<endl;
            }
        }
            void show2()
            {
            cout<<endl<<"\t\t\t\t1.Course overview"<<endl;
            cout<<endl<<"\t\t\t\t2.Course outline"<<endl;
            cout<<endl<<"\t\t\t\t3.Course Faculties"<<endl;
            cout<<endl<<"\t\t\t\tEnter a choice from a-c:";
            cin>>o;
            switch(o)
            {
            case 'a':
                cout<<endl<<endl<<"\t\t*****COURSE OVERVIEW*****";
                cout<<endl<<"Introduce basic terms and units related to electrical engineering.\nUnderstand the basic concepts in the field of electrical and electronics engineering.\nFocus on the fundamentals of electrostatic and electromagnetism.\nAnalyze the series and ac system."<<endl;
                break;
            case 'b':
                cout<<endl<<endl<<"\t\t*****COURSE OUTLINE*****";
                cout<<endl<<"1.Basic of electronics terms\n2.Electrical circuit analysis\n3.Electrostatic\n4.Electromagnetism\n5.Ac and dc fundamentals"<<endl;
                break;
            case 'c':
                cout<<endl<<endl<<"\t\t*****COURSE FACULTIES*****";
                cout<<endl<<"Arpan Desai"<<endl;
                break;
            }

            }
    void print()
    {
    cout<<"\t\t\t\t\t\tCOURSE SELECTION"<<endl;
    cout<<"\t\t\t\t\t\t================"<<endl;
    cout<<"\t\t\t\t\t\tEngineering courses"<<endl;
    cout<<"\t\t\t\t\t\t==================="<<endl;
    cout<<"\t\t\t\t\t1.Basics of electrical and electronics "<<endl;
    cout<<"\t\t\t\t\t2.Beginning to Python"<<endl;
    cout<<"\t\t\t\t\t3.Introduction to Data structures and Algorithms"<<endl;
    cout<<"\t\t\t\t\t4.Digital marketing "<<endl;
    cout<<"\t\t\t\t\t5.Fashion Designing"<<endl;
    cout<<"\t\t\t\t\t6.Multi-variable function"<<endl<<endl;
    }
    void show()
    {
        show:
        cout<<"\t\t\t\tEnter a proper choice from 1-6 :";
        cin>>n;
        switch(n)
    {
    case 1:
        cout<<"\t\t\t\tWelcome to  course of Basics of electrical and electronics "<<endl;
        show1();
        break;
    case 2:
        cout<<"\t\t\t\tWelcome to course of Beginning to Python"<<endl;
        show2();
        break;
    case 3:
        cout<<"\t\t\t\tWelcome to course of Introduction to Data structures and Algorithms"<<endl;
        break;
    case 4:
        cout<<"\t\t\t\tWelcome to course of Digital marketing"<<endl;
        break;
    case 5:
        cout<<"\t\t\t\tWelcome to course of Fashion Designing"<<endl;
        break;
    case 6:
        cout<<"\t\t\t\tWelcome to course of Multivariable function"<<endl;
        break;
    default:
        cout<<"Enter the correct choice"<<endl;
          goto show;
        break;
    }
    }
};
int main()
{
    course c1,c2,c3,c4;
    c1.info();
    c2.print();
    c3.show();
    c4.show1();
    return 0;
}
