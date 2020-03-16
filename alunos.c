#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[10];
};

int main (void){
    
    void leitura (int n, struct aluno lista[]);
    void mostrar (int x, struct aluno lista[]);
    struct aluno *listaAlunos[10];
    int x,n;

    printf("Digite a quantidade de alunos que deseja inserir: \n");
    scanf("%i",&n);

    leitura (n,listaAlunos);

    printf ("Digite posicao do vetor que deseja saber as informacoes do aluno ou digite -1 para mostrar os dados de todos os alunos: \n");
    scanf("%i",&x);
    mostrar (x,listaAlunos);

    

    return 0;
}

void leitura (int n, struct aluno *lista){
    for (int  i = 0;i<n;i++){
        printf("Digite a matricula do aluno: \n");
        scanf("%i", &lista[i].matricula);
        printf("Digite o nome do aluno: \n");
        scanf("%s",&lista[i].nome);
    }
}
void mostrar (int x, struct aluno *lista){ 
    if(x == -1){
        for (int i = 0;i<2;i++){
        printf("--------------\n");
        printf("%i\n",lista[i].matricula);
        printf("%s\n",lista[i].nome);
    } 
    } else {
        printf("--------------\n");
        printf("%i\n",lista[x].matricula);
        printf("%s\n",lista[x].nome);
        printf("--------------\n");
    }    
}
/* void aloca (int n, struct aluno *lista){
    for(int i = 0;i<n;i++){
        lista[i] = (struct aluno *) malloc (sizeof(struct aluno));
    }
}
*/