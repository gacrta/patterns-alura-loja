# patterns-alura-loja

Projeto para curso de Design Patterns 1 da Alura, originalmente em Java, mas nesse projeto � feito em C++ para praticar a linguagem.

## Anota��es

### Aula 1 - Strategy

- Cria��o do projeto inicial com um `Orcamento`.
- A nova funcionalidade � calcular alguns impostos desse `Orcamento` usando uma `CalculadoraImpostos`.
- Abordagem ing�nua � criar testar no mesmo m�todo pelo tipo de imposto (validar `tipoImposto == ICMS`).
- Abordagem mais coesa � separar os impostos em classes, cada uma possuindo a mesma estrat�gia de c�lculo de imposto. Isso � garantido pois as classes `ICMS` e `ISS` implementam a interface `Imposto`.
- [Strategy](https://refactoring.guru/design-patterns/strategy) � utilizado quando temos v�rios algoritmos diferentes para a mesma finalidade. Pode-se agrupar esses algoritmos em classes com uma interface comum e o m�dulo consumidor vai utilizar a interface para executar o trabalho, delegando ao cliente a escolha da estrat�gia adequada.