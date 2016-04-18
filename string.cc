 ///
 /// @file    string.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-18 02:19:06
 ///
 //
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
void strcat1()
{
   char str1[128]="hello";
   char str2[]=",world";
   strcat(str1,str2);
   printf("strcat1:%s\n",str1);
   

}
void strcat2()
{
    char str1[]="hello";
	char str2[]=",world";
	char * str3 = new char[strlen(str1) + strlen(str2)+1];
	strcpy(str3,str1);
	strcat(str3,str2);
    printf("strcat2:%s\n",str3);
}
void strcat3()
{
    string s1="hello";
	string s2=",world";
	string s3=s1+s2;
	cout << "strcat3:s3=" << s3 << endl;
}
void findStr()
{
      char str3[12]="hello,world";
	  char * str4= new char[strlen("llo,wo")+1];
	  char * pstr = strstr(str3,"llo,wo");
	  strncpy(str4,pstr,strlen("llo,wo"));
	  printf("findStr:%s",str4);
	  delete [] str4;
	  

}
int main()
{
    strcat1();
	strcat2();
	strcat3();
	findStr();
    return 0;
}
