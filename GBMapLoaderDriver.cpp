#pragma once
#include <stdio.h>
#include <string>
#include <utility>
#include <vector>
#include <set>
#include <iostream>
#include "GBMaps.h"
#inlcude "GBMapLoader.h"
#include <sstream>
#include <algorithm>
#include <fstream>
#include <fstream>
#include <regex>

using namespace std;

int main()
{
    int numOfPlayers;
    std::vector<Map::Node*> initTile;

    cout << "Test 1:\n";
    //Checking if a VGMap is valid or invalid
    if (fexists("validMap.txt"))
    {
        numOfPlayers = checkValidPlayerNum("validMap.txt");
        initTile = checkValidTile("validMap.txt");
        cout << "The Number of Players is : " << numOfPlayers <<"\n";
        if (numOfPlayers == 2 || numOfPlayers == 3 || numOfPlayers == 4)
        {
            cout << "A VGMapLoader Object with a VGMap Object will be created\n\n";
            VGMapLoader a = VGMapLoader(row, column);
        }
    }

    cout << "Test 2\n";
    //Checking if a VGMap is valid or invalid
    if (fexists("invalidMap.txt"))
    {
        numOfPlayers = checkValidPlayerNum("invalidMap.txt");
        initTile = checkValidTile("invalidMap.txt");
        if (numOfPlayers == 0)
        {
            cout << "A VGMapLoader Object will not be created\n";
        }
    }
    return 0;
}


