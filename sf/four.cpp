#include<stdio.h>
#include<string.h>	   //提供strlrn()函数的原型
#define DENSITY 62.4  //C预处理指令
/*
前导程序
*/
void one(){
	float weight, volume;
	int size, letters;
	char name[40];//用40个字符空间接收name的字符串

	printf("Hi!What's your name?\n");
	scanf("%s", name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	//sizeof 获取数据类型所占的字节
	size = sizeof(name);
	//获取字符串的字符长度
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,Your Volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters,\n",letters);
	printf("and we have %d bytes to store it.\n",size);

	/*
	1.	用数组（array）存储字符串(character string),在该程序中，用户输入的名被存储在数组中，该数组占用40个连续的字节，
		每个字节存储一个字符值
	2.	使用%s转换说明来处理字符串的输入和输出。注意：在scanf中，name没有&前缀，而weight有
	3.	用C预处理器把字符常量DENSITY定义为62.4
	4.	用C函数strlen()获取字符串的长度
	对于BASIC的输入或输出而言，C的输入或输出看上去有些复杂。不过复杂换来的是程序的高效和方便控制输入/输出。
	*/
};

/*
使用字符串
C中的字符串一定以空字符\0结束，这意味着数组的容量必须至少比待存储字符串的字符数多1，因此，40个存储单元的字符串，只能存储39个字符，
剩下一个字节留给空字符。
*/
#define PRAISE "You are an extraordinary being." //C预处理接收字符串数据   预处理后面不允许加；
void two() {
	//使用不同类型的字符串
	char name[40];
	printf("What's your name?");
	scanf("%s",name);
	printf("Hello,%s. %s\n", name,PRAISE);
	/*
	%s 告诉printf() 打印一个字符串。%s出现两次，因为程序要打印两个字符串；一个存储在name数组中；一个由PRAISE来表示。
	不用亲自把空字符\0放入字符串末尾，scanf()在读取输入时就已经完成这项工作。也不用在字符串常量PRAISE末尾添加空字符。
	*/
};

/*
strlen() 函数
sizeof以字节形式给出对象的大小。strlen()函数给出字符串中的字符长度。
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
	一般而言，C把库函数中相关的函数归为一类，并为每类函数提供一个头文件。例如：printf()和scanf()都隶属于标准输入与标准输出。使用stdio.h
	头文件。string.h头文件中包含了strlen()函数和其他一些与字符串相关的函数。
	
	sizeof何时使用圆括号，取决于运算对象是类型还是特定量，运算对象是类型时，圆括号必不可少，但是对于特定量，可有可无。也就是说，对于类型，
	应写成sizeof(char)或sizeof(float);对于特定量，可写成sizeof name或sizeof 6.28。尽管如此，还是建议所有情况下都使用圆括号，如：sizeof(6.28)
	*/
};

/*
常量和C预处理器
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
	printf()语句中的%1.2f表明，结果被四舍五入为两位小数输出。
	#define指令还可以定义字符和字符串常量，前者使用单引号，后者使用双引号。
	符号常量名后面的内容被用来替换符号常量，
	*/
};