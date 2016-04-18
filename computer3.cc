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
		  Computer()
		  {
             cout << "Computer()" << endl;
		  }
#if 0
		  Computer(const Computer & rhs)
          :_band(rhs._band)//初始化 浅
		  ,_price(rhs._price)
          {
            cout << "Computer(const char & rhs)" << endl;
          }
#endif
		  Computer(const Computer & rhs)
           :_price(rhs._price)//深
          {
            cout << "Computer(const char & rhs)" << endl;
            _brand = new char[strlen(rhs._brand)+1];
            strcpy(_brand,rhs._brand);
          }
		  ~Computer()
		  {
            cout << "~Computer()" << endl;
              if(_brand)
               {
                 delete [] _brand;
	             _brand[20]=NULL;
               }
            
		  }
		  void print()
          {
             cout << "品牌=" << _brand << endl;
	         cout << "价格=" << _price << endl;
			 cout << "&_brand=%p"<<&_brand << endl;
          }
		  void  setBrand(const char * brand);
		  void  setPrice(float price);
    private:
		   char * _brand;
		   float _price;
};
void Computer::setBrand(const char * brand)
{
	 _brand=new char[strlen(brand)+1];
     strcpy(_brand,brand);             
}
void Computer::setPrice(float price)
{
      _price=price;
}
int main()
{
    Computer pc;
	pc.setBrand("thinkpad");
	pc.setPrice(7999);
	pc.print();
	Computer p2=pc;//复制析构函数
	p2.print();
	Computer p3(pc);
	p3.print();
    
	

}


