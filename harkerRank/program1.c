// Objetivo

// Este desafio irá ajudá-lo a aprender a tomar um caractere, uma cadeia de caracteres e uma frase como entrada em C.

// Para usar um único caractere  Como entrada, você pode usar e gravar um caractere especificado pelo argumento char para 
// stdoutscanf("%c", &ch );
// printf("%c", ch)

// char ch;
// scanf("%c", &ch);
// printf("%c", ch);
// Este pedaço de código imprime o caractere .

// Você pode usar uma cadeia de caracteres como entrada em C usando . Mas, ele aceita string somente até encontrar o primeiro espaço. scanf(“%s”, s)

// Para tomar uma linha como entrada, você pode usar onde é definido como onde scanf("%[^\n]%*c", s);char s[MAX_LEN] é o tamanho máximo de . Aqui, está o caractere scanset. significa receber entrada 
//até que uma nova linha não seja encontrada. Então, com isso, ele lê o caractere de nova linha e aqui, o usado indica que esse caractere de nova linha é descartado.[]^\n%*c*

// Nota: A instrução: não funcionará porque a última instrução lerá um caractere de nova linha, , da linha anterior. Isso pode ser tratado de várias maneiras. Uma maneira é usar antes da última declaração. scanf("%[^\n]%*c", s);\nscanf("\n");

// Tarefa

// Você tem que imprimir o personagem, , na primeira linha. Em seguida, imprima na próxima linha. Na última linha imprima a frase, .

// Formato de entrada

// Primeiro, pegue um personagem,  como entrada.
// Em seguida, pegue a cadeia de caracteres, como entrada.
// Por fim, tome a frase  como entrada.

// Restrições

// Strings para e  terá menos de 100 caracteres, incluindo a nova linha.

// Formato de saída

// Imprima três linhas de saída. A primeira linha imprime o caractere, .
// A segunda linha imprime a cadeia de caracteres, .
// A terceira linha imprime a frase, .

// Entrada de amostra 0

// C
// Language
// Welcome To C!!
// Saída de amostra 0

// C
// Language
// Welcome To C!!


int main(int argc, char const *argv[])
{
    char caractere;
    char cadeia[100];
    char frase[100];

    scanf("%c" , &caractere);
    scanf("%s",cadeia);
    scanf(" %[^\n]s", frase);

    printf("%c\n", caractere);
    printf("%s\n", cadeia);
    printf("%s\n", frase);
    return 0;
}
