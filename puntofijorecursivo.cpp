#include<iostream>
#include<cmath>
using fun=double(double);
double puntofijo(double x, int n, int aux, fun f);
double f(double x);
int main()
{
  int n;
  double x;
  int aux=0;
  std::cout<<"Escribe el número de pasos y el punto inicial"<<std::endl;
  std::cin>>n>>x;
  std::cout<<"La raiz es "<<puntofijo(x,n,aux,f)<<std::endl;
  return 0;
}
double puntofijo(double x, int n,int aux, fun f)
{
  while(aux<n+1)
    {
      std::cout<<f(x)<<std::endl;
      return puntofijo(f(x),n,aux+1,f);
    }
  return x;
}

double f(double x)
{
  return (std::pow(x,2)+2)/3;
}

      
      
