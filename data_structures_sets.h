/*
    Módulo Data Structures Sets

    Este módulo contem definições de tipos e estruturas de dados
    destinado a serem utilizados em outras partes do código-fonte.
*/
#ifndef DATA_STRUCTURES_SETS_H
#define DATA_STRUCTURES_SETS_H

/*
    A estrutura Collaborator_Data armazena informações de uma pessoa, incluindo:
    - ID (até 11 caracteres)
    - Nome (até 32 caracteres)
    - Data de nascimento
    - CPF (Cadastro de Pessoa Física, até 12 caracteres)
*/
typedef struct {
    const double id[11]; // Identidade do usuário
    const char name[32]; // Nome
    const char dateOfBirth; // Data de nascimento
    const char individualTaxpayerRegistration[12]; // CPF
} Collaborator_Data;

Collaborator_Data collaboratorInformation;

#endif