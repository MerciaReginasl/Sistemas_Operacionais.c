//O código foi escrito baseando-se no exemplo mostrado no vídeo para uma compreensão facilitada
//Pessoas pagando contas em um caixa que só permite certo numero de contas

#include <stdlib.h> 
#include <stdio.h>  

#define tam 30 //número máximo de pessoas

int pessoas[tam];           //Fila de pessoas
int NumEscolhidoPessoas;
int quantum;                //Numero de contas pra pagar no caixa

 

void contas(){       //Para que o usuario possa testar com diferentes quantidades de contas

    int numero;
    int i;

    for (i=1; i<=NumEscolhidoPessoas; i++){
        printf("\nDigite o numero de contas a pagar da pessoa %d:", i);
        scanf("%d", &numero);               //Leitura de valor inserido pelo usuario
        pessoas[i]= numero;                 //cada pessoa recebe o valor informado
    }

}

void fila(){

    int contadorFila=NumEscolhidoPessoas;            //contagem de pessoas que estão na fila
    int frenteFila = 1;                 //Primeira posição da fila

    while(contadorFila !=0){
        while(pessoas[frenteFila] <= 0){ //Tira pessoas que não tem contas da primeira posição
            frenteFila++;
            if(frenteFila>= NumEscolhidoPessoas) //Faz a rotação
                frenteFila=0;

        }

        printf("\n\nA pessoa %d vai para o caixa com %d contas", frenteFila , pessoas[frenteFila]);
        printf("\nPaga ate %d contas", quantum);

        pessoas[frenteFila] = pessoas[frenteFila] - quantum;        //Pagamento de quantum contas
        if( pessoas[frenteFila]<=0){

            printf("\nE sai da fila.\n");
            contadorFila--;

        }

        else{

            printf("\nE vai pro final da fila com %d contas restantes.\n", pessoas[frenteFila]);

        }

        frenteFila++;                               //Atualiza primeira posição
            if(frenteFila>NumEscolhidoPessoas)    //Faz a rotação
                frenteFila=0;

        system("PAUSE");
        
        }
        
}

main(){

    printf("::::::: Programa exemplo sobre round-robin :::::::");
    printf("\nDigite o numero maximo de contas a pagar no caixa (quantum): ");

    scanf("%d", &quantum);
    printf("\nDigite o numero de pessoas na fila: ");
    scanf("%d", &NumEscolhidoPessoas);

    contas();

    fila();
    printf("\n\n::::::::: Fim ::::::::::\n");
    getch();

}

===============================================
        
 //Função sleep
 
 public class SleepTest {
    
    

    private static final Lock lock = new ReentrantLock();

    public static void main(String[] args) throws InterruptedException {
    
    
        Thread threadA = new Thread(new Runnable(){
    
    
            public void run(){
    
    
                lock.lock(); // 获取独占锁
                try{
    
    
                    System.out.println("child threadA is in sleep");
                    Thread.sleep(2000);
                    System.out.println("child threadA is awaked");
                }catch (InterruptedException e) {
    
    
                    e.printStackTrace();
                }finally {
    
    
                    lock.unlock(); // 释放锁
                }
            }
        });

        Thread threadB = new Thread(new Runnable(){
    
    
            public void run(){
    
    
                lock.lock(); // 获取独占锁
                try{
    
    
                    System.out.println("child threadB is in sleep");
                    Thread.sleep(2000);
                    System.out.println("child threadB is awaked");
                }catch (InterruptedException e) {
    
    
                    e.printStackTrace();
                }finally {
    
    
                    lock.unlock(); // 释放锁
                }
            }
        });

        // 启动线程
        threadA.start();
        threadB.start();
    }
}

=================================================
//função strtok()


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[50] = {"Bom!dia.simpatia Bom dia"};
    char *pt;

    pt = strtok(palavra, "!. ");
    while(pt){
        printf("token: %s\n", pt);
        pt = strtok(NULL, "!. ");
    }

    return 0;
}
