#include <asf.h>

#include "gfx_mono_ug_2832hsweg04.h"
#include "gfx_mono_text.h"
#include "sysfont.h"

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
	double T = (1.0/freq);
	int num = (time/T);
	for(int i = 0; i<=num; i++){
		clear_buzzer();
		delay_us(T*1e6/2);
		set_buzzer();
		delay_us(T*1e6/2);
	}

}

void init(){
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

	//BUT1
	pmc_enable_periph_clk(START_PIO_ID);
	pio_set_input(START_PIO, START_PIO_IDX_MASK, PIO_DEFAULT);
	pio_pull_up(START_PIO, START_PIO_IDX_MASK, 1);
}

int main (void)
{
	init();
	
	//   // Escreve na tela um circulo e um texto
	// 	gfx_mono_draw_filled_circle(20, 16, 16, GFX_PIXEL_SET, GFX_WHOLE);
	//     gfx_mono_draw_string("mundo", 50,16, &sysfont);

	//     /* Insert application code here, after the board has been initialized. */
	while(1) {
		// buzzer_test(440);
		tone(440, 5);
		delay_s(5);		
		// ----- TESTA O RETURN DO get_starstop() -----
		// char teste[3];
		// sprintf(teste, "%d", get_startstop());
		// gfx_mono_draw_string(teste, 0, 16, &sysfont);
	}
}
