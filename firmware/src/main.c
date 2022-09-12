#include <asf.h>

#include "gfx_mono_ug_2832hsweg04.h"
#include "gfx_mono_text.h"
#include "sysfont.h"

/* INICIO DE CÓDIGO RETIRADO DE ROBSON COUTO (https://github.com/robsoncouto/arduino-songs)*/
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0

int mario[] = {
	// Super Mario Bros theme
	// Score available at https://musescore.com/user/2123/scores/2145
	// Theme by Koji Kondo
	NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,8, //1
	NOTE_G5,4, REST,4, NOTE_G4,8, REST,4,
	NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // 3
	NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
	NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
	REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,
	NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // repeats from 3
	NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
	NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
	REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

	
	REST,4, NOTE_G5,8, NOTE_FS5,8, NOTE_F5,8, NOTE_DS5,4, NOTE_E5,8,//7
	REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_C4,8, REST,8, NOTE_A4,8, NOTE_C5,8, NOTE_D5,8,
	REST,4, NOTE_DS5,4, REST,8, NOTE_D5,-4,
	NOTE_C5,2, REST,2,

	REST,4, NOTE_G5,8, NOTE_FS5,8, NOTE_F5,8, NOTE_DS5,4, NOTE_E5,8,//repeats from 7
	REST,8, NOTE_GS4,8, NOTE_A4,8, NOTE_C4,8, REST,8, NOTE_A4,8, NOTE_C5,8, NOTE_D5,8,
	REST,4, NOTE_DS5,4, REST,8, NOTE_D5,-4,
	NOTE_C5,2, REST,2,

	NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,4,//11
	NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2,

	NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8,//13
	REST,1,
	NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,4,
	NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2,
	NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,4,
	NOTE_G5,4, REST,4, NOTE_G4,4, REST,4,
	NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // 19
	
	NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
	NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
	REST,8, NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

	NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, // repeats from 19
	NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
	NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
	REST,8, NOTE_E5,4, NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

	NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,//23
	NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
	NOTE_D5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_G5,-8, NOTE_F5,-8,
	
	NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2, //26
	NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
	NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
	NOTE_B4,8, NOTE_F5,4, NOTE_F5,8, NOTE_F5,-8, NOTE_E5,-8, NOTE_D5,-8,
	NOTE_C5,8, NOTE_E4,4, NOTE_E4,8, NOTE_C4,2,

	NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,//repeats from 23
	NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
	NOTE_D5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_G5,-8, NOTE_F5,-8,
	
	NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2, //26
	NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
	NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
	NOTE_B4,8, NOTE_F5,4, NOTE_F5,8, NOTE_F5,-8, NOTE_E5,-8, NOTE_D5,-8,
	NOTE_C5,8, NOTE_E4,4, NOTE_E4,8, NOTE_C4,2,
	NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,8, NOTE_E5,8,
	REST,1,

	NOTE_C5,8, NOTE_C5,4, NOTE_C5,8, REST,8, NOTE_C5,8, NOTE_D5,4, //33
	NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2,
	NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,4,
	NOTE_G5,4, REST,4, NOTE_G4,4, REST,4,
	NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
	NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
	NOTE_D5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_A5,-8, NOTE_G5,-8, NOTE_F5,-8,
	
	NOTE_E5,8, NOTE_C5,4, NOTE_A4,8, NOTE_G4,2, //40
	NOTE_E5,8, NOTE_C5,4, NOTE_G4,8, REST,4, NOTE_GS4,4,
	NOTE_A4,8, NOTE_F5,4, NOTE_F5,8, NOTE_A4,2,
	NOTE_B4,8, NOTE_F5,4, NOTE_F5,8, NOTE_F5,-8, NOTE_E5,-8, NOTE_D5,-8,
	NOTE_C5,8, NOTE_E4,4, NOTE_E4,8, NOTE_C4,2,
	
	//game over sound
	NOTE_C5,-4, NOTE_G4,-4, NOTE_E4,4, //45
	NOTE_A4,-8, NOTE_B4,-8, NOTE_A4,-8, NOTE_GS4,-8, NOTE_AS4,-8, NOTE_GS4,-8,
	NOTE_G4,8, NOTE_D4,8, NOTE_E4,-2,};

