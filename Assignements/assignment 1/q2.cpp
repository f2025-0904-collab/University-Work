#include <iostream>//library is used for input,output operations.
#include <iomanip>//library used to contol format operator.
using namespace std;
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total;
    //six integers are declared.
    total=500;
    //total numbers are set 500.
    int obtained;
    float percentage;
    string grade;
    //three variables further declared for obtained marks,percentage and grade.

    cout<<"Enter marks of five subjects:";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;

    //input marks of subjects.
    if(sub1>100 || sub2>100 || sub3>100 ||sub4>100||sub5>100)
    cout<<"invalid input.";
//condition if the input is invalid.
else
{
    obtained=sub1+sub2+sub3+sub4+sub5;
    percentage=obtained/5;
    //calculated obtained marks and percentage.

    if(percentage>=90)
     grade="A+";
    else if(percentage>=80)
     grade="A";
    else if(percentage>=70)
     grade="B";
    else if(percentage>=60)
     grade="C";
    else if(percentage>=50)
     grade="D";
    else
    
     grade="F";
     //conditions for assigning grade.
    
    cout<<fixed<<setprecision(5);
    cout<<setw(15)<<left<<"subject1"<<setw(15)<<left<<"subject2"<<setw(15)<<left<<"subject3"<<setw(15)<<left<<"subject4"<<setw(15)<<left<<"subject5"<<endl;
    cout<<setw(15)<<left<<sub1<<setw(15)<<left<<sub2<<setw(15)<<left<<sub3<<setw(15)<<left<<sub4<<setw(15)<<left<<sub5<<endl;
    cout<<setw(15)<<left<<"total"<<setw(15)<<left<<"obtained"<<setw(15)<<left<<"percentage"<<setw(15)<<left<<"grade"<<endl;
    cout<<setw(15)<<left<<total<<setw(15)<<left<<obtained<<setw(15)<<left<<percentage<<setw(15)<<left<<grade<<endl;

    // for making table.

    
    return 0;

}
}