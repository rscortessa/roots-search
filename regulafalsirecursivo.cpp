#include<iostream>
#include<cmath>
using fun=double(double);
int y=0;
double f(double x);
double regulafalsi(double x, double x1, double eps, fun f,int d);
int main()
{
  double x;
  double x1;
  double eps;
  int n;
  std::cout<<"Escribe los limites del intervalo, el epsilon y el numero de pasos"<<std::endl;
  std::cin>>x>>x1>>eps>>n;
  std::cout<<"raiz ="<<regulafalsi(x,x1,eps,f,n)<<std::endl;
  return 0;
}
double regulafalsi(double x, double x1,double eps, fun f, int d)
{
  while(y<d+1)
    { double xt=(x*f(x1)-f(x)*x1)/(f(x1)-f(x));
				   if(std::abs(f(xt))<eps)
				     {
				       y=d;
				       return xt;
				     }
			       else
				 {
				   if(f(xt)*f(x)<0)
				     {
				       ++y;
				       return regulafalsi(x,xt,eps,f,d);
				     }
				   else
				     {++y;
				       return regulafalsi(xt,x1,eps,f,d);
				     }
				 }
			       }
    }

double f(double x)
{
  return std::cos(x);
}


				      
				   
				   
			       

			       