int vader[] = {
	// Darth Vader theme (Imperial March) - Star wars 
	// Score available at https://musescore.com/user/202909/scores/1141521
	// The tenor saxophone part was used
	NOTE_A4,-4, NOTE_A4,-4, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_F4,8, REST,8,
	NOTE_A4,-4, NOTE_A4,-4, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_F4,8, REST,8,
	NOTE_A4,4, NOTE_A4,4, NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16,

	NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,//4
	NOTE_E5,4, NOTE_E5,4, NOTE_E5,4, NOTE_F5,-8, NOTE_C5,16,
	NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
	
	NOTE_A5,4, NOTE_A4,-8, NOTE_A4,16, NOTE_A5,4, NOTE_GS5,-8, NOTE_G5,16, //7 
	NOTE_DS5,16, NOTE_D5,16, NOTE_DS5,8, REST,8, NOTE_A4,8, NOTE_DS5,4, NOTE_D5,-8, NOTE_CS5,16,

	NOTE_C5,16, NOTE_B4,16, NOTE_C5,16, REST,8, NOTE_F4,8, NOTE_GS4,4, NOTE_F4,-8, NOTE_A4,-16,//9
	NOTE_C5,4, NOTE_A4,-8, NOTE_C5,16, NOTE_E5,2,

	NOTE_A5,4, NOTE_A4,-8, NOTE_A4,16, NOTE_A5,4, NOTE_GS5,-8, NOTE_G5,16, //7 
	NOTE_DS5,16, NOTE_D5,16, NOTE_DS5,8, REST,8, NOTE_A4,8, NOTE_DS5,4, NOTE_D5,-8, NOTE_CS5,16,

	NOTE_C5,16, NOTE_B4,16, NOTE_C5,16, REST,8, NOTE_F4,8, NOTE_GS4,4, NOTE_F4,-8, NOTE_A4,-16,//9
	NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
};

/* FIM DE CÓDIGO RETIRADO DE ROBSON COUTO (https://github.com/robsoncouto/arduino-songs)*/

// Config Buzzer
#define BUZZER_PIO PIOA
#define BUZZER_PIO_ID ID_PIOA
#define BUZZER_PIO_IDX 24
#define BUZZER_PIO_IDX_MASK (1<<BUZZER_PIO_IDX)

// Config botão start/pause (BUT1)
#define START_PIO PIOD
#define START_PIO_ID ID_PIOD
#define START_PIO_IDX 28
#define START_PIO_IDX_MASK (1u<<START_PIO_IDX)

// Config botão de seleção (BUT2)
#define SELECAO_PIO PIOC
#define SELECAO_PIO_ID ID_PIOC
#define SELECAO_PIO_IDX 31
#define SELECAO_PIO_IDX_MASK (1u << SELECAO_PIO_IDX)

//LED embutido
#define LED_PIO PIOC
#define LED_PIO_ID ID_PIOC
#define LED_PIO_IDX 8
#define LED_PIO_IDX_MASK (1 << LED_PIO_IDX)

int divider = 0;
int noteDuration = 0;

/* --- --- --- --- --- CONFIG MARIO --- --- --- --- --- */
int mario_tempo = 200;
int mario_wholenote = 0;
#define mario_notes sizeof(mario) / sizeof(mario[0]) / 2
#define mario_wholenote (60000 * 4) / mario_tempo

/* --- --- --- --- --- CONFIG VADER --- --- --- --- --- */
int vader_tempo = 120;
int vader_wholenote = 0;
#define vader_notes sizeof(vader) / sizeof(vader[0]) / 2
#define vader_wholenote (60000 * 4) / vader_tempo

