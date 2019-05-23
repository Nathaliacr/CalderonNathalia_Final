#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;

int main(){

    
double t=0.0;
double tm=10.0;
double dt=0.1;
double y=1.0;
double z=0.0;
ofstream outfile;
double Ex[101];    
double Ey[101];
double yx=1.0;
double yy=0.0;
double zx=0.0;
double zy=1.1;
double m=7294.29;
double q=2.0;
int i;
    
    
for(i=0;i<101;i++){
    if(i<30){  
        Ex[i]=0.0;
        Ey[i]=0.0;
        
    }
    
    if((30<i)&&(i<70)){  
        Ex[i]=0.0;
        Ey[i]=3.0;
        
    }
    
   else{  
        Ex[i]=0.0;
        Ey[i]=0.0;
        
    }
  }
    
    
 outfile.open("datos.dat");   
    
 while(t<tm){
    
    i=0;
    
     
    cout << yx << " " << zy << " " << endl; 
     
    yx = yx + 0.5 * dt * zx;
    yy= yy + 0.5 * dt * zy;
        
    zx = zx + (dt * q * Ex[i])/m;
    zy = zy + (dt * q * Ey[i])/m;
     
    yx  = yx + 0.5 * dt * zx;
    yy= yy + 0.5 * dt * zy;
     
    t = t + dt;
    i=i+1;
         
        
  }
  outfile.close();    

return 0;
}