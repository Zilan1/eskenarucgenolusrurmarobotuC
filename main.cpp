#include <iostream>

int main(int argc, char** argv) {
	
	int h,adim,bosluk,yildiz;
      printf("*****Eskenar Ucgen Olusturma Robotu*****\n");
      
	  printf("Ucgenin Yuksekligini Giriniz: ");
      scanf("%d",&h);

    for(adim=1;adim<=h;adim++)
    {
     for(bosluk=h;bosluk>=adim;bosluk--)//bosluk koyma yeri
      {
            printf(" ");
       }
      for(yildiz=1;yildiz<=(adim-1)*2+1;yildiz++)//yildiz koyma yeri
      {
            printf("*");
      }
 
     printf("\n");
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
