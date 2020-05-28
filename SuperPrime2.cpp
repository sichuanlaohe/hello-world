<<<<<<< HEAD
<<<<<<< HEAD
//作业：面向对象设计以下框架的代码细节，程序能编译运行得到正确结果 
=======
//作业：删除多余的集合类，使用继承方法实现相同的功能。 
>>>>>>> upstream/inheritant
#include <iostream>
class Prime {
  public:
  	Prime():number(0) {
	}
  	Prime(int n):number(n) {
	}
	~Prime() {
	}
<<<<<<< HEAD
	bool isPrime(){
		for(int i=2;i<number;i++)
		{
			if(number%i==0)
			return false;
		}
		return true;
=======
  	virtual bool isPrime() { 
  	  //2到number-1的因子 
  	  std::cout << "Prime's isPrime() call" << std::endl;
  	  return false;
>>>>>>> upstream/inheritant
	}
  private:
  	const int number;
}; 
class PrimeSet:public Prime {
  public:
  	PrimeSet(int size) {
  	  //集合的构造什么？ 
  	  set = new Prime*[size];
  	  this->size = size;
  	  index = 0;
	}
	~PrimeSet() {
  	  delete[] set;
	}
 	int count() {
  	  int count = 0;
  	  for (int i = 0; i < size; i++)
  	    if(set[i]->isPrime())
  	      count += 1;
	  return count; 
	}

<<<<<<< HEAD
	bool add(int n) {
		if(index==0)
		{
			N[size]=1;
			N[size+1]=1;
		}
	  if(index == size)  return false;
	  Prime *p = new Prime(n);
<<<<<<< HEAD
	  N[index] = p;
	  N[size].number+=p->number;
	  N[size+1].number*=p->number;
=======
=======
	bool add(Prime *p) {
	  if(index == size)  return false;
>>>>>>> upstream/inheritant
	  set[index] = p;
>>>>>>> upstream/inheritant
	  index += 1;
	  return true;
	}
	bool isAllPrime() {
	  for(int i = 0; i <= index+1; i++)
	  {
	  	if(!N[i]->isPrime()) return false;
	  	
	  }
	  for(int i = 0; i < index; i++)
	    if (!set[i]->isPrime())
	      return false;
	  return true;

	} 
  private:
  	Prime **set;
	int size, index;
};
class SuperPrime : public Prime {
  public:
  	SuperPrime():Prime(0), pset(3) {  //为什么必须有？ 
  	}
  	SuperPrime(int n):Prime(n), pset(3) {
	  // number split into N
	  int temp = n;
	  while(temp > 0) {
	  	int t = temp % 10;
	  	temp /= 10;
	  	//pset.add(t);  //作业：单个数字为对象？还是和/积/平方和为对象？ 
	  } 
	}
  	~SuperPrime() {
  	  for (int i = 0; i < size; ++i) ; //销毁对象 
		//delete N[i]; 
	}
  	virtual bool isPrime() {   //类/对象的接口，更抽象说是外观 
  	  std::cout << "SuperPrime's isPrime() call" << std::endl;
	  if (Prime::isPrime() && pset.isAllPrime())
	    return true; 
  	  return false;
	}

  private:
  	PrimeSet pset;
	void split() {   //工厂方法设计模式 
	  // number split into N
	  int temp = number;
	  while(temp > 0) {
	  	int n = temp % 10;
	  	temp /= 10;  //构造对象 
	  	size += 1;
	  	pset.add(n);  //作业：单个数字为对象？还是和/积/平方和为对象？ 
	  } 
	}
  	SuperPrime **set;
=======
	  return 0;
	}
};
int main() {
  SuperPrime p(13);
  SuperPrime sp(113);
  PrimeSet set(2);
  set.add(&sp); 
  set.add(&p);
  std::cout << "How Many : " << set.count() << std::endl;
  return 0;
}
