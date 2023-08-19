//* (Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que o quilowatt de energia custa um 
//* milésimo  do  salário  mínimo.  Faça  um  procedimento  que  receba  o  valor  do  salário 
//* mínimo  e  quantidade  de  quilowatts  consumida  por  uma  residência.  O  procedimento 
//* deve calcular e retornar através de passagem de parâmetros por referência: 

//*  a) o valor, em reais, de cada quilowatt; 
//*  b) o valor, em reais, a ser pago por essa residência; 
//*  c) o valor, em reais, a ser pago com desconto de 15%. 

//* Sabendo  disso,  desenvolva  um  algoritmo  que  peça  para  o  usuário  inserir  o  valor  do 
//* procedimento e mostre, na tela, as informações dos itens a), b) e c).
//* salário mínimo e a quantidade de quilowatts consumida. Invoque o respectivo 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//! Variáveis de referência levam o asterisco durante o uso nos parâmetros e durante as operações realizadas dentro da função
void CalcKW(float v_sal, float q_kw, float *v_kw, float *v_pag, float *v_desc){
    *v_kw = v_sal / 1000;
    *v_pag = *v_kw * q_kw;
    *v_desc = *v_pag * 0.85; //? Multiplicando o valor total do pagamento por 0.85 para obter o desconto de 15%
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float val_sal, qtde_kw, val_kw, val_pag, val_desc;
    printf("Informe o valor do salário:\n");
    scanf("%f", &val_sal);
    printf("Informe a quantidade de kilowatts:\n");
    scanf("%f", &qtde_kw);
    //! Ao invocar a função com as variáveis de referência é necessário se utilizar o Ampersand &, para apontar para o endereço das variáveis que serão alteradas durante a execução da função
    CalcKW(val_sal, qtde_kw, &val_kw, &val_pag, &val_desc);
    printf("Preço por kilowatt: R$%.2f\n", val_kw);
    printf("Valor a ser pago: R$%.2f\n", val_pag);
    printf("Valor a ser pago com desconto de 15%%: R$%.2f\n", val_desc);

}