// Objetivo

// Os tipos de dados fundamentais em c são int, float e char. Hoje, estamos discutindo os tipos de dados int e float.
// A função imprime a instrução fornecida no console. A sintaxe é . Na função, se estamos usando um inteiro, caractere, string ou float como argumento, então no formato string temos que escrever (inteiro), (caractere), (string), (float) respectivamente.printf()printf("format string",argument_list);%d%c%s%f
// A função lê os dados de entrada do console. A sintaxe é . Por exemplo: A instrução lê o número inteiro do console e armazena o valor fornecido na variável scanf()scanf("format string",argument_list);scanf("%d",&number).
// Para inserir dois inteiros separados por um espaço em uma única linha, o comando é , onde e são os dois inteiros.scanf("%d %d", &n, &m)

// Tarefa

// Sua tarefa é tomar dois números do tipo de dados int, dois números do tipo de dados float como entrada e saída de sua soma:

// Declarar variáveis: duas do tipo int e duas do tipo float. 
// Leia as linhas de entrada do stdin (de acordo com a sequência dada na seção 'Formato de entrada' abaixo) e inicialize suas variáveis. 
// Use o operador e para executar as seguintes operações: 
// Imprima a soma e a diferença de duas variáveis int em uma nova linha.
// Imprima a soma e a diferença de duas variáveis flutuantes arredondadas para uma casa decimal em uma nova linha.
// Formato de entrada

// A primeira linha contém dois inteiros.
// A segunda linha contém dois números de ponto flutuante.

// Restrições

//  variáveis inteiras 
//  variáveis float 
// Formato de saída

// Imprima a soma e a diferença de ambos os inteiros separados por um espaço na primeira linha, e a soma e a diferença de ambos os flutuadores (dimensionados para casa decimal) separados por um espaço na segunda linha. 

// Entrada de amostra

// 10 4
// 4.0 2.0
// Saída de amostra

// 14 6
// 6.0 2.0
// Explicação

// Quando somamos os inteiros e , obtemos o inteiro . Quando subtraímos o segundo número do primeiro número, obtemos como diferença deles.
// Quando somamos os números de ponto flutuante e , obtemos . Quando subtraímos o segundo número do primeiro número, obtemos como diferença deles. 