// Flags
volatile char flag_start_stop = 0;
volatile char flag_selecao = 0;

// Funções de Callback

void start_stop_callback(void){
	// Refatoração retirada do StackOverflow
	/* https://stackoverflow.com/questions/4084050/can-you-use-arithmetic-operators-to-flip-between-0-and-1 */
	flag_start_stop = 1 - flag_start_stop;
}

void selecao_callback(void){
	flag_selecao = 1;
}

void set_buzzer(){
	pio_set(BUZZER_PIO, BUZZER_PIO_IDX_MASK);
}

void clear_buzzer(){
	pio_clear(BUZZER_PIO, BUZZER_PIO_IDX_MASK);
}

int get_startstop(){
	return pio_get(START_PIO, PIO_INPUT, START_PIO_IDX_MASK);
}

int get_selecao(){
	return pio_get(SELECAO_PIO, PIO_INPUT, SELECAO_PIO_IDX_MASK);
}

void buzzer_test(int freq){
	double T = (1.0/freq) * 1E6;
	clear_buzzer();
	delay_us(T/2);
	set_buzzer();
	delay_us(T/2);
}

void tone(int freq, int time){
	// Reproduz uma onda quadrada na freq e no tempo dado
	// Parâmetros:
	// - freq -> Frequência [Hz]
	// - time -> Tempo de duração [ms]
	if (freq==0){
		set_buzzer();
		delay_ms(time);
	}else{
		double t = (1.0/freq)*1e6;
		double delay = t/2;
		double pulsos = freq * time / 1e3;
		int i = 0;
		while (i < pulsos){
			set_buzzer();
			delay_us(delay);
			clear_buzzer();
			delay_us(delay);
			i++;
		}
	}
}

void display_song(int songId){
	if(songId == 0){
		gfx_mono_draw_string("Mario Theme", 0, 0, &sysfont);
	} else {
		gfx_mono_draw_string("Imperial March", 0, 0, &sysfont);
	}
}

void init(){
	// Inits básicos
	board_init();
	sysclk_init();
	delay_init();
	// Init OLED
	gfx_mono_ssd1306_init();
	// Disativa WatchDog Timer
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	//Configurando Buzzer
	pmc_enable_periph_clk(BUZZER_PIO_ID);
	pio_set_output(BUZZER_PIO, BUZZER_PIO_IDX_MASK, 0, 0, 0);
	
	// Config do LED
	pmc_enable_periph_clk(LED_PIO_ID);
	pio_set_output(LED_PIO, LED_PIO_IDX_MASK, 0, 0, 0);

	/*--- --- --- --- --- --- CONFIG START STOP --- --- --- --- --- ---*/
	pmc_enable_periph_clk(START_PIO_ID);
	pio_set_input(START_PIO, START_PIO_IDX_MASK, PIO_DEFAULT);
	pio_pull_up(START_PIO, START_PIO_IDX_MASK, 1);

	// Configurando PIO com debounce
	pio_configure(START_PIO, PIO_INPUT, START_PIO_IDX_MASK, PIO_PULLUP | PIO_DEBOUNCE);
	pio_set_debounce_filter(START_PIO, START_PIO_IDX_MASK, 60);

	// Associando função de callback
	pio_handler_set(START_PIO,
					START_PIO_ID,
					START_PIO_IDX_MASK,
					PIO_IT_FALL_EDGE,
					start_stop_callback);
	// Ativa interrupção e limpa primeira IRQ gerada na ativacao
  	pio_enable_interrupt(START_PIO, START_PIO_IDX_MASK);
  	pio_get_interrupt_status(START_PIO);	
	// Configura NVIC para receber interrupcoes do PIO do botao
	// com prioridade 4 (quanto mais próximo de 0 maior)
	NVIC_EnableIRQ(START_PIO_ID);
	NVIC_SetPriority(START_PIO_ID, 3); // Prioridade 4	

	/*--- --- --- --- --- --- CONFIG NEXT SONG --- --- --- --- --- ---*/
	pmc_enable_periph_clk(SELECAO_PIO_ID);
	pio_set_input(SELECAO_PIO, SELECAO_PIO_IDX_MASK, PIO_DEFAULT);
	pio_pull_up(SELECAO_PIO, SELECAO_PIO_IDX_MASK, 1);

	// Configurando PIO com debounce
	pio_configure(SELECAO_PIO, PIO_INPUT, SELECAO_PIO_IDX_MASK, PIO_PULLUP | PIO_DEBOUNCE);
	pio_set_debounce_filter(SELECAO_PIO, SELECAO_PIO_IDX_MASK, 60);

	// Associando função de callback
	pio_handler_set(SELECAO_PIO,
					SELECAO_PIO_ID,
					SELECAO_PIO_IDX_MASK,
					PIO_IT_FALL_EDGE,
					selecao_callback);
	// Ativa interrupção e limpa primeira IRQ gerada na ativacao
  	pio_enable_interrupt(SELECAO_PIO, SELECAO_PIO_IDX_MASK);
  	pio_get_interrupt_status(SELECAO_PIO);	
	// Configura NVIC para receber interrupcoes do PIO do botao
	// com prioridade 4 (quanto mais próximo de 0 maior)
	NVIC_EnableIRQ(SELECAO_PIO_ID);
	NVIC_SetPriority(SELECAO_PIO_ID, 4); // Prioridade 4	
}

