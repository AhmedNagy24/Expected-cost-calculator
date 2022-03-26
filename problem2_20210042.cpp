/*
FCAI – Programming 1 – 2022 - Assignment 2
Program Name: problem 2.cpp
Program Description: the program gauges the expected cost of an item in a specified number of years.
Last Modification Date: 23/3/2022
Author1 and ID and Group: Ahmed Nagy Ramadan Darwish. ID:20210042. group:A - S 26
Purpose: calculate the expected price using inflation rate
*/
#include <iostream>
using namespace std;

int main(){
    //cost is the initial price, rate is the inflation rate, result is the final price, and nyears is the number of years
    float cost, rate, result;
    int nyears;

    //taking input from the user
    cout<<"please enter cost of the item"<<endl;
    cin>>cost;
    cout<<"please enter inflation rate in percentage"<<endl;
    cin>>rate;
    cout<<"please enter number of years from now"<<endl;
    cin>>nyears;

    //looping to calculate the expected change in price after number of years
    while (nyears > 0){
        result = ((rate/100) * cost) + cost;
        cost = result;
        nyears = nyears - 1;
    }

    //displaying the output to the user
    cout<<"expected cost= "<<result<<endl;
}
