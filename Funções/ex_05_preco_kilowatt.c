//* (Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que o quilowatt de energia custa um 
//* mil�simo  do  sal�rio  m�nimo.  Fa�a  um  procedimento  que  receba  o  valor  do  sal�rio 
//* m�nimo  e  quantidade  de  quilowatts  consumida  por  uma  resid�ncia.  O  procedimento 
//* deve calcular e retornar atrav�s de passagem de par�metros por refer�ncia: 

//*  a) o valor, em reais, de cada quilowatt; 
//*  b) o valor, em reais, a ser pago por essa resid�ncia; 
//*  c) o valor, em reais, a ser pago com desconto de 15%. 

//* Sabendo  disso,  desenvolva  um  algoritmo  que  pe�a  para  o  usu�rio  inserir  o  valor  do 
//* procedimento e mostre, na tela, as informa��es dos itens a), b) e c).
//* sal�rio m�nimo e a quantidade de quilowatts consumida. Invoque o respectivo 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//! Vari�veis de refer�ncia levam o asterisco durante o uso nos par�metros e durante as opera��es realizadas dentro da fun��o
void CalcKW(float v_sal, float q_kw, float *v_kw, float *v_pag, float *v_desc){
    *v_kw = v_sal / 1000;
    *v_pag = *v_kw * q_kw;
    *v_desc = *v_pag * 0.85; //? Multiplicando o valor total do pagamento por 0.85 para obter o desconto de 15%
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    float val_sal, qtde_kw, val_kw, val_pag, val_desc;
    printf("Informe o valor do sal�rio:\n");
    scanf("%f", &val_sal);
    printf("Informe a quantidade de kilowatts:\n");
    scanf("%f", &qtde_kw);
    //! Ao invocar a fun��o com as vari�veis de refer�ncia � necess�rio se utilizar o Ampersand &, para apontar para o endere�o das vari�veis que ser�o alteradas durante a execu��o da fun��o
    CalcKW(val_sal, qtde_kw, &val_kw, &val_pag, &val_desc);
    printf("Pre�o por kilowatt: R$%.2f\n", val_kw);
    printf("Valor a ser pago: R$%.2f\n", val_pag);
    printf("Valor a ser pago com desconto de 15%%: R$%.2f\n", val_desc);

}