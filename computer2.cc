 ///
 /// @file    computer.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-18 00:39:49
 ///
#include <cstring> 
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;
class Computer
{
	public:
		  Computer();
		  Computer(const char * brand,float price);
		  ~Computer();
		  void print();
		  void  setBrand(char *brand);
		  void  setPrice(float price);
    private:
		   char * _brand;
		   float _price;
};
Computer::Computer()
{
  cout << "Computer()" << endl;

}
Computer::Computer(const char * brand,float price)
:_price(price)
{
   cout << "Computer(const char * brand,float price)" << endl;
   _brand = new char[strlen(brand)+1];
   strcpy(_brand,brand);
}
Computer::~Computer()//被动调用析构函数会释放内存,而主动调用不会
{
  cout << "~Computer()" << endl;
  if(_brand)
  {
     delete [] _brand;
	 _brand[20]=NULL;
  }

}
void Computer::print()
{
    cout << "品牌=" << _brand << endl;
	cout << "价格=" << _price << endl;
}
void Computer::setBrand(char *brand)
{
     strcpy(_brand,brand);             
}
void Computer::setPrice(float price)
{
      _price=price;
}
int main()
{
    Computer pc("Mac",10000);
	pc.print();
//	pc.~Computer();
	

}


