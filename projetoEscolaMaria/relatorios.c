#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "pessoa.h"
#include "disciplinas.h"
#include "relatorios.h"
#include "geral.h"

int menuRelatorios(){
    
    int opcao, sair = 0;

    while (!sair) {
    printf("Menu de relatorios\n\n");
    printf("0 - Voltar\n");
    printf("1 - Listar alunos\n");
    printf("2 - Listar professores\n");
    printf("3 - Listar disciplinas\n");
    printf("Informe sua opcao:\n");
    scanf("%d", &opcao);
    getchar();
    limparTela();
    
    switch(opcao){     
    case 0:
    printf("Voltando ao menu principal...\n");
    sair = 1;
    break;
    case 1:
    listarAluno();
    break;
    case 2:
    listarProfessor();
    break;
    case 3:
    listarDisciplina();
    break;
    default:
    printf("Opcao Invalida!\n");
    break;
}
    }   
}

void listarAluno(){
    if(qtdAlunos == 0){
        printf("Nao ha alunos!\n");
    } else {
        for(int i = 0; i < qtdAlunos; i++){
        printf("%d\n", listaAlunos[i].matricula);
        printf("%s\n", listaAlunos[i].nome);
        printf("%c\n", listaAlunos[i].sexo);
        printf("-------------------------\n\n");
        }
    }
}

void listarProfessor(){
    if(qtdProfs == 0){
        printf("Nao ha professores!\n");
    } else {
        for(int i = 0; i < qtdProfs; i++){
        printf("%d\n", listaProf[i].matricula);
        printf("%s\n", listaProf[i].nome);
        printf("%c\n", listaProf[i].sexo);
        printf("-------------------------\n\n");
        }
    }
}

void listarDisciplina(){
    if(qtdDisciplinas == 0){
        printf("Nao ha disciplinas cadastradas!\n");
    } else {
        for(int i = 0; i < qtdDisciplinas; i++){
        printf("%d\n", listaDisciplinas[i].codigo);
        printf("%s\n", listaDisciplinas[i].nome);
        printf("%c\n", listaDisciplinas[i].semestre);
        printf("-------------------------\n\n");
        }
    }
}