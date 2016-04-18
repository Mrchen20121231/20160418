 ///
 /// @file    computer.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-18 00:39:49
 ///
#include <cstring> 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class Computer
{
	public:
		  void print();
		  void  setBrand(char *brand);
		  void  setPrice(float price);
    private:
		   char _brand[20];
		   float _price;
};
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
    Computer com;
	com.setBrand("lenovo");
	com.setPrice(4999);
	com.print();
	


}


