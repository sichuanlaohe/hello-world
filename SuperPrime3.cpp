//��ҵ��������������9081321110693270343633073697474256143563558458718976746753830538032062222085722974121768604305613921745580037409259811952655310075487163797179490457039169594160088430571674960498834085812920457916453747019461644031395307920624947349951053530086146486307198155590763466429392673709525428510973272600608981219760099374675982933766845473509473676470788342281338779191792495900393751209539300628363443012 6538005862664913074813656220643842443844131905754565672075358391135537108795991638155474452610874309742867231360502542308382199053675592825240788613991898567277116881793749340807728335795394301261629479870548736450984003401594705923178314906195914825136973281314862289454100745237769034410057080703111299605127114594552921209928891515242515620324828055912854227507525717981351447473570262981491527798 
//�����������Ĵ��룬ʹ����Դ���������������볬������
//ͬʱ��ϸ����������ı�̷�ʽ 
#include <iostream>
#include<stdio.h>
class BigPrime {
public:
	BigPrime():num(0),n(0){
	}
  BigPrime(int n) : num(n),n(n){
  }
	bool isPrime() {
  	 {
  	 	for(int i=2;i<n;i++)
	  {
	  	if(n%i==0)
	  	return true;
	  } 
	  	return true;
	  } 
    return false;
  }
  int n;
private:
  const int num;
}; 
class BigSuperPrime : public BigPrime {
public:
  BigSuperPrime(int n) : BigPrime(n), num(n){
  }
  bool isSuperPrime() const {
  	BigPrime a[10]=0;
  	BigPrime sum;
  	BigPrime ji;
  	int mid;
  	mid=num;
  	for(int i=0;mid;i++)
  	{
  		a[i].n=mid%10;
  		if(!a[i].isPrime())
  		return false;
  		sum.n=sum.n+a[i].n;
  		ji.n=ji.n*a[i].n;
  		mid=mid/10;
  	}
  	if(sum.isPrime()&&ji.isPrime())
  	return true;
    return false;
  }
private:
  const int num;
};
template <class T>
class Set {
public:
  Set(int sz);
  ~Set();
  bool add(T *bp);
  bool remove(T *bp);
  int count() const {
  	int ret = 0;
  	for (int i = 0; i < index; i++) {
  	  if (pset[i]->isPrime())
  	    ret += 1;
	  }
  	return ret;
  }
  int sum() const {
  	return 0;
  } 
private:
  T **pset;
  int size, index;
};
int main() {
<<<<<<< HEAD
  BigSuperPrime exm(char a)
  Set set(1000);
=======
  Set<BigPrime> set(1000);
>>>>>>> upstream/master
  BigSuperPrime bp(2), bp1(3);
  set.add(&bp);
  set.add(&bp1);
  std::cout << set.count() << std::endl;
  return 0;
} 

template <class T>
Set<T>::Set(int sz):size(sz) {
  index = 0;
  pset = new T*[size];  //����洢�ռ� 
}

template <class T>
Set<T>::~Set() {
  delete[] pset;  //���� 
}

template <class T>
bool Set<T>::add(T *bp) {
  pset[index++] = bp;
  return true;
}
