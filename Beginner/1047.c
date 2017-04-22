#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
	int horaInicio,minutoInicio,horaFim,minutoFim;
	int resultado;
	scanf("%d %d %d %d",&horaInicio,&minutoInicio,&horaFim,&minutoFim);
	int tmi = (horaInicio * 60) + minutoInicio;
	int tmf = (horaFim * 60) + minutoFim;
	int vH = 24 * 60;
	if(tmi > tmf){
		int x = vH - tmi;
		resultado = x + tmf;
	}else if(tmi < tmf){
		resultado = tmf - tmi;
	}else{
		resultado = vH;
	}
	
	int horas = resultado / 60;
	int min = resultado % 60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",horas,min);
	printf("\n");
}
