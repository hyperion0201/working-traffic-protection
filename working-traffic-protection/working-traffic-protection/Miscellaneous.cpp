#include "Miscellaneous.h"
#include "CardManagement.h"
#include "ImageManagement.h"
void Delay(int time)
{
	for (int i = 0; i < time; i++)
	{
		printf(". ");
		Sleep(500);
	}
}
void showInfo() {
	system("cls"); // clrscr for showing info
	printf("\n\n\n");
	printf("\t  =======================================================================================================\n");
	printf("\t  ||                                                                                                    ||\n");
	printf("\t  ||                               DAI HOC QUOC GIA THANH PHO HO CHI MINH                               ||\n");
	printf("\t  ||                                  TRUONG DAI HOC KHOA HOC TU NHIEN                                  ||\n");
	printf("\t  ||                                                                                                    ||\n");
	printf("\t  ||                                      DO AN KI THUAT LAP TRINH 01                                   ||\n");
	printf("\t  ||                                     CHUONG TRINH QUAN LI NHA XE                                    ||\n");
	printf("\t  ||                                Sinh Vien  : Hoang Minh Hieu                                        ||\n");
	printf("\t  ||                                Lop        : 17CK1_CL - Khoa CNTT                                   ||\n");
	printf("\t  ||                                MSSV       : 1760311                                                ||\n");
	printf("\t  ||                                Dien Thoai : 0125 428 0401                                          ||\n");
	printf("\t  ||                                Email      : 1760311@student.hcmus.edu.vn                           ||\n");
	printf("\t  ||       Source code available now on my GitHub: http://bit.ly/working-traffic-protection             ||\n");
	printf("\t  ||                                                                                                    ||\n");
	printf("\t  =======================================================================================================\n");
	_getch();
}
int Init()
{
	
	printf("\n");
	printf("\t\t================= QUAN LI NHA XE =================\n");
	printf("\n");
	Sleep(2000);
	printf("\t Chuong trinh dang chuan bi du lieu. Vui long doi trong giay lat ");
	Delay(3);
	if (fileExist("C:\\TrafficData\\TrafficList.txt")==true)
	{
		Sleep(500);
		printf("\t -> Phat hien du lieu phuong tien.\n");
		Sleep(500);
		printf("\t -> Dang doc du lieu phuong tien");
		Delay(3);
	//	FILE* cardfile = fopen("C:\\TrafficData\\TrafficList.txt", "rt");
		return 1;
	}
	return 0;
}
int MainMenu() {
	system("cls");
	int choice;
	printf("\n");
	printf("\t              CHUONG TRINH QUAN LI NHA XE  -- HOANG MINH HIEU -- 17CK1_CL           \n");
	printf("\t      ==============================================================================\n");
	printf("\t      ||                                                                          ||\n");
	printf("\t      ||                         1. Xem Danh Sach Xe Dang Gui                     ||\n");
	printf("\t      ||                         2. Them Xe                                       ||\n");
	printf("\t      ||                         3. Tra Xe                                        ||\n");
	printf("\t      ||                         4. Luu du lieu                                   ||\n");
	printf("\t      ||                         5. Xem Thong Tin Tac Gia                         ||\n");
	printf("\t      ||                         0. Thoat ung dung                                ||\n");
	printf("\t      ||                                                                          ||\n");
	printf("\t      ==============================================================================\n");
	printf("                   Vui Long Chon Cac Phim Chuc Nang Tuong Ung  :  ");
	scanf_s("%d", &choice);
	return choice;
}
