// Setup for the ESP32 S3 with ILI9488 display
// Note SPI DMA with ESP32 S3 is not currently supported
#define USER_SETUP_ID 70
// See SetupX_Template.h for all options available
#define ILI9488_DRIVER

#define SCREEN_WIDTH 480
#define SCREEN_HEIGHT 320

// TFT connected to HSPI-Port (SPI3), pins are variable 
#define TFT_CS  17 
#define TFT_MOSI 16
#define TFT_SCLK 18 
#define TFT_MISO 15

// Use pins in range 0-31
#define TFT_DC    4
#define TFT_RST   5

#define TFT_BL	 9
#define TFT_BACKLIGHT_ON HIGH

// Touch-controller connected to VSPI-port (SPI2), pins are fixed - do not change!
#define TOUCH_CS 10
#define TOUCH_MOSI 11
#define TOUCH_SCLK 12 
#define TOUCH_MISO 13
#define TOUCH_IRQ 7  // irq pin of touch screen

#define D0 (2)
#define D1 (3)
#define D2 (4)
#define D3 (5)
#define D4 (6)
#define D5 (7)
#define D6 (21)
#define D7 (20)
#define D8 (8)
#define D9 (9)
#define D10 (10)

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

// FSPI (or VSPI) port (SPI2) used unless following defined. HSPI port is (SPI3) on S3.
#define USE_HSPI_PORT

//#define SPI_FREQUENCY  27000000
#define SPI_FREQUENCY  40000000   // Maximum for ILI9341
#define SPI_READ_FREQUENCY  20000000 
#define SPI_TOUCH_FREQUENCY 2500000
