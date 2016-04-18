 ///
 /// @file    io.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-18 04:19:36
 ///
 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
#if 0
   int c;
   while(scanf("%d",&c))
   {
       printf("c=%d\n",c);
   }
#endif
#if 0
   string str;
   while(cin>>str)
   {

   cout << "str=" << str << endl;
   }
#endif
   string str;
   while(getline(cin,str))
   {
     cout << "str=" << str << endl;

   }
   return 0;


}
