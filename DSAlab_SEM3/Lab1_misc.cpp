#include <iostream>

using namespace std;
struct newplayer{
    char name[100];
    int age;
};

class badminton{
    public:
    int player1_score;
    int player2_score;
    
    void winner(int player1_score,int player2_score){
        if(player1_score==21&&player2_score<player1_score){
            cout<<"Player 1 is winner";}
        else if(player2_score==21&&player1_score<player2_score){
            cout<<"Player 2 is winner:";
        }
        }

};

int main()
{
    badminton player1,player2;
    int sc1,sc2;
    newplayer kaushal=
    {
        "kaushal",
        19
    };
    newplayer pranit=
    {
        "pranit",
        19
    };
    cout<<"Name of player 1:"<<kaushal.name<<endl;
    cout<<"Age of player 1:"<<kaushal.age<<endl;
    cout<<"Name of player 2:"<<pranit.name<<endl;
    cout<<"Age of player 2:"<<pranit.age<<endl;
    
    cout<<"Enter the score of "<<kaushal.name<<":";
    cin>>sc1;
    cout<<"Enter the score of "<<pranit.name<<":";
    cin>>sc2;
    player1.player1_score=sc1;
    player2.player2_score=sc2;
    badminton win;
    win.winner(sc1,sc2);
    
    

    return 0;
}
