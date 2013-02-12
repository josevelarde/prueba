#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
int a,b,c=0,d,i,op;
double t=clock();

do {
	int np=0,na=0;
	printf("\n1._¿hacer una operacion?\n2._Salir\n");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	{
		printf("Ingresar numero A: ");
		scanf("%d",&a);
		printf("Ingresar numero B: ");
		scanf("%d",&b);
		t=clock();
		if(a==0||b==0)
		{
			printf("Ingresar un numero mayor de 0 \n");
		}
		else{
			while(d!=0)
			{
				if(a>b){

				}
				else
					{
					c=a;
					a=b;
					b=c;
					}
				d=a%b;
				for(i=1;i<=1;++i)
				{
					na=na+3;
					np++;
					printf("%d %d %d\n",a,b,d);
					for(int i=0; i<1000;i++);
				}
				if(d==0)
					printf("El MCD es:\n %d\n",b);
				else
					{
					c=a/b;
					a=b;
					b=d;
					}
			}
			t=(clock()-t)/1000;
			printf("\nTiempo transcurrido para completar el programa:%.2f segundos\n",t);
			printf("\nNumero de asignaciones:%d \n",na);
			printf("\nNumero de pasos:%d\n",np);
			    break;
	        }
			case 2:
			   printf("FIN DEL PROGRAMA");
		    break;
				default:
			       printf("Elejir una opcion del menu");
			    }
		    }
	    d=1;
	}while(op!=2);

}
