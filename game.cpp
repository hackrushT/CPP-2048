#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;
void display(int x)
{
    if(x<10&&x!=0)
        	cout<<"  "<<x<<" ";
        else if(x>10&&x<100&&x!=0)
        	cout<<" "<<x<<" ";
        else if(x>100&&x<1000&&x!=0)
        	cout<<x<<" ";
        else if(x>1000&&x<3000&&x!=0)
        	cout<<x;
        else if(x==0)
        cout<<"    ";
        else
        	cout<<x;
   		cout<<" | ";


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



    vector<int>v1;

    vector<int>v2;

    vector<int>v3;


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


        cout<<"\n\n\n\n-----------------------------\n|      |      |      |      |\n| ";

        for(int i=1;i<=16;i++)
        display(v1[i]);
		/*if(v1[1]<10&&v1[1]!=0)
        	cout<<"  "<<v1[1]<<" ";
        else if(v1[1]>10&&v1[1]<100&&v1[1]!=0)
        	cout<<" "<<v1[1]<<" ";
        else if(v1[1]>100&&v1[1]<1000&&v1[1]!=0)
        	cout<<v1[1]<<" ";
        else if(v1[1]>1000&&v1[1]<3000&&v1[1]!=0)
        	cout<<v1[1];
        else if(v1[1]==0)
        cout<<"    ";
        else
        	cout<<v1[1];
   		cout<<" | ";


        if(v1[2]<10&&v1[2]!=0)
        cout<<"  "<<v1[2]<<" ";
        else if(v1[2]>10&&v1[2]<100&&v1[2]!=0)
        cout<<" "<<v1[2]<<" ";
        else if(v1[2]>100&&v1[2]<1000&&v1[2]!=0)
        cout<<v1[2]<<" ";
        else if(v1[2]>1000&&v1[2]<3000&&v1[2]!=0)
        cout<<v1[2];
        else if(v1[1]==0)
        cout<<"    ";
    	else
        	cout<<v1[2];
    	cout<<" | ";


    	if(v1[3]<10&&v1[3]!=0)
        	cout<<"  "<<v1[3]<<" ";
        else if(v1[3]>10&&v1[3]<100&&v1[3]!=0)
        	cout<<" "<<v1[3]<<" ";
        else if(v1[3]>100&&v1[3]<1000&&v1[3]!=0)
        	cout<<v1[3]<<" ";
        else if(v1[3]>1000&&v1[3]<3000&&v1[3]!=0)
        	cout<<v1[3];
        else if(v1[1]==0)
        cout<<"    ";
        else
   		  	cout<<v1[3];
    	cout<<" | ";


     if(v1[4]<10&&v1[4]!=0)
        cout<<"  "<<v1[4]<<" ";
    else if(v1[4]>10&&v1[4]<100&&v1[4]!=0)
        cout<<" "<<v1[4]<<" ";
    else if(v1[4]>100&&v1[4]<1000&&v1[4]!=0)
        cout<<v1[4]<<" ";
    else if(v1[4]>1000&&v1[4]<3000&&v1[4]!=0)
        cout<<v1[4];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[4];*/
    cout<<" | \n|      |      |      |      |\n-----------------------------\n|      |      |      |      |\n| ";



	/*if(v1[5]<10&&v1[5]!=0)
        cout<<"  "<<v1[5]<<" ";
    else if(v1[5]>10&&v1[5]<100&&v1[5]!=0)
        cout<<" "<<v1[5]<<" ";
    else if(v1[5]>100&&v1[5]<1000&&v1[5]!=0)
        cout<<v1[5]<<" ";
    else if(v1[5]>1000&&v1[5]<3000&&v1[5]!=0)
        cout<<v1[5];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[5];
    cout<<" | ";


    if(v1[6]<10&&v1[6]!=0)
        cout<<"  "<<v1[6]<<" ";
    else if(v1[6]>10&&v1[6]<100&&v1[6]!=0)
        cout<<" "<<v1[6]<<" ";
     else if(v1[6]>100&&v1[6]<1000&&v1[6]!=0)
        cout<<v1[6]<<" ";
     else if(v1[6]>1000&&v1[6]<3000&&v1[6]!=0)
        cout<<v1[6];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[6];
    cout<<" | ";


    if(v1[7]<10&&v1[7]!=0)
        cout<<"  "<<v1[7]<<" ";
    else if(v1[7]>10&&v1[7]<100&&v1[7]!=0)
        cout<<" "<<v1[7]<<" ";
    else if(v1[7]>100&&v1[7]<1000&&v1[7]!=0)
        cout<<v1[7]<<" ";
    else if(v1[7]>1000&&v1[7]<3000&&v1[7]!=0)
        cout<<v1[7];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[7];
    cout<<" | ";


	if(v1[8]<10&&v1[8]!=0)
        cout<<"  "<<v1[8]<<" ";
    else if(v1[8]>10&&v1[8]<100&&v1[8]!=0)
        cout<<" "<<v1[8]<<" ";
    else if(v1[8]>100&&v1[8]<1000&&v1[8]!=0)
        cout<<v1[8]<<" ";
    else if(v1[8]>1000&&v1[8]<3000&&v1[8]!=0)
        cout<<v1[8];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[8];*/
    cout<<" |\n|      |      |      |      |\n-----------------------------\n|      |      |      |      |\n| ";


	/*if(v1[9]<10&&v1[9]!=0)
        cout<<"  "<<v1[9]<<" ";
    else if(v1[9]>10&&v1[9]<100&&v1[9]!=0)
        cout<<" "<<v1[9]<<" ";
    else if(v1[9]>100&&v1[9]<1000&&v1[9]!=0)
        cout<<v1[9]<<" ";
    else if(v1[9]>1000&&v1[9]<3000&&v1[9]!=0)
        cout<<v1[9];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[9];
    cout<<" | ";


    if(v1[10]<10&&v1[10]!=0)
        cout<<"  "<<v1[10]<<" ";
    else if(v1[10]>10&&v1[10]<100&&v1[10]!=0)
        cout<<" "<<v1[10]<<" ";
     else if(v1[10]>100&&v1[10]<1000&&v1[10]!=0)
        cout<<v1[10]<<" ";
     else if(v1[10]>1000&&v1[10]<3000&&v1[10]!=0)
        cout<<v1[10];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[10];
    cout<<" | ";


    if(v1[11]<10&&v1[11]!=0)
        cout<<"  "<<v1[11]<<" ";
    else if(v1[11]>10&&v1[11]<100&&v1[11]!=0)
        cout<<" "<<v1[11]<<" ";
    else if(v1[11]>100&&v1[11]<1000&&v1[11]!=0)
        cout<<v1[11]<<" ";
    else if(v1[11]>1000&&v1[11]<3000&&v1[11]!=0)
        cout<<v1[11];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[11];
    cout<<" | ";


    if(v1[12]<10&&v1[12]!=0)
        cout<<"  "<<v1[12]<<" ";
    else if(v1[12]>10&&v1[12]<100&&v1[12]!=0)
        cout<<" "<<v1[12]<<" ";
     else if(v1[12]>100&&v1[10]<1000&&v1[12]!=0)
        cout<<v1[12]<<" ";
     else if(v1[12]>1000&&v1[12]<3000&&v1[12]!=0)
        cout<<v1[12];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[12];*/
    cout<<" |\n|      |      |      |      |\n-----------------------------\n|      |      |      |      |\n| ";


	/*if(v1[13]<10&&v1[13]!=0)
        cout<<"  "<<v1[13]<<" ";
    else if(v1[13]>10&&v1[13]<100&&v1[13]!=0)
        cout<<" "<<v1[13]<<" ";
    else if(v1[13]>100&&v1[13]<1000&&v1[13]!=0)
        cout<<v1[13]<<" ";
    else if(v1[13]>1000&&v1[13]<3000&&v1[13]!=0)
        cout<<v1[13];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[13];
    cout<<" | ";


    if(v1[14]<10&&v1[14]!=0)
        cout<<"  "<<v1[14]<<" ";
    else if(v1[14]>10&&v1[14]<100&&v1[14]!=0)
        cout<<" "<<v1[14]<<" ";
    else if(v1[14]>100&&v1[14]<1000&&v1[14]!=0)
        cout<<v1[14]<<" ";
    else if(v1[14]>1000&&v1[14]<3000&&v1[14]!=0)
        cout<<v1[14];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[14];
    cout<<" | ";


    if(v1[15]<10&&v1[15]!=0)
        cout<<"  "<<v1[15]<<" ";
    else if(v1[15]>10&&v1[15]<100&&v1[15]!=0)
        cout<<" "<<v1[15]<<" ";
     else if(v1[15]>100&&v1[15]<1000&&v1[15]!=0)
        cout<<v1[15]<<" ";
     else if(v1[15]>1000&&v1[15]<3000&&v1[15]!=0)
        cout<<v1[15];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[15];
    cout<<" | ";


    if(v1[16]<10&&v1[16]!=0)
        cout<<"  "<<v1[16]<<" ";
    else if(v1[16]>10&&v1[16]<100&&v1[16]!=0)
        cout<<" "<<v1[16]<<" ";
    else if(v1[16]>100&&v1[16]<1000&&v1[16]!=0)
        cout<<v1[16]<<" ";
    else if(v1[16]>1000&&v1[16]<3000&&v1[16]!=0)
        cout<<v1[16];
    else if(v1[1]==0)
        cout<<"    ";
    else
        cout<<v1[16];*/
    cout<<" |\n|      |      |      |      |\n-----------------------------\n\n";



    cout<<"INPUT: ";
    cin>>in;

    }


    return 0;

}


