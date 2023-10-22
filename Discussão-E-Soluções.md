<center><h1><b>Desafio na Linguagem C</b></h1></center>

* **Proposta da avaliação:**
    Desenvolver um sistema em linguagem C com base em um cenário da vida real, no qual o sistema precisa consultar e manipular informações armazenadas em uma planilha. 
    A planilha deve contém registros de dados que devem ser acessados e alterados diretamente a partir do código em C, possibilitando operações como a modificação de informações de uma pessoa. 
    Além disso, o sistema deve ser capaz de excluir registros, tudo sem a necessidade de utilizar um banco de dados, mas sim através da manipulação direta via código em C.

* **Tema:**
    Indústria e Comércio.

## **Topicos de Analise**

1. [Definição do problema](#definição-do-problema)
2. [Brainstorming e Desenho do programa](#brainstorming-e-desenho-do-programa)
3. [Cronograma](#cronograma)
4. [Funções de cada integrante](#funções-de-cada-integrante)

<div class="page"/>

## **Definição do problema**
---
* Ideia primária:
    - Sistema que permite a manipulação de produtos (estes que estarão listados, com seus devidos preços de venda e de fornecimento e quantidade disponível).

* Ideia secundária:
    - Sistema que se baseia em caminhoneiros, veículos e entregas.
    <font color="green">APROVADO</font>

<div class="page"/>

## **Brainstorming e Desenho do programa**
---
1. Login: admin, senha: admin

2. Início do programa: terá 2 opções (Criar e verificar rotas, Criar e verificar cadastros).

3. **Criar e verificar cadastros:**

    3.1. **Colaboradores**

        3.1.1. Consultar colaboradores:

            3.1.1.1. O colaborador contém: ID pra colaborador, Nome, CPF, Data de Nascimento e a Função.

        3.1.2. Criar colaborador (cria um novo ID, não ocorre a substituição).
        3.1.3. Alterar (seleciona por ID).
        3.1.4. Excluir colaborador (seleciona por ID).

    3.2. **Veículos**

        3.2.1. Consultar veículos:

            3.2.1.1. O veículo contém: ID pra rota, Placa.
            3.2.1.2. Adicionar veículo (por ID).

        3.2.2. Alterar veículo (selecionar por ID).
        3.2.3. Excluir veículo (selecionar por ID).

4. **Criar e verificar rotas:**

    4.1. **Rotas**

        4.1.1. Consultar rotas:

            4.1.1.1. Rota contém: Código de rastreio, veículo e colaborador.
            4.1.1.2. Adicionar rotas (por ID da rota).

        4.1.2. Alterar rota (selecionar por ID da rota).
        4.1.3. Excluir rota (selecionar por ID da rota).

### *Duas possibilidades*

 * libxlsxwriter - Biblioteca (como iremos ler e escrever os dados da planilha)

 * Manipulação de dados da planilha no formato .CSV (com as funções fopen, fwrite e fread)

<div class="page"/>

## **Cronograma**
---
### **Entrega do projeto**

* 7 a 14 de dezembro.

### **Calls de Planejamento**

* 6 reuniões.

<div class="page"/>

## **Funções de cada integrante**
---
Em breve...
