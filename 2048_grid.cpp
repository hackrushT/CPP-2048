#include<iostream>
#include<vector>
#include<stdlib.h>


/* for displaying numbers in the grid */
#define disp1(x)    cout << "   " << x << "  "
#define disp2(x)    cout << "  " << x << "  "
#define disp3(x)    cout << "  " << x << " "
#define disp4(x)    cout << " " << x << " "
#define dispBlank() cout << "      "

using namespace std;

void display(unsigned int x)
{
    if (x == 0)
        dispBlank();
    else if (x < 10)
        disp1(x);
    else if (x < 100)
        disp2(x);
    else if (x < 1000)
        disp3(x);
    else if (x < 10000)
        disp4(x);
    cout<<"|";

}

int main()
{

    int w=0;
    srand (time(NULL));
    int x;
    int y;
    int z;
    char in;
    int chan = 0;



    vector<int> v1;

    vector<int> v2;

    vector<int> v3;


    for(int i=0;i<17;i++)
    {
        v1.push_back(0);
        v2.push_back(0);
        v3.push_back(0);
    }

    for(int i=1;i<17;i++)
    {
        if(v1[i]==0)
            v2[i]=1;
        else
            v2[i]=0;
    }
    w=2;

    while(w!=0)
    {
        x=rand();
        y=x%16+1;
        if(v2[y]==1)
        {
            v1[y]=2;
            w--;
        }
    }




    while(1)
    {


        cout<<"-----------------------------\n|      |      |      |      |\n|";

        for(int i=1;i<=4;i++)
        {
            display(v1[i]);
        }


        cout<<"\n|      |      |      |      |\n-----------------------------\n|      |      |      |      |\n|";

        for(int i=5;i<=8;i++)
        {
            display(v1[i]);
        }



        cout<<"\n|      |      |      |      |\n-----------------------------\n|      |      |      |      |\n|";

        for(int i=9;i<=12;i++)
        {
            display(v1[i]);
        }


        cout<<"\n|      |      |      |      |\n-----------------------------\n|      |      |      |      |\n|";

        for(int i=13;i<=16;i++)
        {
            display(v1[i]);
        }


        cout<<"\n|      |      |      |      |\n-----------------------------\n\n";





        cout<<"INPUT: ";
        cin>>in;

    }


    return 0;

}
