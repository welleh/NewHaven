//
//  Player.h
//  Player
//
//  Created by Arianne Chau on 2020-02-11.
//  Copyright © 2020 Arianne Chau. All rights reserved.
//

#pragma once

#include <vector>
#include "VGMap.h"
#include "Resources.h"
#include "GBMaps.h"
#include "Part6.h"
#include <list>
#include "GameObservers.h"


using namespace std;

class GameObserver;

class Player {
private:
    int* id;
    static int* currentId;
    VGMap* vb;
    vector<Building*>* buildings;
    vector<HarvestTile>* tiles;
    Hand* hand;
    bool* shipmentTileUsed;
   
    vector<GameObserver*>* _observersTile;
    vector<GameObserver*>* _observersBuild;

    bool placeShipmentTile(int row, int col, Map* board, DeckHarvestTile deck);

public:
    Player();
    ~Player();
    bool placeHarvestTile(int noTile, int row, int col, Map* board, DeckHarvestTile deck, int topLeftCorner);
    void drawBuilding(DeckBuilding* deckBuilding);
    void drawHarvestTile(DeckHarvestTile deck, int no);
    void resourceTracker();
    void calculateResources(Map board, bool itIsTheShipmentTile);
    bool buildVillage(int buildingIndex, int row, int col);
    void displayState();
    void resetResourceMarkers();
    void turnShipmentTile(Map* board);
    //getters
    vector<Building*>* getBuildings() { return buildings; };
    vector<HarvestTile>* getTiles() { return tiles; };
     Hand* getHand() { return hand;  };
     VGMap* getVillageBoard() { return vb; };
     bool getShipmentTileUsed() { return *shipmentTileUsed; };
     int getID() { return *id; };
     //setters
     void setVillageBoard(VGMap* board) { vb = board; };
     void setID(int* i) { id = i; };
     void setHand(Hand* newHand) { hand = newHand; };

     //Subject
     virtual void attach(GameObserver* o, bool tileList);
     virtual void detach(GameObserver* o, bool tileList);
     virtual void notify(bool tileList);
    
};



