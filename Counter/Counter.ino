#define Count 2
#define Run 3
#define Led Led_BUILTIN
bool state[2][2];
bool go;
int c;
unsigned long long Millis;

void setup()
{
    pinMode(Led, OUTPUT);
    pinMode(Run, INPUT);
    pinMode(Count, INPUT);
}

void loop()
{
    if (!go)
    {
        state[1][0] = state[0][0];
        state[0][0] = digitalRead(Count);
        state[1][1] = state[0][1];
        state[0][1] = digitalRead(Run);
        if (!state[0][0] && state[1][0])
            c++;
        if (!state[0][1] && state[1][1])
        {
            Millis = millis();
            go = true;
        }
    }
    else
    {
        digitalWrite(Led, HIGH);
        if ((millis() - Millis) >= (c * 1000))
        {
            go = false;
            c = 0;
            digitalWrite(Led, LOW);
        }
    }
}
