//Student Name: Kareem Mahmoud

//Teacher: Dr.Tyson McMillan

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;


int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];


    cout << "Enter all temperature for a week of first city and then second city. \n";





//array for city 1 and city 2 
//as required they have been named 
int NewYorkCity [WEEK];
int Miami [WEEK];
//First run the loop to store the data for the two cities
//new york city
cout<<"=======Expanded program input values======="<<endl;
for(int j = 0; j < WEEK; ++j)
    {
        cout << "New York City Day "<< j + 1 << " Temperature: ";
            cin >> NewYorkCity[j];
    }
//Miami city
for(int j = 0; j < WEEK; ++j)
    {
        cout << "Miami Day "<< j + 1 << " Temperature: ";
            cin >> Miami[j];
    }

//Update the temperature array with these two cities
for (int i=0;i<CITY;i++)
{

    for (int j=0;j<WEEK;j++)
    {
        if (i==0)
        {
        temperature[i][j] = NewYorkCity[j];
        }
        else if (i==1)
        {
           temperature[i][j] = Miami [j] ;
        }
    }
}

//print the temperature array
cout<<"------Expanded program output-----"<<endl;
for (int i=0;i<CITY;i++)
{
    for (int j=0;j<WEEK;j++)
    {
        if (i==0)
        {
        cout<<"New York City Day "<< j+1<< " = "<< temperature[i][j]<<endl; 
        }
        else if (i==1)
        {
         cout<<"Miami Day "<< j+1<< " = "<< temperature[i][j]<<endl; 
        }
    }
}



    return 0;
}