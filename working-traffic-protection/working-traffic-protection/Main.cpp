#include "ImageManagement.h"
#include "CardManagement.h"
#include "Miscellaneous.h"

void main(int argc, char* argv)
{
	int n = 0;
	ParkingCard* list = InitList(n);
	int i = AddingTraffic(&list, n, "concac");
	puts(list[n-1].ID);
	printf("%d\n", n);
	int location = FindingLocation(list, n, "concac");
	printf("%d\n",location);
	_getch();
	free(list);
}