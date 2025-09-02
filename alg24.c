#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int dia_partida = 0;
int mes_partida = 0;
int ano_partida = 0;

int dia_chegada = 0;
int mes_chegada = 0;
int ano_chegada = 0;

int anos = 0;
int meses = 0;
int dias = 0;
int horas = 0;
int minutos = 0;

int hora_partida = 0;
int minuto_partida = 0;

int hora_chegada = 0;
int minuto_chegada = 0;

float total_horas = 0;

int main(void)
{
    //1º- Recolhendo Dados relacionados ao Momento de Partida
    printf("------------------ VIAGEM - PARTIDA (Km) ------------------\n");
    dia_partida = get_int("Dia da Partida: ");
    mes_partida = get_int("Mês da Partida: ");
    ano_partida = get_int("Ano da Partida: ");
    hora_partida = get_float("Hora da Partida: ");
    minuto_partida = get_float("Minuto da Partida: ");
    //2º- Recolhendo Dados relacionados ao Momento de Chegada
    printf("------------------ VIAGEM - CHEGADA (Km) ------------------\n");
    dia_chegada = get_int("Dia da Chegada: ");
    mes_chegada = get_int("Mês da Chegada: ");
    ano_chegada = get_int("Ano da Chegada: ");
    hora_chegada = get_float("Hora da Chegada: ");
    minuto_chegada = get_float("Minuto da Chegada: ");
    system("clear");
    //3º Obter o Total de Dias decorridos na viagem
    if(ano_partida > ano_chegada)
    {
        return 1;
    }
    else if(ano_partida < ano_chegada || ano_partida == ano_chegada)
    {
        anos = (ano_chegada - ano_partida) * 365;
        if(mes_partida < mes_chegada || mes_partida > mes_chegada)
        {
            meses = (mes_chegada - mes_partida) * 30;
        }
        if(dia_partida < dia_chegada || dia_partida > dia_chegada)
        {
            dias = (dia_chegada - dia_partida);
        }
    }
    anos = anos + meses + dias;
    printf("Sua viagem durou %i dias\n", anos);

    total_horas = anos * 24;
    horas = (hora_chegada - hora_partida) * 60;
    minutos = minuto_chegada - minuto_partida;

    total_horas = total_horas + horas + minutos;
    printf("Duração em minutos: %2.f\n", total_horas);
}
