/*
    Módulo Collaborator Data Utils

    Este módulo contém funções de utilitários para coletar e armazenar informações
    na estrutura Collaborator_Data. Inclui funções para coletar dados como nome, data de nascimento,
    CPF (Cadastro de Pessoa Física) e RG (Registro Geral).
*/
#ifndef COLLABORATOR_DATA_UTILS_H
#define COLLABORATOR_DATA_UTILS_H
#include "data_structures_sets.h"

/*
    Esta função coleta o ID da pessoa e o armazena
    na estrutura Collaborator_Data referenciada pelo ponteiro collaboratorInformation.
*/
void collectPersonData_ID(Collaborator_Data *collaboratorInformation);

/*
    Esta função coleta o nome da pessoa e o armazena
    na estrutura Collaborator_Data referenciada pelo ponteiro collaboratorInformation.
*/
void collectPersonData_Name(Collaborator_Data *collaboratorInformation);

/*
    Esta função coleta a data de nascimento da pessoa e a armazena 
    na estrutura Collaborator_Data referenciada pelo ponteiro collaboratorInformation.
*/
void collectPersonData_DateOfBirth(Collaborator_Data *collaboratorInformation);

/*
    Esta função coleta informações relacionadas ao CPF (Cadastro de Pessoa Física)
    e as armazena na estrutura Collaborator_Data referenciada pelo ponteiro collaboratorInformation.
*/
void collectPersonData_IndividualTaxpayerRegistration(Collaborator_Data *collaboratorInformation);

#endif