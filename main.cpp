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
    else if (congress>aap&&congress>bsp)
    {
        cout<<"\n***************************************";
        cout<<"\n      Congress won the election   \n\n";
        cout<<"\n    Total vote of Congress : "<<congress<<endl;
        wonByVote=congress-bjp;
        cout<<"   Congress won by "<<wonByVote<<" votes to BJP\n";
        wonByVote=congress-aap;
        cout<<"   Congress won by "<<wonByVote<<" votes to AAP\n";
        wonByVote=congress-bsp;
        cout<<"   Congress won by "<<wonByVote<<" votes to BSP\n";
        cout<<"**************************************\n";
    }
    else if (aap>bsp)
    {