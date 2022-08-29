#include <asf.h>

#include "gfx_mono_ug_2832hsweg04.h"
#include "gfx_mono_text.h"
#include "sysfont.h"

#define BUZZER_PIO PIOA
#define BUZZER_PIO_ID ID_PIOA
#define BUZZER_PIO_IDX 24
#define BUZZER_PIO_IDX_MASK (1<<BUZZER_PIO_IDX)

void set_buzzer(){
	pio_set(BUZZER_PIO, BUZZER_PIO_IDX_MASK);
}

void clear_buzzer(){
	pio_clear(BUZZER_PIO, BUZZER_PIO_IDX_MASK);
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
}

int main (void)
{
	init();
	
	//   // Escreve na tela um circulo e um texto
	// 	gfx_mono_draw_filled_circle(20, 16, 16, GFX_PIXEL_SET, GFX_WHOLE);
	//     gfx_mono_draw_string("mundo", 50,16, &sysfont);

	//     /* Insert application code here, after the board has been initialized. */
	while(1) {
		set_buzzer();
		delay_us(500);
		clear_buzzer();
		delay_us(500);

	}
}
