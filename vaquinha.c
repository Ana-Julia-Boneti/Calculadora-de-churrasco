#include <stdio.h>
//Variável global
float totalArrecadado

//Procedimento: adiciona a contribuição de um participante 
void adicionaContribuiçao(float valor){
    totalArrecadado += valor;
    printf("Contribuição de R$ %.2f adicionada! Total:R$ %.2f", totalArrecadado);
}

//Função: Calcula quantidade de carne por pessoas (0.5KG por pessoa)

float calculaCarne (int qtdPessoas){
    return qtdpessoas * 0.5;
}

//Procedimento para mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas);
    float media = totalArrecadado / qtdPessoas;
    printf("\n==== RESUMO CHURRASCO ====");
    printf("Participantes: %d\n",qtdPessoas);
    printf("Carne necessária : %.2f KG\n")




}


int main(){
 int pessoas;
 float valores;

 printf("Digite o número de participantes: ");
 scanf("%d",&pessoas);

mostraResumo(pessoas);

}

