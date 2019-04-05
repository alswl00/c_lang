#include "common.h"
#include "screenOut.h"
#include "phoneData.h"
#include "phoneFunc.h"
enum{INPUT=1,SHOWALL,SEARCH,DELETE,CHANGE,QUIT};
int people = 0;
int main() {
	int inputMenu;
	phoneData p[100];
	LoadDataFromFile(p);
	while (1) {
		ShowMenu();
		fputs("선택하세요 : ", stdout);
		scanf("%d", &inputMenu);
		fflush(stdin);
		switch (inputMenu) {
		case INPUT: InputPhoneData(p);
			break;
		case SHOWALL: ShowAllData(p);
			break;
		case SEARCH: SearchPhoneData(p);
			break;
		case DELETE: DeletePhoneData(p);
			break;
		case CHANGE: ChangePhoneData(p);
			break;
		}
		if (inputMenu == QUIT) {
			StoreDataToFile(p);
			puts("이용해 주셔서 고마워요~");
			break;
		}
	}
	return 0;
}