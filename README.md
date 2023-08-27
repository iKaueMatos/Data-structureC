# Métodos de Ordenação

Este documento fornece uma visão geral dos diferentes métodos de ordenação, algoritmos que organizam um conjunto de elementos em uma ordem específica. Cada método possui suas próprias características, eficiência e cenários de uso.

## Métodos Disponíveis

O repositório inclui implementações dos seguintes métodos de ordenação:

1. **Bubble Sort:** O Bubble Sort é um método simples de ordenação. Ele percorre a lista várias vezes, comparando pares de elementos adjacentes e trocando-os se estiverem fora de ordem. Esse processo é repetido até que nenhum elemento precise mais ser trocado. Apesar de sua simplicidade, o Bubble Sort tem uma baixa eficiência para listas grandes.

```c
   #include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array antes da ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Array após a ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

2. **Insertion Sort:** O Insertion Sort funciona da mesma forma que organizaríamos um baralho de cartas: um elemento é removido da lista não ordenada e inserido na posição correta na lista ordenada. Ele é eficiente para pequenas listas ou para situações em que a lista já está quase ordenada.

```c
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array antes da ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Array após a ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
```
3. **Selection Sort:** O Selection Sort seleciona repetidamente o menor elemento da lista não ordenada e o coloca no início da lista ordenada. A cada passo, o menor elemento é identificado e trocado com o elemento na posição atual de iteração. Apesar de sua simplicidade, o Selection Sort também é ineficiente para listas grandes.
4. **Merge Sort:** O Merge Sort é um algoritmo de ordenação recursivo que divide a lista em sublistas menores, ordena cada sublista e depois mescla as sublistas ordenadas para obter a lista final ordenada. É um método eficiente e estável, adequado para listas de tamanho moderado.
5. **Quick Sort:** O Quick Sort é outro algoritmo de ordenação recursivo que seleciona um elemento como "pivot" e rearranja a lista de forma que todos os elementos menores que o pivot estejam à esquerda e os maiores à direita. Esse processo é repetido recursivamente nas sublistas resultantes. O Quick Sort é geralmente rápido e eficiente, mas pode ser afetado pelo pior caso em algumas implementações.
6. **Heap Sort:** O Heap Sort organiza os elementos como uma estrutura de dados chamada heap, que é uma árvore binária especial. Os elementos são inseridos na heap e, em seguida, removidos um por um na ordem desejada. O Heap Sort é eficiente e tem uma complexidade de tempo previsível, mas pode ser menos intuitivo de implementar do que outros métodos.
7. **Counting Sort:** O Counting Sort é eficiente quando a faixa de valores a serem ordenados é pequena em relação ao tamanho da lista. Ele conta o número de elementos menores ou iguais a cada valor possível e, em seguida, usa essas contagens para posicionar cada elemento na posição correta na lista ordenada.
8. **Bucket Sort:** O Bucket Sort é adequado quando os valores a serem ordenados estão uniformemente distribuídos. Ele distribui os elementos em "baldes" com intervalos específicos, ordena cada balde individualmente e, em seguida, combina os baldes ordenados para obter a lista final ordenada.
9. **Radix Sort:** O Radix Sort ordena os elementos considerando cada dígito individualmente, do dígito menos significativo para o mais significativo. Ele pode ser utilizado para ordenar inteiros, strings ou outros tipos de dados que possam ser decompostos em dígitos.
Cada método de ordenação tem suas próprias vantagens e desvantagens, e a escolha do método certo depende do contexto e dos requisitos específicos do problema a ser resolvido. É importante considerar a eficiência e a estabilidade do método, bem como o tamanho dos dados a serem ordenados.
10. **Tim Sort:** O Tim Sort é uma variação do Merge Sort que visa combinar os benefícios do Merge Sort e do Insertion Sort. Ele divide a lista em blocos pequenos, ordena esses blocos usando o Insertion Sort e, em seguida, mescla os blocos de maneira eficiente usando o Merge Sort. O Tim Sort é usado em várias linguagens de programação modernas devido à sua eficiência e desempenho em muitos casos.
11. **Shell Sort:** O Shell Sort é uma extensão do Insertion Sort que compara elementos distantes uns dos outros e, gradualmente, reduz o intervalo entre os elementos a serem comparados. Isso ajuda a mover elementos maiores para posições corretas mais rapidamente, melhorando a eficiência do algoritmo em comparação com o simples Insertion Sort.
12. **Natural Merge Sort:** O Natural Merge Sort é utilizado para ordenar listas que já estão parcialmente ordenadas. Ele identifica as subsequências ordenadas na lista e mescla essas subsequências de forma eficiente, minimizando a quantidade de operações necessárias.
13. **Ordenação Externa:** Os métodos de ordenação mencionados até agora lidam com listas que podem ser mantidas inteiramente na memória. No entanto, quando se trata de ordenar grandes volumes de dados que não cabem na memória principal, é necessário utilizar algoritmos de ordenação externa. Esses algoritmos, como o External Merge Sort, fazem uso de leituras e gravações em disco para organizar os dados.
14. **Ordenação Estável vs. Não Estável:** Alguns métodos de ordenação são estáveis, o que significa que eles preservam a ordem relativa dos elementos iguais. Outros métodos não são estáveis, o que significa que a ordem relativa dos elementos iguais pode ser alterada após a ordenação. A estabilidade é importante em certos casos, como quando você precisa ordenar por vários critérios em sequência.
15. **Escolhendo o Método Adequado:** A escolha do método de ordenação adequado depende das características dos dados a serem ordenados, como tamanho da lista, distribuição dos valores, necessidade de estabilidade e restrições de memória. É importante analisar as propriedades do problema antes de decidir qual método utilizar, buscando o equilíbrio entre eficiência e facilidade de implementação.
Lembre-se de que muitas linguagens de programação já possuem funções ou bibliotecas que implementam esses métodos de ordenação de maneira otimizada, então, em muitos casos, você não precisará implementá-los do zero.

## Escolhendo um Método

A seleção do método de ordenação adequado depende das características dos dados e dos requisitos do problema. Leve em consideração o tamanho da lista, a distribuição dos valores e a necessidade de estabilidade. Muitas linguagens de programação possuem bibliotecas com implementações otimizadas de métodos de ordenação.

## Como Usar

1. Escolha o método de ordenação apropriado com base no seu caso de uso.
2. Navegue até o diretório correspondente para ver a implementação e a explicação detalhada.
3. Você pode usar as implementações como referência ou integrá-las aos seus projetos.

## Contribuição

Se você quiser contribuir, sinta-se à vontade para adicionar mais métodos de ordenação, otimizações ou exemplos de uso. Certifique-se de seguir as diretrizes de contribuição do repositório.

## Licença

Sem licença ...

