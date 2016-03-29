int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int p = 8;
int d4 = 9;
int d3 = 10;
int d2 = 11;
int d1 = 12;

void setup() {
	pinMode(d1, OUTPUT);
	pinMode(d2, OUTPUT);
	pinMode(d3, OUTPUT);
	pinMode(d4, OUTPUT);
	pinMode(a, OUTPUT);
	pinMode(b, OUTPUT);
	pinMode(c, OUTPUT);
	pinMode(d, OUTPUT);
	pinMode(e, OUTPUT);
	pinMode(f, OUTPUT);
	pinMode(g, OUTPUT);
	pinMode(p, OUTPUT);
}

void loop() {
	clearLEDs();
	digit(1);
	number(0);
	delayMicroseconds(55);

	clearLEDs();
	digit(2);
	number(0);
	delayMicroseconds(55);

	clearLEDs();
	digit(3);
	number(1);
	delayMicroseconds(55);

	clearLEDs();
	digit(4);
	number(6);
	delayMicroseconds(55);
}

void digit(int d) {
	digitalWrite(d1, HIGH);
	digitalWrite(d2, HIGH);
	digitalWrite(d3, HIGH);
	digitalWrite(d4, HIGH);

	switch (d)
	{
	case 1:
		digitalWrite(d1, LOW);
		break;
	case 2:
		digitalWrite(d2, LOW);
		break;
	case 3:
		digitalWrite(d3, LOW);
		break;
	case 4:
		digitalWrite(d4, LOW);
		break;
	default:
		break;
	}
}

void number(int n) {
	switch (n)
	{
	case 1:
		one();
		break;
	case 2:
		two();
		break;
	case 3:
		three();
		break;
	case 4:
		four();
		break;
	case 5:
		five();
		break;
	case 6:
		six();
		break;
	case 7:
		seven();
		break;
	case 8:
		eight();
		break;
	case 9:
		nine();
		break;
	default:
		zero();
		break;
	}
}

void clearLEDs() {
	digitalWrite(a, LOW);
	digitalWrite(b, LOW);
	digitalWrite(c, LOW);
	digitalWrite(d, LOW);
	digitalWrite(e, LOW);
	digitalWrite(f, LOW);
	digitalWrite(g, LOW);
	digitalWrite(p, LOW);
}

void zero() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, HIGH);   
	digitalWrite(e, HIGH); 
	digitalWrite(f, HIGH);   
	digitalWrite(g, LOW);
}

void one() {
	digitalWrite(a, LOW);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, LOW);   
	digitalWrite(e, LOW);   
	digitalWrite(f, LOW);   
	digitalWrite(g, LOW);
}

void two() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, LOW);   
	digitalWrite(d, HIGH);   
	digitalWrite(e, HIGH);   
	digitalWrite(f, LOW);   
	digitalWrite(g, HIGH);
}

void three() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);   
	digitalWrite(e, LOW);   
	digitalWrite(f, LOW);   
	digitalWrite(g, HIGH);
}

void four() {
	digitalWrite(a, LOW);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, LOW);   
	digitalWrite(e, LOW);   
	digitalWrite(f, HIGH);   
	digitalWrite(g, HIGH);
}

void five() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, LOW);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, HIGH);   
	digitalWrite(e, LOW);   
	digitalWrite(f, HIGH);   
	digitalWrite(g, HIGH);
}

void six() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, LOW);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, HIGH);   
	digitalWrite(e, HIGH);   
	digitalWrite(f, HIGH);   
	digitalWrite(g, HIGH);
}

void seven() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);
	digitalWrite(d, LOW);   
	digitalWrite(e, LOW);   
	digitalWrite(f, LOW);   
	digitalWrite(g, LOW);
}

void eight() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, HIGH);   
	digitalWrite(e, HIGH); 
	digitalWrite(f, HIGH);   
	digitalWrite(g, HIGH);
}

void nine() {
	digitalWrite(a, HIGH);   
	digitalWrite(b, HIGH);   
	digitalWrite(c, HIGH);   
	digitalWrite(d, HIGH);   
	digitalWrite(e, LOW);   
	digitalWrite(f, HIGH);   
	digitalWrite(g, HIGH);
}


