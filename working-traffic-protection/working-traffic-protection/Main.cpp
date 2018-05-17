#include "CardManagement.h"
#include "ImageManagement.h"
#include "Miscellaneous.h"
using namespace cv;
void main()
{
	int n = 0;
	ParkingCard* parkingList = InitList(n);
	// checking data
	int data = Init();
	if (data == 1)
	{
		FILE* cardfile = fopen("C:\\TrafficData\\TrafficList.txt", "rt");
		FetchingData(cardfile, &parkingList, n);
	}
	else
	{
		printf("\n\tPhat hien lan dau su dung!");
		Delay(2);
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
			int addflag = AddingTraffic(&parkingList, n, id);
			if (addflag == 0)
			{
				printf("Them xe that bai! Vui long thu lai");
				Delay(2);
			}
			else
			{
				ImageCapturing(id);
				printf("Them xe thanh cong !");
				Delay(3);
			}
			break;
		}
		case 3: {
			system("cls");
			char id[10];
			printf("Nhap ma xe can xoa : ");
			getchar();
			gets_s(id);
			int rmflag = ImageRemoving(id);
			if (rmflag == 0) {
				printf("Xoa thanh cong");
				Delay(2);
			}
			else {
				printf("Xoa khong thanh cong");
				Delay(2);
			}
			break;
		}
		default:
			break;
		}
	}
	_getch();
}