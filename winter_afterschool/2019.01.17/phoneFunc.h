/* Name: phoneFunc.h  ver 1.3
 * Content: ��ȭ��ȣ ��Ʈ�� �Լ� ����.
 * Implementation: YSW
 *
 * Last modified 2008/01/01
 */
#ifndef __PHONEFUNC_H__
#define __PHONEFUNC_H__

#include "phoneData.h"

void InputPhoneData(phoneData *);
void ShowAllData(phoneData *);
void SearchPhoneData(phoneData *);
void DeletePhoneData(phoneData *);
void ChangePhoneData(phoneData *);

void StoreDataToFile(phoneData *);
void LoadDataFromFile(phoneData *);

#endif

/* end of file */