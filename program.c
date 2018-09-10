#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void menu();
void fator();
void primo();
void nprimo();
int notc();
int notr();
void ano();
void media();
void mediapond();
void matx();
int main() {
    menu();
    return 0;
}
void menu() {
	int m = 1;
    while(m!=0) {
        printf("Digite de 1 a 9, 0 para sair: ");
        scanf("%d", &m);
        switch(m) {
            case 0:
                return;
            case 1:
                printf("Opcao 1\n");
				fator();
                break;
            case 2:
                printf("Opcao 2\n");
                primo();
				break;
			case 3:
			    printf("Opção 3\n");
				nprimo();
				break;
			case 4:
                printf("Opcao 4\n");
				notc();
                break;
            case 5:
                printf("Opcao 5\n");
				notr();
                break;
			case 6:
			    printf("Opção 6\n");
				ano();
				break;
			case 7:
                printf("Opcao 7\n");
				media();
                break;
            case 8:
                printf("Opcao 8\n");
				mediapond();
                break;
			case 9:
			    printf("Opção 9\n");
				matx();
				break;	
				 
			default:
                printf("Opcao invalida.\n");
        }
        
    }
}

void fator() {
	 int f,n;
	 printf("Insira um número que ira retornar o fatorial dele:");
	 scanf("%d",&f);
	 for (n = 1; f > 0; f--){
		 n *= f;
	 }	  
	 printf("O fatorial do número digiado é : %d",n);
	 return ; 
}

void primo() {
	 int n,f;
	 int cont = 0;
	 printf("Digite um número para saber se ele é primo ou não : ");
	 scanf("%d",&n);
	 if( n == 1){
	    printf("%d é primo\n", n);
	 }
	 else{
		 for(f = 1; f <= (n/2); f++){
			 if(n % f == 0) {
				 cont++;
			 }
		 }
		 if (cont == 1){
			 printf("%d é primo\n",n);
		 }
		 else{
			 printf("%d não é primo\n",n);
		 }
	 }
	 return;
}

void nprimo() {
	 int n,f;
	 do{
	 int cont = 0;
	 printf("Digite um número para saber se ele é primo ou não : ");
	 scanf("%d",&n);
	 if( n == 1){
	    printf("%d é primo\n", n);
	 }
	 else{
		 for(f = 1; f <= (n/2); f++){
			 if(n % f == 0) {
				 cont++;
			 }
		 }
		 if (cont == 1){
			 printf("%d é primo\n",n);
		 }
		 else{
			 printf("%d não é primo\n",n);
		 }
	 }
	 }while(n != 0);
	 return;
}
 
int notc() {
	int n;
	float s;
	double w;
	printf("Digite dois números , um decimal e o outro inteiro :");
	scanf("%f %d",&s,&n);
	w = pow(s,n); 
	printf("O resultado é : %.5e \n",w);
	return 0;
}

int notr() {
	
	int n;
	float s;
	double w;
	printf("Digite dois números , um decimal e o outro inteiro :");
	scanf("%f %d",&s,&n);
	w = sqrt(s/n); 
	printf("O resultado é : %.5e \n",w);
	return 0;
}

void ano() {
	int a;
	printf("Informe o ano:");
	scanf("%d",&a);
	if( a % 4 == 0){
		printf(" O ano é bissexto \n");
	}
	else{
		printf(" O ano não é bissexto \n");
    }
    return 0;
}

void media() {
	 float n1,n2,med;
	 printf("Informe duas notas validas para ser calculada a media :");
	 scanf("%f %f",&n1,&n2);
	 if(n1 >= 0.0 && n1 <= 10.0){
		 if(n2 >= 0.0 && n2 <= 10.0){
		 med = (n1 + n2)/2;
		 printf("A media do aluno é : %f \n",med);
		 }
	 }	 
	 else{
		printf("Notas invalidas");
		return;
	 }	
}	

void mediapond() {
	float n1,n2,n3,med;
	 printf("Informe tres notas para ser calculada a media , sendo que a terceira tem peso 2 ,e a primeira e segunda peso 1:");
	 scanf("%f %f %f",&n1,&n2,&n3);
	 med = (n1*1 + n2*1 + n3*2)/4;
	 printf("A media do aluno foi : %f \n",med);	 
	 if(med >= 60){
		printf("O aluno foi aprovado \n"); 
	 }	 
	 else{
		printf("O aluno foi reprovado \n");
		
	 }	
	 return 0;
}	

void matx() {
	int m;
	m = 1810021871;
	printf("O nome do aluno é Arthur Marques de Oliveira e sua matricula é : %x \n",m);
	return;
}
	
	
	
