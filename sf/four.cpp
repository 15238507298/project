#include<stdio.h>
#include<string.h>	   //�ṩstrlrn()������ԭ��
#define DENSITY 62.4  //CԤ����ָ��
/*
ǰ������
*/
void one(){
	float weight, volume;
	int size, letters;
	char name[40];//��40���ַ��ռ����name���ַ���

	printf("Hi!What's your name?\n");
	scanf("%s", name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	//sizeof ��ȡ����������ռ���ֽ�
	size = sizeof(name);
	//��ȡ�ַ������ַ�����
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,Your Volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n",size);

	/*
	1.	�����飨array���洢�ַ���(character string),�ڸó����У��û�����������洢�������У�������ռ��40���������ֽڣ�
		ÿ���ֽڴ洢һ���ַ�ֵ
	2.	ʹ��%sת��˵���������ַ���������������ע�⣺��scanf�У�nameû��&ǰ׺����weight��
	3.	��CԤ���������ַ�����DENSITY����Ϊ62.4
	4.	��C����strlen()��ȡ�ַ����ĳ���
	����BASIC�������������ԣ�C��������������ȥ��Щ���ӡ��������ӻ������ǳ���ĸ�Ч�ͷ����������/�����
	*/
};

/*
ʹ���ַ���
C�е��ַ���һ���Կ��ַ�\0����������ζ������������������ٱȴ��洢�ַ������ַ�����1����ˣ�40���洢��Ԫ���ַ�����ֻ�ܴ洢39���ַ���
ʣ��һ���ֽ��������ַ���
*/
#define PRAISE "You are an extraordinary being." //CԤ��������ַ�������   Ԥ������治����ӣ�
void two() {
	//ʹ�ò�ͬ���͵��ַ���
	char name[40];
	printf("What's your name?");
	scanf("%s",name);
	printf("Hello,%s. %s\n", name,PRAISE);
	/*
	%s ����printf() ��ӡһ���ַ�����%s�������Σ���Ϊ����Ҫ��ӡ�����ַ�����һ���洢��name�����У�һ����PRAISE����ʾ��
	�������԰ѿ��ַ�\0�����ַ���ĩβ��scanf()�ڶ�ȡ����ʱ���Ѿ�����������Ҳ�������ַ�������PRAISEĩβ��ӿ��ַ���
	*/
};

/*
strlen() ����
sizeof���ֽ���ʽ��������Ĵ�С��strlen()���������ַ����е��ַ����ȡ�
*/
//void (*p)(); 
void three() {
	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello,%s,%s\n",name,PRAISE);
	printf("Your name of %zd letters occuples %zd memory cells.\n",strlen(name),sizeof(name));
	printf("The phrase of praise has %zd letters",strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
	
	/*
	һ����ԣ�C�ѿ⺯������صĺ�����Ϊһ�࣬��Ϊÿ�ຯ���ṩһ��ͷ�ļ������磺printf()��scanf()�������ڱ�׼�������׼�����ʹ��stdio.h
	ͷ�ļ���string.hͷ�ļ��а�����strlen()����������һЩ���ַ�����صĺ�����
	
	sizeof��ʱʹ��Բ���ţ�ȡ����������������ͻ����ض������������������ʱ��Բ���űز����٣����Ƕ����ض��������п��ޡ�Ҳ����˵���������ͣ�
	Ӧд��sizeof(char)��sizeof(float);�����ض�������д��sizeof name��sizeof 6.28��������ˣ����ǽ�����������¶�ʹ��Բ���ţ��磺sizeof(6.28)
	*/
};

/*
������CԤ������
*/
#define PI 3.14159;
void four() {
	float area, circum, radius;
	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area = radius * radius * PI;
	circum = 2.0 * radius * PI;
	printf("Your basic pizza parameters are as follows:\n");
	printf("Circumference = %1.2f,area= %1.2f \n",circum,area);
	/*
	printf()����е�%1.2f�������������������Ϊ��λС�������
	#defineָ����Զ����ַ����ַ���������ǰ��ʹ�õ����ţ�����ʹ��˫���š�
	���ų�������������ݱ������滻���ų�����
	*/
};