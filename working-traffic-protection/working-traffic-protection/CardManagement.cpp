#include "CardManagement.h"
ParkingCard* InitList(int n) {
	ParkingCard* list = new ParkingCard[n];
	return list;
}
 int AddingTraffic(ParkingCard* *parkingList, int &n, const char* id) {
	 ParkingCard* newList = (ParkingCard*)malloc(n * sizeof(ParkingCard));
	 for (int i = 0; i < n; i++) {
		 strcpy(newList[i].ID, parkingList[i]->ID);
	}
	 n++;
	  newList = (ParkingCard*)realloc(newList, n * sizeof(ParkingCard));
	 strcpy((newList[n-1].ID), id);
	 free(*parkingList); // flush array to make it empty before copy elements
	 *parkingList = newList;
	
	 if (*parkingList == NULL) return 0;
	 return 1;
}
 int RemovingTraffic(ParkingCard* *parkingList, int &n, int location) {
		ParkingCard* newList = (ParkingCard*)malloc()
	 return 0;
 }
 int FindingLocation(ParkingCard* parkingList, int n,  const char* id) {
	 int result= -1;
	 // tracking location
	 for (int i = 0; i < n; i++) {
		 if (strcmp(id, parkingList[i].ID) == 0) {
			 result = i;
			 return result;
		 }
	 }
	 return -1;
 }