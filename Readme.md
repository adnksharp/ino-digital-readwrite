# LEDs and buttons

[![buttons-bb.png](https://i.postimg.cc/7LTxqn4n/buttons-bb.png)](https://postimg.cc/NyBh4T5K)

Control de LEDs usando botones.

## Hardware y software necesarios
- Placa de desarrollo Arduino 
- 5 LED
- 5 resistencias de $\displaystyle 200\Omega$ a 1 $\displaystyle K\Omega$
- 2 resistencias de 1 $\displaystyle K\Omega$
- 2 pulsadores push button
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)

## Funcionamiento
### Buttons
#### Variables 
- ```State```: Matriz que contienen el estado leido de los botones.
- ```buttons```: Array que contiene los pines donde se conectan los botones.
- ```leds```: Array que contiene los pines donde se conectan los LEDs.

#### Funcionamiento
Los botones tiene la funcion de controlar los LEDs de dos formas distintas:
- **lOnOff**: dos LEDs prenden si los botones se presionan.
- **counter**: el botón se presiona y un contador se incrementa. Un LED se encende cada vez que el contador llega a un valor determinado.

### Counter
#### Variables
- ```c```: Tiempo que los LEDs permaneceran encendidos.
- ```go```: Variable que indica cuando se empezaran a encender los LEDs.
- ```State```: Matriz que contienen el estado leido de los botones.
- ```Millis```: Variable que captura el tiempo cuando se encendieron los LEDs.
- ```Run```: Boton que inicia el encendido de los LEDs usando la variable **go**.
- ```Led```: Led a usar (LED integrado en la placa [en el caso del Arduino UNO, pin 13]).
- ```Count```: Boton que cambia el valor de c.

#### Funcionamiento
Los botones son usados para prender un LED **c** cantidad de segundos:
- **Count**: Incrementa el contador **c**.
- **Run**: Prende el LED **c** segundos usando la función ```millis()``` y la variable **Millis**.

###### Mientras el LED pemanece encendido, el valor de c no se puede modificar.

[![buttons-esquem-tico.png](https://i.postimg.cc/XJf4CNpZ/buttons-esquem-tico.png)](https://postimg.cc/YGC5cHNk)
