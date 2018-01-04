class LED
{
public:
	LED();
	~LED();
	uint8_t charToByte(char origin){

	};
private:
	uint8_t display[4];
	uint8_t currSection=0;
	const holdTime=5;
	const byte font[] = {
		B1111110,   // [0] => "0"
		B0110000,   // [1] => "1"
		B1101101,   // [2] => "2"
		B1111001,   // [3] => "3"
		B0110011,   // [4] => "4"
		B1011011,   // [5] => "5"
		B1011111,   // [6] => "6"
		B1110000,   // [7] => "7"
		B1111111,   // [8] => "8"
		B1111011,   // [9] => "9"
		B1110111,   // [10] => "A"
		B0000001,   // [11] => "dash"
		};
};