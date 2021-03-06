#include "Arduino.h"
#include "Adafruit_GFX.h"

class GoodStuenPanel : public Adafruit_GFX {

public:

	// Constructor for 16x32 panel:
	GoodStuenPanel(uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2,
		uint8_t a, uint8_t b, uint8_t c,
		uint8_t sclk, uint8_t latch, uint8_t oe, boolean dbuf);

	// Constructor for 32x32 panel (adds 'd' pin):
	GoodStuenPanel(uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2,
		uint8_t a, uint8_t b, uint8_t c, uint8_t d,
		uint8_t sclk, uint8_t latch, uint8_t oe, boolean dbuf);

	void
		begin(void),
		drawPixel(int16_t x, int16_t y, uint16_t c),
		fillScreen(uint16_t c),
		updateDisplay(void),
        updateDisplay2(void),
		swapBuffers(boolean),
		dumpMatrix(void);
	uint8_t
		*backBuffer(void);
	uint16_t
		Color333(uint8_t r, uint8_t g, uint8_t b),
		Color444(uint8_t r, uint8_t g, uint8_t b),
		Color888(uint8_t r, uint8_t g, uint8_t b),
		Color888(uint8_t r, uint8_t g, uint8_t b, boolean gflag),
		ColorHSV(long hue, uint8_t sat, uint8_t val, boolean gflag);

private:

	uint8_t         *matrixbuff[2];
    uint8_t         *matrixbuff2;
	uint8_t          nRows;
	volatile uint8_t backindex;
	volatile boolean swapflag;

	// Init/alloc code common to both constructors:
	void init(uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2,
		uint8_t rows, uint8_t a, uint8_t b, uint8_t c,
		uint8_t sclk, uint8_t latch, uint8_t oe, boolean dbuf);

	// PORT register pointers, pin bitmasks, pin numbers:
	/*volatile long unsigned int
	  *sclkport, *latport, *oeport, *addraport, *addrbport, *addrcport, *addrdport;*/
	uint8_t
		sclkpin, latpin, oepin, addrapin, addrbpin, addrcpin, addrdpin;
	// _sclk, _latch, _oe, _a, _b, _c, _d, _r1, _g1, _b1, _r2, _g2, _b2;

	// Counters/pointers for interrupt handler:
	volatile uint8_t row, plane;
	volatile uint8_t *buffptr;

	void startTimerCounter();
};

