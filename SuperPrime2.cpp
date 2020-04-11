<<<<<<< HEAD
//作业：面向对象设计以下框架的代码细节，程序能编译运行得到正确结果 
#include <iostream>
class SuperPrime {
  public:
  	SuperPrime():number(0) {  //为什么必须有？ 
  	  size = 0;
=======
//浣滀笟锛氬畬鎴愪互涓嬫鏋剁殑浠ｇ爜缁嗚妭锛岀▼搴忚兘缂栬瘧杩愯寰楀埌姝ｇ‘缁撴灉 
#include <iostream>
class SuperPrime {
  public:
  	//int i;
  	//int a[1000];
  	SuperPrime(){
  		/*SuperPrime a[];
  		int n;
  		for(n=0;n<1000;n++)
  		{
  		
  		a[n].number=n;
  		number=n;}*/
>>>>>>> 09b9937b70ba01f047742c37de022076091733d8
  	}
  	SuperPrime(int n):number(n) {
  	  size = 0;
  	  split();  //它就是构造对象 
	}
  	~SuperPrime() {
  	  for (int i = 0; i < size; ++i) ; //销毁对象 
		//delete N[i]; 
	}
  	bool isSuperPrime() {
  	  SuperPrime a(sum());   //将普通整数转变为对象 
	  SuperPrime b(multi());
	  SuperPrime c(squareSum());
	  if (isPrime() && a.isPrime() && b.isPrime() && c.isPrime())
	    return true; 
  	  return false;
	}
	bool isPrime(){
		for(int i=2;i<number;i++)
		{
			if(number%i==0)
			return false;
		}
		return true;
	}
  private:

  	int number;
  	int N[100];
	int size;
/*	bool isPrime(){
		for(int i=2;i<number;i++)
		{
			if(number%i==0)
			return false;
		}
		return true;
	}*/
	void split() {   //工厂方法设计模式 
	  // number split into N
	  int temp = number;
	  while(temp > 0) {
	  	int n = temp % 10;
	  	temp /= 10;
	  	N[size] = n;   //构造对象 
	  	size += 1;
	  } 
	}
	int sum() {
		int i=0,sum=0;
		for(i=0;;i++)
		{
			if(N[i]==0)
			{
				break;
			}
			else
			{
				sum+=N[i];
			}
		}
	  return sum;
	}
	int multi() {
		int i=0,multi=1;
		for(i=0;;i++)
		{
			if(N[i]==0)
			{
				break;
			}
			else
			{
				multi=multi*N[i];
			}
		}
	  return multi;
	}
	int squareSum() {
		int i=0,squareSum=0;
		for(i=0;;i++)
		{
			if(N[i]==0)
			{
				break;
			}
			else
			{
				squareSum=squareSum+N[i]*N[i];
			}
		}
	  return squareSum;
	}
};
/*class Set {
  public:
  	int from;
  	int to;
  	Set(int from, int to) {
  		
  	  size = from-to;
	}
  	~Set() {
	}
  	int count() {
  	  int count = 0;
	  
  	  for (int i =0; i < size; i++){
		set[i].number=i+from;
  	    if(set[i].isSuperPrime())
  	      count += 1;
	  return count; 
	}
  	int sum() {
  	  int sum = 0;
  	  
  	  for (int i = 0; i < size; i++){
		 set[i].number=i+from;
  	    if(set[i].isSuperPrime())
  	      sum =sum+set.number;
  	      
	  return sum; 
	}
  private:
  	SuperPrime set[1000];
  	//for(int i=0;i<1000;i++)
  	//{
  	//	set[i].number=i;
  	//}
  	int size;
};*/
int main() {
  SuperPrime sp(113);
  if (sp.isSuperPrime())
    std::cout << "113 is SuperPrime" << std::endl;
  else
    std::cout << "113 is NOT SuperPrime" << std::endl;
  return 0;
}
