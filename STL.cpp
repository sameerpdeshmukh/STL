// STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <array>

using namespace std;

int main()
{
    std::cout << "Learning STL!\n";

    //Pair
    pair<int, string> employeedata;              //Define Pair

    employeedata = make_pair(1, "Sameer");      // Create Pair

    cout << "RollNo :" << employeedata.first<<endl;
    cout << "Emp Name :" << employeedata.second <<endl;

    //Array 
    array<int, 5> arr;  //All five garbage values.

    array<int, 5> arr1 = { 1 };  //1,0,0,0,0

    arr.fill(10); //10,10,10,10,10

    cout << arr.at(0);

    for (auto i : arr)
        cout << i;


    getchar();

}

