#include<iostream>
#include<cmath>
double newton(double x0, int n);
double f(double x);
double df(double x);
int main()
{
  newton(0.1, 80);
  return 0;
}
double newton(double x0, int n)
{
  double x1=x0;
  double x2=x0-(f(x0)/df(x0));
  for (int ii=1;ii<n;++ii)
    {
      x1=x2;
	x2=x1-(f(x1)/df(x1));

	std::cout<<x1<<x2<<n<<std::endl;
    }
  
  return x2;
}

double f(double x)
{
  double z;
z=2*x(1-(x*x)+x)*std::log(x)-x*x+1;
 return z;
}
double df(double x)
{
  double z;
 z=      (2-6*x*x+4*x)*std::log(x)+2-2*x*x;

 return z;
}

      
      
  
