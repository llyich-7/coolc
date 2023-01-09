#include <stdlib.h>
#include <stdio.h>
#include "generalSetting.h"

#define LIST_INIT_SIZE	100
#define LIST_INCREMENT	10

typedef int ElemType;

typedef struct{
	ElemType *elem;
	int length;
	int listSize;
}SqList;

Status InitList_Sq(SqList *L){
	L->elem = (ElemType *)malloc(sizeof(ElemType)*LIST_INIT_SIZE);
	if(!L->elem) exit(OVERFLOW);
	L->length = 0;
	L->listSize = LIST_INIT_SIZE;

	return OK;
}

Status ListInsert_Sq(SqList *L, int i, ElemType e){
	if(i < 1 || i > L->length + 1) return ERROR;
	if(L->length >= L->listSize){
		ElemType *newbase;
		newbase = (ElemType *)realloc(L->elem, (L->listSize + LIST_INCREMENT)*sizeof(ElemType));
		if(!newbase) exit(OVERFLOW);
		L->elem = newbase;
		L->listSize += LIST_INCREMENT; 
	}
	ElemType *p;
	ElemType *q;

	q = &(L->elem[i-1]);
	if(L->length != 0){
		for(p = &(L->elem[L->length - 1]); p >= q; p--) *(p+1) = *p;
	}
	*q = e;
	L->length++;
	return OK;
}

Status deleteList_Sq(SqList *L, int i){
	if(i < 1 || i > L->length + 1) return ERROR;
	if(L->length == 0) return ERROR;

	ElemType *p;
	ElemType *q;

	q = &(L->elem[L->length - 1]);
	for(p = &(L->elem[i - 1]); p < q; p++) *p = *(p+1);

	L->length--;
	
	return OK;
}

Status getElem_Sq(SqList *L, int i, ElemType *e){
	if(i < 1 || i > L->length + 1) return ERROR;
	if(L->length == 0) return ERROR;
	
	*e = L->elem[i-1];
	
	return OK;
}

Status showList_Sq(SqList *L){
	
	if(L->length <= 0){
		printf("an empty list.\n");
		return ERROR;
	}

	int i;
	int e;
	for(i = 1; i <= L->length; i++){
		getElem_Sq(L, i, &e);
		printf("No.%03d :%d\n", i, e);
	}
	
	return OK;
}

int locateElem_Sq(SqList *L, ElemType e, int (*c)(ElemType, ElemType)){
	
	if(L->length <= 0){
		printf("an empty list.\n");
		return ERROR;
	}
	
	ElemType *p;
	ElemType *q;
	
	q = &(L->elem[L->length - 1]); 

	for(p = L->elem; p <= q; p++){
		if( (*c)(e, *p) == 1){
			return p - (L->elem) + 1;
		}
	}

	return ERROR;
}

int equal(ElemType a, ElemType b){
		
	return (a == b);
}

int main(void){

	SqList list;
	InitList_Sq(&list);
	printf("Initialization OK!\n");
	ListInsert_Sq(&list, 1, 7);
	printf("Insert OK!\n");
	showList_Sq(&list);
	ListInsert_Sq(&list, 1, 7);
	printf("Insert OK!\n");
	showList_Sq(&list);
	ListInsert_Sq(&list, 1, 7);
	printf("Insert OK!\n");
	showList_Sq(&list);
	ListInsert_Sq(&list, 1, 7);
	printf("Insert OK!\n");
	showList_Sq(&list);
	ListInsert_Sq(&list, 2, 6);
	printf("Insert OK!\n");
	showList_Sq(&list);
	deleteList_Sq(&list, 2);
	printf("Delete OK!\n");
	showList_Sq(&list);
	ListInsert_Sq(&list, 2, 6);
	printf("Insert OK!\n");
	showList_Sq(&list);
	
	int (*myFunP)(ElemType, ElemType) = equal;

	if(locateElem_Sq(&list, 6, myFunP)){
		
		printf("Location is %d.\n", locateElem_Sq(&list, 6, myFunP));
		printf("There!\n");
	}
	else printf("Not there!\n");

return 0;
}
