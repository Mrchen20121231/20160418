 ///
 /// @file    memery.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-18 05:22:58
 ///
 
#include <iostream>
#include <string.h>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;
int a=0;//全局已初始化
char *p1;//全局未初始化
int main()
{
   int b;//栈
   char s[]="adcd";//栈
   char * p2 ="23456";//栈
   char *p3;//栈未初始化
   static int c=0;//全局静态初始化区
   p1=new char[10];//p1位于栈，所指的对象位于堆
   p2=new char[10];//p2位于栈，所指的对象位于堆
   
   strcpy(p1,"3435");
   
   printf("&a=%p\n",&a);
   printf("&b=%p\n",&b);
   printf("s=%p\n",s);
   printf("&p1=%p\n",&p1);
   printf("p1=%p\n",p1);
   printf("&p2=%p\n",&p2);
   printf("p2=%p\n",p2);
   printf("&p3=%p\n",&p3);
   printf("&c=%p\n",&c);
   



}
