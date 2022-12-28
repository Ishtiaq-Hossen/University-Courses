//-----constractor initializer------
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        const int admissionFee;
        const int examFee;
        int id;
        Student(int x,int y,int z)
        :admissionFee(x),examFee(y)//constractor initializer
        {
            printf("Admission Fee: %d\n",admissionFee);
            printf("Exam Fee: %d\n",examFee);
            id=z;
            printf("ID = %d\n",id);
        }
};
int main()
{
    Student s1(15000,12000,101);
    return 0;
}