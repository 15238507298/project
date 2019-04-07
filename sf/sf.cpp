// sf.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "stdio.h"
//创建存储void p()的结构体
struct menu {
	void (*p)();
};
void one();
void two();
void three();
void four();
int main()
{
	//定义结构体为结构体数组
	struct  menu men[30];
	//为结构体赋值
	men[0].p = one;
	men[1].p = two;
	men[2].p = three;
	men[3].p = four;
	//调用结构体中的方法
	printf("请输入要运行的程序\n");
	int answ;
	//fflush(stdout);刷新标准输出流缓冲区
	fflush(stdout);
	//接收输入整数到swan
	scanf("%d",&answ);
	//执行结构体中方法
	men[answ].p();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
