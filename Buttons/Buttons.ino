const byte buttons[] = {2, 3}, leds[] = {4, 5, 11, 12, 13};
bool state[2][2];
short i, c;

void lOnOff()
{
    if (state[0][i])
        digitalWrite(leds[i], HIGH);
    else
        digitalWrite(leds[i], LOW);
}

void counter()
{
    for (byte f = 2; f < 5; f++)
        digitalWrite(leds[f], LOW);
    if (c < 4)
        digitalWrite(leds[2], HIGH);
    else if (c < 8)
        digitalWrite(leds[3], HIGH);
    else
        digitalWrite(leds[4], HIGH);
}

void setup()
{
    for (i = 0; i < sizeof(buttons) / sizeof(byte); i++)
        pinMode(buttons[i], INPUT);
    for (i = 0; i < sizeof(leds) / sizeof(byte); i++)
        pinMode(leds[i], OUTPUT);
}

void loop()
{
    state[1][i] = state[0][i];
    state[0][i] = digitalRead(buttons[i]);
    if (!state[0][i] && state[1][i])
        c++;
    if (c > 10)
        c = 0;
    lOnOff();
    counter();
    i++;
  	if (i > 1) i = 0;
}