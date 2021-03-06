#pragma once

#include <vector>
#include <iostream>
#include "GBMaps.h"
#include "VGMap.h"
#include "GBMapLoader.h"
#include "VGMapLoader.h"
#include "Player.h"
#include "Resources.h"
#include "Part6.h"

using namespace std;

void placeTile(Player* activePlayer, Map* board, DeckHarvestTile* deck);

void buildPlayerVillage(Player* player);
bool enoughResources(Player* player, int index);


void endOfTurn(Player* activePlayer, vector<Building*>* buildingsOnBoard, DeckBuilding* deck, vector<Player*>* players, Map* board);
void endTurnDrawBuildings(Player* activePlayer, vector<Building*>* buildingsOnBoard, DeckBuilding* deck);
void endTurnDrawBuildingFromBoard(Player* activePlayer, vector<Building*>* buildingsOnBoard);
void endTurnResetResourceMarkers(vector<Player*>* players);
void endTurnDrawNewBuildingsToBoard(vector<Building*>* buildingsOnBoard, DeckBuilding* deck);

void turnSequence(vector<Player*>* players, int nbPlayers);
void transferResourceMarkers(vector<Player*>* players, int i);
int checkFirstPlayer(vector<Player*>* players, int nbPlayers);
void shareWealth(vector<Player*>* players, int nbPlayers, int index);

void buildingSequence(vector<Player*>* players, int nbPlayers, int index);
bool resourcesEmpty(Player* activePlayer);

void oneTurn(int indexActivePlayer, Map* board, DeckHarvestTile* deckTiles, vector<Player*>* players, int nbPlayers, vector<Building*>* buildingsOnBoard, DeckBuilding* deckBuildings);