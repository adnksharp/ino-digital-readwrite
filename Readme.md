# LEDs and buttons

[![buttons-bb.png](https://i.postimg.cc/7LTxqn4n/buttons-bb.png)](https://postimg.cc/NyBh4T5K)

Control de LEDs usando botones.

Los botones tiene la funcion de controlar los LEDs de dos formas distintas:

- **Pulsar**: el botón se presiona y el LED se encende.
- **Contar**: el botón se presiona y un contador se incrementa. Un LED se encende cada vez que el contador llega a un valor determinado.

Para leer los botones se usan variables de tipo `bool` que se actualizan constantemente leyendo el estado del botón.

[![buttons-esquem-tico.png](https://i.postimg.cc/XJf4CNpZ/buttons-esquem-tico.png)](https://postimg.cc/YGC5cHNk)