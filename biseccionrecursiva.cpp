#include<iostream>
#include<cmath>
using funcion=double(double);
double f(double x);
double eps=0.0000000001;
double biseccion(double x, double y,int n);
  int main ()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=1;
  double y=1.5;
  int n=10000000;
  std::cout<<biseccion(x,y,n)<<std::endl;
  return 0;
}
double biseccion(double x, double y,int n)
{
  if(n>0){
  double xt;
  
  xt=(x+y)/2;
  if(f(x)*f(y)<0)
    {
      if(std::abs(f(xt))<eps)
	{
	  std::cout<<xt<<std::endl;
	  return biseccion(x,y,0);
	}
      else
	     {
	       std::cout<<x<<" si "<<y<<std::endl;
	       y=xt;
	       return biseccion(x,xt,n-1);
	     }
    }
  else{
    std::cout<<x<<" no "<<y<<std::endl;
    y=4*xt-3*x;
    x=xt;
    return biseccion(x,y,n-1);
  }	       
 
  }
}

 double f(double x)
{
  return std::sin(x);
}
