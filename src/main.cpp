#include <iostream>
#include <fstream>
#include <vector>
// DRIVE AND TEST CLASSES HERE
#include"../include/BookingSystem.h"

using namespace std;

// Global vector to store object instances


class Requirement 
{
private:
    int Id;
    int budget;
    string prefHotelType;
    vector<int>prefGames;
public:
    Requirement(int i, int b) 
    {
        Id = i;
        budget = b;
    }
    Requirement()
    {
        Id = 0;
        budget = 0;
    }
    ~Requirement() 
    {
        delete prefGames;
    }

    void setRequirements(int b, string h, int g[])
    {
        budget = b;
        prefHotelType = h;
        int l = sizeof(g);
        prefGames = new int[l];
    }

    void getRequirements(int id)
    {
        
    }
}


int main() 
{

}