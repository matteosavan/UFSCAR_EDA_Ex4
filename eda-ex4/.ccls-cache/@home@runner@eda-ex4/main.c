#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef struct node_ {
	int data;
	struct node_ *dir, *esq;
} node;

node* inserir( node* p, int dados ) {
    if(!p){ //se a raiz (somente a raiz) ainda não existir, temos que criar ela e configurar ela tbm 
      node *novo_no = (node*)malloc(sizeof(node));
      novo_no->dir=NULL;
      novo_no->esq=NULL;
      novo_no->data=dados;
      return novo_no;
    }
    else{ //a raiz existe, então temos que buscar onde o elemento deveria estar e inserir ele lá
      if(dados<p->data){ //se o dado é menor que o dado do nó
        p->esq = inserir(p->esq, dados);
      }
      else{ //se o dado é maior que o dado do nó
        p->dir = inserir(p->dir, dados);
      }
      return p; //retorna a raiz com o dado em seu devido lugar
    }
  
}

void destruir( node *p ) {
    // implementar
}

void pos_order( node *p, void (*process)(int dado) ) {
    // implementar
}

void pre_order( node *p, void (*process)(int dado) ) {
    // implementar
}

void in_order( node *p, void (*process)(int dado) ) {
    // implementar
}

void in_level( node *p, void (*process)(int dado) ) {
	queue q;
	
    // implementar
}

void print(int dado) {
	printf(" %d", dado);
}

int main() {

	int n,a;
	scanf("%d", &n);
	
	node* raiz = 0;
	
	for(int i=0;i<n; i++) {
		scanf("%d", &a);
		raiz = inserir(raiz,a);
	}

  ////////////////////////extra:
  printf("dado da raiz é: %d\n", raiz->data);
  printf("dado esq da raiz é: %d\n", raiz->esq->data);
  printf("dado dir da raiz é: %d\n", raiz->dir->data);
  printf("dado esqesq da raiz é: %d\n", raiz->esq->esq->data);
  printf("dado dirdir da raiz é: %d\n", raiz->dir->dir->data);
  //printf("dado esq da raiz é: %d\n", raiz->esq->data);
//teste: 
  /*
5
4 3 5 2 6
  */
  ///////////////////////
	
	printf("Pr.:");
	pre_order(raiz, print);
	printf("\n");
	printf("In.:");
	in_order(raiz, print);
	printf("\n");
	printf("Po.:");
	pos_order(raiz, print);
	printf("\n");
	printf("Ni.:");
	in_level(raiz, print);
	printf("\n");
	
	destruir(raiz);
	
	return 0;
}