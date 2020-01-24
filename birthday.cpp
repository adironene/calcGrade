#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool asked = false;
double pointsOfExam, examWeight;
void calc()
{
    double gradeNow, addPercent;
    if (asked)
    {
        cout << ("\ncool, now I just need: \nthe student's grade\nhow many percent you want to add");
        cout << ("\nseparated by a space");
        cout << ("\nexample :60 0\n");
        cout << ("\nto exit anytime, press control z\n");
        cin >> gradeNow >> addPercent;
    }
    if (!asked)
    {
        cout << ("\nwelcome. I will calculate how much points you would put on a student's final exam.\ninput the following numers separated by a space: ");
        cout << ("\nstudent's grade now");
        cout << ("\nhow many percent you want to add");
        cout << ("\ntotal points of final exam");
        cout << ("\nhow much does the final weigh");
        cout << ("\nexample : 95.4 12 106 20\n");
        cin >> gradeNow >> addPercent >> pointsOfExam >> examWeight;
        asked = true;
    }

    double desiredGrade = {gradeNow + addPercent};
    double gradeOutOf80 = {((100 - examWeight) / 100) * gradeNow};
    double percentNeed = desiredGrade - gradeOutOf80;
    double percentFinal = percentNeed / examWeight;
    double score = percentFinal * pointsOfExam;
    cout << "\nscore is :\n"
         << score;
    calc();
}
int main()
{
    calc();
    system("pause");
    return 0;
}