int main (void)
{
	init();
	int lastNote = 0;
	int songId = 0;
	gfx_mono_draw_string("Mario Theme", 0, 0, &sysfont);
	while(1) {
		pio_set(LED_PIO, LED_PIO_IDX_MASK);
		pmc_sleep(SAM_PM_SMODE_SLEEP_WFI);
		
		if(flag_selecao){
			if(songId == 0){
				songId = 1;
				gfx_mono_draw_string("Vader Theme", 0, 0, &sysfont);
			} else {
				songId = 0;
				gfx_mono_draw_string("Mario Theme", 0, 0, &sysfont);
			}
			lastNote = 0;
			flag_selecao = 0;
			
		}

		if(flag_start_stop){
			if(songId == 0){
				for(int thisNote = lastNote; thisNote < mario_notes*2; thisNote = thisNote + 2){
					/* CÓDIGO ADAPTADO A PARTIR DE ROBSON COUTO (https://github.com/robsoncouto/arduino-songs)*/
					/* TAMBÉM UTILIZOU-SE UMA REFATORAÇÃO ELABORADA POR RAFAEL CORSI (https://insper.github.io/ComputacaoEmbarcada/navigation/APS/APS-1-Musical-software/) */
					divider = mario[thisNote + 1];
					noteDuration = (mario_wholenote) / abs(divider);
					if (divider < 0) {
						noteDuration *= 1.5;
					}
					pio_clear(LED_PIO, LED_PIO_IDX_MASK);
					tone(mario[thisNote], noteDuration*0.9);
					pio_set(LED_PIO, LED_PIO_IDX_MASK);
					delay_ms(noteDuration*0.1);
					lastNote = thisNote;
					if(flag_start_stop==0){
						thisNote = mario_notes*2;
					}
				}
			} else {
				for(int thisNote = lastNote; thisNote < vader_notes*2; thisNote = thisNote + 2){
					divider = vader[thisNote + 1];
					noteDuration = (vader_wholenote) / abs(divider);
					if (divider < 0) {
						noteDuration *= 1.5;
					}
					pio_clear(LED_PIO, LED_PIO_IDX_MASK);
					tone(vader[thisNote], noteDuration*0.9);
					pio_set(LED_PIO, LED_PIO_IDX_MASK);
					delay_ms(noteDuration*0.1);
					lastNote = thisNote;
					if(flag_start_stop==0){
						thisNote = vader_notes*2;
					}
				}
			}
			
		}
	}
}
