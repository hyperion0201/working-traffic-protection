#ifndef CARDMANAGEMENT
#define CARDMANAGEMENT
#define maxID 10
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct ParkingCard
{
	char ID[maxID];
};
ParkingCard* InitList(int n);
int AddingTraffic(ParkingCard* *parkingList, int &n, const char* id);
int RemovingTraffic(ParkingCard* *parkingList, int &n, int location);
int FindingLocation(ParkingCard* parkingList, int n, const char* id);
void ExportingList(ParkingCard* parkingList, int n);
void SavingList();
#endif // !CARDMANAGEMENT
