//void_ptr.c

#include<stdio.h>

int Getdata(void* p_data, char type) {
	int result = 0;
	//type 변수 저장된 값 기준 형 변환 다르게 함
	if (type == 1) result = *(char*)p_data;//0x78(1바이트)저장
}