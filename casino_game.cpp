#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;


int main()
{
    srand(time(0));

    int num=(rand()%10)+1;
    int guessnum;
    int money;
    int bet;
    string choice;


    cout<<"Welcome to casino !"<<endl;
    cout<<endl;
    cout<<"Enter the amount of money you have :"<<endl;
cout<<endl;
    cin>>money;


    cout<<"You have to guess a number between '1 to 10' "<<endl<<endl
        <<"Rules :"<<endl<<endl
        <<"1. You have to enter the amount of money you are going to bet "<<endl<<endl

        <<"2. If you guessed the right number ,you will receive the double the amount of bet you placed "<<endl<<endl
        <<"3. If you guessed the wrong number , the bet you have placed will be reduced from your money! "<<endl<<endl
        <<"4. You will be unable to play the game when you run out of money "<<endl<<endl
        <<"Wish you good luck !!"<<endl<<endl;

    do
    {
        cout<<"Enter the amount of bet you want to place : "<<endl;
        cin>>bet;

        if (bet>money)
        {
            cout<<"You can't bet higher than the money you have "<<endl;

            cout<<"Please enter the appropriate bet"<<endl;
            cin>>bet;

        }

        cout<<"Enter the number you have guessed : "<<endl;

        cin>>guessnum;



        if(guessnum==num)
        {
            cout<<"You have guessed the number , congratulations !!! "<<endl<<endl
                <<"your bet has been doubled and added to your money"<<endl;

            int doub=bet*2;
            int prize=doub+money;
            money=prize;

            cout<<"The amount of money you have now is : "<<money<<endl;


            cout<<"Do you still want to continue ?"<<endl;

            cin>>choice;
        }

        if(guessnum!=num)
        {
            cout<<"You have guessed the  wrong number  "<<endl
                <<"The bet you placed is deduced from your money"<<endl;


            int reduce=money-bet;

            money=reduce;

            cout<<"The amount of money you have now is : "<<reduce<<endl;
            cout<<endl;

            if(money!=0)
            {
                cout<<"Do you still want to continue ?"<<endl;

                cin>>choice;
            }


        }

        if(money==0)
        {
            cout<<endl;
            cout<<"You cannot play further because you don't have enough money "<<endl;

            break;
        }

        if(choice=="no")
        {
            break;
        }
    }



    while(money!=0);


    return 0;
}
