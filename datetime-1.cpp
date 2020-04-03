
#include <iostream>
#include<stdio.h>
class DateTime {
private:
  //long int seconds;    //从1970年1月1日0时开始计算的秒数 
public:
	int seconds;
	int year,month,day,hour,minute,second;
  DateTime();
  DateTime(int y, int m, int d, int h, int mi, int s); 
  DateTime(const DateTime &dt);
  ~DateTime();
  void Seconds();
  void showTime();
  void showMoon();  //作业：将当前公历转换为农历显示出来 
};

int main() {
  DateTime dt(2020, 3, 27, 10, 40, 55);
  //DateTime dt2(dt), &dt3 = dt;
  //DateTime *dt4 = &dt;
  dt.Seconds();
  dt.showTime();
  //dt1.showTime();
  //dt2.showTime();
  //dt3.showTime();
  //dt4->showTime();
  return 0;
}
DateTime::DateTime()
{
}
DateTime::DateTime(int y, int m, int d, int h, int mi, int s)
{
	year=y;
	month=m;
	day=d;
	hour=h;
	minute=mi;
	second=s;
}
DateTime::DateTime(const DateTime &dt)
{
}
DateTime::~DateTime() 
{
  //std::cout << " Go die, Ha~Ha~\n" << std::endl;
}
void DateTime::showTime()
{
  printf("当前时间：%d/%d/%d %d:%d:%d\n距离1970年1月1日0时%d秒", year, month, day, hour, minute, second,seconds);
}
void DateTime::Seconds()
{
	seconds=(2020-1970)*365*86400+(3-1)*30*86400+(27-1)*86400+10*3600+40*60+55;
	//printf("%d",seconds);
}
 
