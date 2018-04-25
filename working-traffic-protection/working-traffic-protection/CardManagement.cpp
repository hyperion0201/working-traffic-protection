#include "CardManagement.h"
ParkingCard* InitList(int n) {
	ParkingCard* list = new ParkingCard[n];
	return list;
}
 int AddingTraffic(ParkingCard* *parkingList, int &n,  char id[]) {
	 ParkingCard* newList = (ParkingCard*)malloc(n * sizeof(ParkingCard));
	 for (int i = 0; i < n; i++) {
		 strcpy(newList[i].ID, parkingList[i]->ID);
	}
	 n++;
	  newList = (ParkingCard*)realloc(newList, n * sizeof(ParkingCard));
	 strcpy((newList[n-1].ID), id);
	  // flush array to make it empty before copy elements
	 *parkingList = newList;
	
	 if (*parkingList == NULL) return 0;
	 return 1;
}
 int RemovingTraffic(ParkingCard* *parkingList, int &n, int location) {
	 ParkingCard* newList = (ParkingCard*)malloc((n - 1) * sizeof(ParkingCard));
	 memmove(newList, *parkingList, (location + 1) * sizeof(ParkingCard)); // copy everything before the location
	 memmove(newList + location, ((*parkingList) + (location + 1)), (n - location) * sizeof(ParkingCard)); // copy everything after the location
	 free(*parkingList); // flush all elements in original array for receiving new elements.
	 *parkingList = newList;
	 if (*parkingList == NULL) return 0;
	 return 1;
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
 void ExportingList(ParkingCard* parkingList, int n)
 {
	 printf("================= DANH SACH XE DANG GUI TRONG BAI GIU XE ===============\n");
	 for (int i = 0; i < n; i++)
	 {
		 puts(parkingList[i].ID);
	 }
	 _getch();
 }
 void SavingData(FILE* cardfile, ParkingCard* parkingList, int n)
 {
	 fprintf(cardfile, "%d\n", n);
	 for (int i = 0; i < n; i++)
	 {
		 fputs(parkingList[i].ID, cardfile);
		 fprintf(cardfile, "\n");
	 }
 }
 void FetchingData(FILE* cardfile, ParkingCard* *parkingList, int &n)
 {
	 fscanf(cardfile, "%d", &n);
	 *parkingList = InitList(n);
	 for (int i = 0; i < n; i++)
	 {
		 LineBuffering(cardfile, parkingList[i]->ID,maxID);
	 }
}
 char* LineBuffering(FILE* fp, char* str, int maxSize) // using the LineBuffering template function from HCMUS's book
 {
	 int ch, len;
	 if (feof(fp)) return NULL;
	 str[0] = 0;
	 len = 0;
	 do
	 {
		 ch = fgetc(fp);
		 if (ch == '\n' || ch == EOF) break;
		 if (len < maxSize - 1)
		 {
			 str[len] = ch;
			 len++;
		 }
	 } while (true);
	 str[len] = 0;
	 return str;
 }