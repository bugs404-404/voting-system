#include <iostream>
using namespace std;

int bjp=0, congress=0, aap=0, bsp=0;
void electionResult()
{
    int wonByVote;
    if (bjp>congress&&bjp>aap&&bjp>bsp)
    {
        cout<<"\n***************************************";
        cout<<"\n      BJP won the election   \n"<<endl;
        cout<<"    Total vote of BJP : "<<bjp<<endl;
        wonByVote=bjp-congress;
        cout<<"\n   BJP won by "<<wonByVote<<" votes to Congress"<<endl;
        wonByVote=bjp-aap;
        cout<<"   BJP won by "<<wonByVote<<" votes to APP"<<endl;
        wonByVote=bjp-bsp;
        cout<<"   BJP won by "<<wonByVote<<" votes to BSP"<<endl;
        cout<<"**************************************\n";
    }