#include <stdio.h>
#include <string.h>

struct tagAddress // 구조체 struct tagAddress 선언합니다. 
{
	char name[30];
	char phone[20];
	char address[100];	
};

void print(struct tagAddress *pad)
{
	printf("이름 : %s \n", pad->name);
	printf("전화 : %s \n", pad->phone);
	printf("주소 : %s \n", pad->address);
}

void main(void)
{
	struct tagAddress ad; // 구조체 struct tagAddress에 대한 변수 ad를 정의합니다. 
	
	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "서울시 양천구 목동아파트 13단지");
	
	print(&ad);
	// print() 함수를 호출합니다. 호출 시 ad의 분신으로 pad를 지정합니다. 배열은 배열명이 배열을 대표하는
	// 상수이기 때문에 번지 지정 연산자(&)를 사용하지 않지만, 구조체는 일반 변수처럼 사용되기 때문에
	// 번지 지정 연산자(&)를 반드시 사용해야 합니다. 
}
