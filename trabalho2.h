/*============================================================================*/
/* CSF13 - 2018-2 - TRABALHO 2                                                */
/*----------------------------------------------------------------------------*/
/* Autor: Bogdan T. Nassu - nassu@dainf.ct.utfpr.edu.br                       */
/*============================================================================*/
/** Funções pedidas para o 2o trabalho da turma da disciplina CSF13
 * (Fundamentos de Programação 1), 2o semestre de 2018, prof. Bogdan T. Nassu,
 * Universidade Tecnológica Federal do Paraná. */
/*============================================================================*/

#ifndef __TRABALHO2_H
#define __TRABALHO2_H

/*============================================================================*/

void mudaGanho (double* dados, int n_amostras, double ganho);
int contaSaturacoes (double* dados, int n_amostras);
int hardClipping (double* dados, int n_amostras, double limite);
void limitaSinal (double* dados, int n_amostras, int n_passos);
void geraOndaQuadrada (double* dados, int n_amostras, int taxa, double freq);

/*============================================================================*/
#endif /* __TRABALHO2_H */
