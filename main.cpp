#include <iostream>
#include <ctime>
#include <chrono>

#include "include/i2c_bus.cpp"
#include "include/ssd1306.cpp"

#define SAMPLE_TIME 60000000 // useconds
#define AVERAGE 60 // number of samples to average over the sampling time
#define SLEEP_TIME SAMPLE_TIME / AVERAGE

int main()
{
	I2C_BUS i2c_bus = I2C_BUS(0);
	SSD1306 ssd1306 = SSD1306(&i2c_bus, 0x3c);

    ssd1306.set_cursor(0, 0);
    ssd1306.write_col(0b01010101);
    ssd1306.write_col(0b10101010);
    ssd1306.write_col(0b01010101);
    ssd1306.write_col(0b10101010);
    ssd1306.write_col(0b01010101);
    ssd1306.write_col(0b10101010);
    ssd1306.write_col(0b01010101);
    ssd1306.write_col(0b10101010);

	return 0;
}