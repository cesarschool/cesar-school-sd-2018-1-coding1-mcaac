#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
   int repetida;
    int inicio=0;
    int teste=0;

    for (inicio=0 ; inicio < length; inicio++) {
        repetida=0;
        for (teste=0 ; teste < length; teste++) {
            if(inicio!=teste){
                if (sentence[inicio]== sentence[teste]) {
                    repetida++;
                }
              }
            else{
                repetida= repetida+0;
            }
       }
        if (repetida==0) {
            printf("A primeira letra não repetida é '%c'\n",sentence[inicio]);

            break;
                }
        }
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    
    return 0;
}
