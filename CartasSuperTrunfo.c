#include <stdio.h>


int main() {
    
    char estado1, estado2; //Deve ser escolhida uma letra de 'A' a 'H' (representando um dos oito estados) para ambas as cartas
    char codigo1[4], codigo2[4]; //O código deve ser letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome1[30], nome2[30]; //O nome da cidade para as cartas (Deve ser um nome composto por apenas uma palavra)
    int populacao1, populacao2;
    float area1, area2; //em quilometros quadrados
    float pib1, pib2; //Produto Interno Bruto
    int pt1, pt2; // quantidade de pontos turisticos

    printf("Bem-vindo a este jogo de Super Trunfo! \nMas antes de tudo, precisamos registrar a sua primeira carta! \n");
    printf("Agora, Digite uma letra de 'A' a 'H' para representar o Estado (lembre-se de não repetir a letra na próxima carta): \n");
    scanf(" %c" , &estado1);

    printf("Ótimo! Agora você deve inserir um código para o Estado!\n");
    printf("O código deve ser uma letra seguida de um número de 01 a 04 (Por exemplo: A01, B03, etc) e também deve ser único:\n");
    scanf(" %s" , &codigo1);

    printf("Perfeito! Agora devemos digitar o nome de uma cidade pertencente ao Estado escolhido\n");
    printf("Por favor, digite o nome da cidade (O nome deve ser composto por apenas uma única palavra:)\n");
    scanf(" %s" , &nome1);
    
    printf("Incrível! Agora você deve prover a informação de quantos habitantes essa cidade possui\n");
    printf("Digite a quantidade de habitantes atual da cidade escolhida:\n");
    scanf(" %d" , &populacao1);
    
    printf("Excelente! Agora você precisa escrever a área em quilômetros quadrados pertencente á cidade\n");
    printf("Por favor digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f" , &area1);

    printf("Estamos quase lá! Agora prossiga em digitar o PIB mais recente publicado da cidade\n");
    printf("Por favor, digite o PIB da cidade:\n");
    scanf(" %f" , &pib1);

    printf("Bom! Antes de prosseguir para o próxima carta, escreva a quantidade de pontos turísticos presentes na cidade\n");
    printf("Escreva a quantidade de pontos turísticos presentes na cidade:\n");
    scanf(" %d" , &pt1);//Aqui foi finalizada a criação da primeira carta

    printf("Maravilha! Agora prosseguiremos para a criação da segunda carta, vamos lá!\n");
    printf("Agora, Digite uma letra de 'A' a 'H' para representar o Estado (lembre-se de não repetir a letra da carta anterior): \n");
    scanf(" %c" , &estado2);

    printf("Boa! Agora você deve inserir um código para o Estado!\n");
    printf("O código deve ser uma letra seguida de um número de 01 a 04 (Por exemplo: A01, B03, etc) e também deve ser único:\n");
    scanf(" %s" , &codigo2);

    printf("Bem feito! Agora devemos digitar o nome de uma cidade pertencente ao Estado escolhido\n");
    printf("Por favor, digite o nome da cidade (O nome deve ser composto por apenas uma única palavra:)\n");
    scanf(" %s" , &nome2);
    
    printf("Continue assim! Agora você deve prover a informação de quantos habitantes essa cidade possui\n");
    printf("Digite a quantidade de habitantes atual da cidade escolhida:\n");
    scanf(" %d" , &populacao2);
    
    printf("Muito bom! Agora você precisa escrever a área em quilômetros quadrados pertencente á cidade\n");
    printf("Por favor digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f" , &area2);

    printf("Estamos quase lá! Agora prossiga em digitar o PIB mais recente publicado da cidade\n");
    printf("Por favor, digite o PIB da cidade:\n");
    scanf(" %f" , &pib2);

    printf("Última pergunta! Antes de prosseguir para a comparação de cartas, escreva a quantidade de pontos turísticos presentes na cidade\n");
    printf("Escreva a quantidade de pontos turísticos presentes na cidade:\n");
    scanf(" %d" , &pt2);//Aqui foi a finalização da segunda carta

    printf("Tudo pronto! Agora veremos os resultados das cartas apresentadas, está pronto? vamos la! \n");
    printf("\n");
    printf("Carta1:\n");
    printf("Estado: %c\n" , estado1);
    printf("Código: %s\n" , codigo1);
    printf("Nome da cidade: %s\n" , nome1);
    printf("População: %d\n" , populacao1);
    printf("Área: %.2f km²\n" , area1);
    printf("PIB: %.2f\n" , pib1);
    printf("Número de pontos turísticos: %d\n" , pt1);

    printf("\n");

    printf("Carta2:\n");
    printf("Estado: %c\n" , estado2);
    printf("Código: %s\n" , codigo2);
    printf("Nome da cidade: %s\n" , nome2);
    printf("População: %d\n" , populacao2);
    printf("Área: %.2f km²\n" , area2);
    printf("PIB: %.2f\n" , pib2);
    printf("Número de pontos turísticos: %d\n" , pt2);



    return 0;
}
