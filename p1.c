#include <stdio.h>
#include <string.h>

struct tagAddress // ����ü struct tagAddress �����մϴ�. 
{
	char name[30];
	char phone[20];
	char address[100];	
};

void print(struct tagAddress *pad)
{
	printf("�̸� : %s \n", pad->name);
	printf("��ȭ : %s \n", pad->phone);
	printf("�ּ� : %s \n", pad->address);
}

void main(void)
{
	struct tagAddress ad; // ����ü struct tagAddress�� ���� ���� ad�� �����մϴ�. 
	
	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "����� ��õ�� �񵿾���Ʈ 13����");
	
	print(&ad);
	// print() �Լ��� ȣ���մϴ�. ȣ�� �� ad�� �н����� pad�� �����մϴ�. �迭�� �迭���� �迭�� ��ǥ�ϴ�
	// ����̱� ������ ���� ���� ������(&)�� ������� ������, ����ü�� �Ϲ� ����ó�� ���Ǳ� ������
	// ���� ���� ������(&)�� �ݵ�� ����ؾ� �մϴ�. 
}
