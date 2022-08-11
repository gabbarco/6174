#include <stdio.h>
#include <math.h>
//Teste: O padrão dos cálculos é que independente do número colocado o resultado final será 6174.

int N1 (int num1) {
  int mil,milhar,milhar2,cent,centena,centena2,dez,dezena,dezena2,i,unidade,a;
  mil=num1*(pow(10,-3)); //Destrincha o número separando seus algarismos
  milhar= mil*1000;
  milhar2= milhar/1000;

  cent=num1*(pow(10,-2));
  centena= (cent*100)-milhar;
  centena2=centena/100;

  dez=num1*(pow(10,-1));
  dezena= (dez*10)-(milhar+centena);
  dezena2=dezena/10;

  unidade= num1-(milhar+centena+dezena);

  if ((unidade==milhar2) & (unidade==centena2) & (unidade==dezena2)) {
    return 1; //para que os 4 algarismos não sejam iguais
  }
  int j,aux;
  int vetor[4]={milhar2,centena2,dezena2,unidade}; 
  for(i=0;i<4;i++){ //aloca os algorismos separados em um vetor de ordem decrescente
    for(j=i+1;j<4;j++){
      if(vetor[i] < vetor[j]){
        aux=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
      }
    }
  }
  mil=(vetor[0]*(pow(10,3))); //multiplica os algarismos do vetor para que possam se somar e formar um número de 4 algarismos

  cent=(vetor[1]*(pow(10,2)));

  dez=(vetor[2]*(pow(10,1)));

  unidade= vetor[3];

  a=mil+cent+dez+unidade;
  
  return a;
}

int N2 (int num1) {
  int mil,milhar,milhar2,cent,centena,centena2,dez,dezena,dezena2,i,unidade,a;
  mil=num1*(pow(10,-3)); //Destrincha o número separando seus algarismos
  milhar= mil*1000;
  milhar2= milhar/1000;

  cent=num1*(pow(10,-2));
  centena= (cent*100)-milhar;
  centena2=centena/100;

  dez=num1*(pow(10,-1));
  dezena= (dez*10)-(milhar+centena);
  dezena2=dezena/10;

  unidade= num1-(milhar+centena+dezena);

  if ((unidade==milhar2) & (unidade==centena2) & (unidade==dezena2)) {
    return 1;
  }
  int j,aux,mil1,cent1,dez1,unidade1;
  int vetor[4]={milhar2,centena2,dezena2,unidade};
  for(i=0;i<4;i++){ //aloca os algorismos separados em um vetor de ordem crescente
    for(j=i+1;j<4;j++){
      if(vetor[i] > vetor[j]){
        aux=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
      }
    }
  }
  mil=(vetor[0]*(pow(10,3))); //multiplica os algarismos do vetor para que possam se somar e formar um número de 4 algarismos

  cent=(vetor[1]*(pow(10,2)));

  dez=(vetor[2]*(pow(10,1)));

  unidade= vetor[3];

  a=mil+cent+dez+unidade;
  
  return a;
}

int N (int a,int b) { //função que opera a diferença entre o resultado das duas funções anteriores
  int x;
  x=a-b;
  return x;
}

int main(void) {
  int mil,milhar,milhar2,cent,centena,centena2,dez,dezena,dezena2,i,unidade,num1,N3,a,b,c,d,e,f,g;
  printf("\nDigite um número de 4 algarismos(Não pode possuir todos os algarismos iguais)(Ex:1234): \n");
  scanf("%d", &num1);
  if (N1(num1)==1 & N2(num1)==1) {
    printf("O número digitado possui todos os algarismos iguais!\n");
  }
  else {
  printf("\n1. ");
  printf("%d-",N1(num1));
  printf("%d=",N2(num1));
  printf("%d",N(N1(num1),N2(num1)));
  a=N(N1(num1),N2(num1)); //diminuir o tamanho do código
  printf("\n2. ");
  printf("%d-",N1(a));
  printf("%d=",N2(a));
  printf("%d",N(N1(a),N2(a)));
  b=N(N1(a),N2(a));
  printf("\n3. ");
  printf("%d-",N1(b));
  printf("%d=",N2(b));
  printf("%d",N(N1(b),N2(b)));
  c=N(N1(b),N2(b));
  printf("\n4. ");
  printf("%d-",N1(c));
  printf("%d=",N2(c));
  printf("%d",N(N1(c),N2(c)));
  d=N(N1(c),N2(c));
  printf("\n5. ");
  printf("%d-",N1(d));
  printf("%d=",N2(d));
  printf("%d",N(N1(d),N2(d)));
  e=N(N1(d),N2(d));
  printf("\n6. ");
  printf("%d-",N1(e));
  printf("%d=",N2(e));
  printf("%d",N(N1(e),N2(e)));
  f=N(N1(e),N2(e));
  printf("\n7. ");
  printf("%d-",N1(f));
  printf("%d=",N2(f));
  printf("%d",N(N1(f),N2(f)));
  g=N(N1(f),N2(f));
  printf("\n8. ");
  printf("%d-",N1(g));
  printf("%d=",N2(g));
  printf("%d",N(N1(g),N2(g)));
  printf("\n");
  }
  return 0;
}