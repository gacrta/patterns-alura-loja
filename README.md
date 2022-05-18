# patterns-alura-loja

Projeto para curso de Design Patterns 1 da Alura, originalmente em Java, mas nesse projeto é feito em C++ para praticar a linguagem.

## Anotações

### Aula 1 - Strategy

- Criação do projeto inicial com um `Orcamento`.
- A nova funcionalidade é calcular alguns impostos desse `Orcamento` usando uma `CalculadoraImpostos`.
- Abordagem ingênua é criar testar no mesmo método pelo tipo de imposto (validar `tipoImposto == ICMS`).
- Abordagem mais coesa é separar os impostos em classes, cada uma possuindo a mesma estratégia de cálculo de imposto. Isso é garantido pois as classes `ICMS` e `ISS` implementam a interface `Imposto`.
- [Strategy](https://refactoring.guru/design-patterns/strategy) é utilizado quando temos vários algoritmos diferentes para a mesma finalidade. Pode-se agrupar esses algoritmos em classes com uma interface comum e o módulo consumidor vai utilizar a interface para executar o trabalho, delegando ao cliente a escolha da estratégia adequada.