#include "CardManagement.h"
#include "ImageManagement.h"
#include "Miscellaneous.h"
using namespace cv;
void main()
{
	int n= 1;
	ParkingCard* parkingList= InitList(n);
	// checking data
	int data = Init();
	if (data == 1)
	{
		FILE* cardfile = fopen("C:\\TrafficData\\TrafficList.txt", "rt");
		FetchingData(cardfile, &parkingList, n);
	}
	else
	{
		printf("\n\tChua tim thay du lieu !");
		Delay(3);
	}
	while (true)
	{
		system("cls");
		int mainmenu = MainMenu();
		switch (mainmenu)
		{
		case 1: {
			system("cls");
			ExportingList(parkingList, n);
			break;
		}
		case 2: {
			system("cls");
			char id[10];
			printf("\n\t -> Nhap ma xe : ");
			getchar();
			gets_s(id);
		int re=	AddingTraffic(&parkingList, n, id);
			ImageCapturing(id);
			break;
		}
		default:
			break;
		}
	}
	_getch();
}