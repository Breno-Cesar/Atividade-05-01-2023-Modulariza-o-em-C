#include <stdio.h>

lerNumeroPar() {
    int n;
    do
    {
        printf("Digite um numero par: ");
        scanf("%d", &n);
    } while (n%2!=0);
    return n;
}
analiseNumPerfeito(int n){
    int soma=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            soma+=i;
        }
        
    }
    return soma==n;
}
int main(){
    int n = lerNumeroPar();
    if (analiseNumPerfeito(n))
    {
        printf("O numero %d e numero perfeito/n", n);
    }
        else{
         printf("O numero %d nao e numero perfeito", n);
        }
    return 0;  
}
    
