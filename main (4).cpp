/******************************************************************************
 
 Considere uma matriz de 5 linhas e 3 colunas contendo as seguintes informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
• Primeira coluna: número de matrícula
• Segunda coluna: média de provas
• Terceira coluna: média de trabalhos
Elabore algoritmos para:
I -imprimir as matrículas.
II - calcular a média final de cada aluno (media trabalhos *0,3 + media provas * 0,7).
III - determinar o aluno com a maior média final.
IV - calcular a média das médias dos trabalhos.



*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    int A[5][3] = {{1,5,4},
                  {3,7,10},
                  {6,7,8},
                  {4,5,6},
                  {4,6,7}};
                  
   
   cout << "matrículas" << endl;
   for(int i = 0; i<5; i++){
       cout << A[i][0] << " " << endl;}
       
   cout << "media final" << endl;
   for(int i = 0; i<5; i++){
       double conta1 = A[i][2] * 0.3;
       double conta2 = A[i][1] * 0.7;
       double soma = conta1+conta2;
       A[i][2] =soma;
    cout << endl << soma << " " << endl; 
}
 int maior_media = 0;
 for(int i = 1; i<5; i++){
     if(A[i][2]>A[maior_media][2]){
         maior_media = i;
         
     }
 }
 cout  << endl << "o aluno da matrícula " << A[maior_media][0] << " teve a maior média, que foi: " << A[maior_media][2] << endl;
 
   
   
    double m1 = A[0][2];
    double m2 = A[1][2];
    double m3 = A[2][2];
    double m4 = A[3][2];
    double m5 = A[4][2];

    double media = (m1 + m2 + m3 + m4 + m5) / 5;
    cout << "A média dos trabalhos é: " << media << endl;

    return 0;
}

