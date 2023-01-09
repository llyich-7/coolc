#include <stdio.h>
#include <stdlib.h>
#include "generalSetting.h"

#define LIST_INIT_SIZE 100
#define LIST_INCRESEMENT 10

#define show_me_the_result 1

typedef int ElemType;
typedef struct {
	ElemType *elem;
	int length;
	int	size;
}SqList;

Status ListInit_Sq(SqList *L){
	if(L->elem != NULL) return ERROR;
	L->elem = (ElemType *)malloc(sizeof(ElemType)*LIST_INIT_SIZE);
	L->size = LIST_INIT_SIZE;
	L->length = 0;

return OK;
}
Status ListInsert_Sq(SqList *L, int i, ElemType e){
	if(i < 1 || i > L->length + 1) return ERROR;

	if(L->length >= L->size){
		L->elem = (ElemType *)realloc(L->elem, sizeof(ElemType)*LIST_INIT_SIZE+LIST_INCRESEMENT);
		L->size += LIST_INCRESEMENT; 
	}
	ElemType *p;
	ElemType *q;
	
	q = &(L->elem[i-1]);
	if(L->length > 0){
		for(p = &(L->elem[L->length -1]); p >= q; p--) *(p+1) = *p;
	}

	
	*q = e;
	L->length++;

#ifdef show_me_the_result
	printf("Inserted a %d in location %d.\n", e, i);

#endif

return OK;
}

ElemType ListGetElem_Sq(SqList *L, int i){
	if(i < 1 || i > L->length + 1) return ERROR;
	
return L->elem[i-1];
}

Status ListShowElem_Sq(SqList *L){
	
	int i;
	for(i = 0; i < L->length; i++){
		printf("No.%02d: %d\n", i+1, ListGetElem_Sq(L, i+1));
	}
return OK;
}

int main(void){
	
	SqList L;
	ListInit_Sq(&L);
	printf("initialization ok!\n");
	ListInsert_Sq(&L, 1, 5);


return 0;
}

