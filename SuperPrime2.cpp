//作业：完成以下框架的代码细节，程序能编译运行得到正确结果 
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
  	}
  	/*SuperPrime() {
  		
  		
	}*/
	//SuperPrime(){
	//}
  	~SuperPrime() {
	}
  	bool isSuperPrime() {
  	  split();
  	  int a = sum();
	  int b = multi();
	  int c = squareSum();
	  if (isPrime(number) && isPrime(a) && isPrime(b) && isPrime(c))
	    return true; 
  	  return false;
	}
  private:
  	int i;
  	int number;
  	//int S[1000];
  	int N[100], size;
  	bool isPrime(int n) { 
  		for(i=2;i<n;i++)
  		{
  			if(n%i==0)
  			{
  				return false;
  			}
  		}
  	
  	  return true;
	}
	void split() {
		int a,i=0;
		a=number;
		for(i=0;;i++)
		{
			if(a!=0)
			{
				N[i]=a%10;
				a=a/10;
			}	
		}
	  // number split into N
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
class Set {
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
};
int main() {
	
	
  Set ss(100, 999);
  std::cout << "How Many: " << ss.count() << std::endl;
  std::cout << "Sum is " << ss.sum() << std::endl;
  return 0;
}
