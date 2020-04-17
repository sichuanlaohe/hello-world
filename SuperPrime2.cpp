<<<<<<< HEAD
//��ҵ���������������¿�ܵĴ���ϸ�ڣ������ܱ������еõ���ȷ��� 
#include <iostream>
class Prime {
  public:
  	Prime():number(0) {
	}
  	Prime(int n):number(n) {
	}
	~Prime() {
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
  	const int number;
}; 
class PrimeSet {
  public:
  	PrimeSet(int size) {
  	  //���ϵĹ���ʲô�� 
  	  N = new Prime*[size];
  	  this->size = size;
  	  index = 0;
	}
	~PrimeSet() {
  	  for (int i = 0; i < index; ++i)  //���ٶ��� 
		delete N[i]; 
	  delete[] N;
	}
	bool add(int n) {
		if(index==0)
		{
			N[size]=1;
			N[size+1]=1;
		}
	  if(index == size)  return false;
	  Prime *p = new Prime(n);
	  N[index] = p;
	  N[size].number+=p->number;
	  N[size+1].number*=p->number;
	  index += 1;
	  return true;
	}
	bool isAllPrime() {
	  for(int i = 0; i <= index+1; i++)
	  {
	  	if(!N[i]->isPrime()) return false;
	  	
	  }
	  return true;

	} 
  private:
  	Prime **N;
	int size, index;
};
#include <iostream>
class SuperPrime {
  public:
  	SuperPrime():number(0), pset(3) {  //Ϊʲô�����У� 
  	}
  	SuperPrime(int n):number(n), pset(3) {
  	  split();  //�����ǹ������ 
	}
  	~SuperPrime() {
  	  for (int i = 0; i < size; ++i) ; //���ٶ��� 
		//delete N[i]; 
	}
  	bool isSuperPrime() {
  	  //��ôʹ��pset�� 
  	  Prime p(number);
	  if (p.isPrime())
	    return true; 
  	  return false;
	}

  private:
  	const int number;
  	PrimeSet pset;
	void split() {   //�����������ģʽ 
	  // number split into N
	  int temp = number;
	  while(temp > 0) {
	  	int n = temp % 10;
	  	temp /= 10;  //������� 
	  	size += 1;
	  	pset.add(n);  //��ҵ����������Ϊ���󣿻��Ǻ�/��/ƽ����Ϊ���� 
	  } 
	}
	/*int sum() {
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
	}*/
  	SuperPrime **set;
  	int size, index;
};
int main() {
  SuperPrime sp(113);
  if (sp.isSuperPrime())
    std::cout << "113 is SuperPrime" << std::endl;
  else
    std::cout << "113 is NOT SuperPrime" << std::endl;
  return 0;
}
