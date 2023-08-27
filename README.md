# Métodos de Ordenação

Este documento fornece uma visão geral dos diferentes métodos de ordenação, algoritmos que organizam um conjunto de elementos em uma ordem específica. Cada método possui suas próprias características, eficiência e cenários de uso.

## Métodos Disponíveis

O repositório inclui implementações dos seguintes métodos de ordenação:

1. **Bubble Sort:** Descrição do Bubble Sort e suas características.
   #include <stdio.h>

```c
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

2. **Insertion Sort:** Explicação do Insertion Sort e seus pontos fortes.
3. **Selection Sort:** Como o Selection Sort funciona e onde pode ser útil.
4. **Merge Sort:** O Merge Sort e sua abordagem de dividir e conquistar.
5. **Quick Sort:** Detalhes sobre o Quick Sort e suas variações.
6. **Heap Sort:** Descrição do Heap Sort e sua estrutura de dados subjacente.
7. **Counting Sort:** Como o Counting Sort lida com valores inteiros limitados.
8. **Bucket Sort:** Explicação do Bucket Sort e quando é eficaz.
9. **Radix Sort:** Como o Radix Sort ordena dígitos individualmente.
10. **Tim Sort:** Características do Tim Sort e seu desempenho em casos reais.
11. **Shell Sort:** O Shell Sort e sua melhoria em relação ao Insertion Sort.
12. **Natural Merge Sort:** Como o Natural Merge Sort lida com listas parcialmente ordenadas.
13. **Ordenação Externa:** Métodos para ordenar conjuntos de dados que não cabem na memória.
14. **Ordenação Estável vs. Não Estável:** Explicação da estabilidade na ordenação.
15. **Escolhendo o Método Adequado:** Considerações para escolher o método certo.

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

