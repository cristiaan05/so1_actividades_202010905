**Kernel**: El Kernel es el software encargado de relacionar el hardware con las aplicaciones del ordenador, es decir, las órdenes del Kernel son las únicas que interactúan con los dispositivos físicos tales como la memoria RAM, el disco duro o el procesador. Este es también conocido como núcleo, dado a que contiene las funciones del sistema operativo utilizadas con mayor frecuencia.

**Tipos de Kernel**:
1.  *Monokernel o Kernel monolítico*:

	Un kernel monolítico es un tipo de sistema operativo en el que todas las funciones esenciales del sistema, como la administración de memoria, el sistema de archivos y los controladores de dispositivos, se ejecutan en un solo espacio de kernel. Este enfoque permite una comunicación eficiente entre los componentes del sistema, pero puede ser menos modular y más difícil de mantener.
2.  *Exokernel*:
	El exokernel es un tipo de kernel que proporciona un nivel de abstracción muy bajo a las aplicaciones, permitiéndoles un control directo sobre los recursos del hardware.
3.  *Kernel Híbrido* :
Un kernel híbrido es una combinación de características de los kernels monolíticos y microkernels.
4.  *Microkernel*:
	Un microkernel es un tipo de kernel que minimiza la cantidad de código que se ejecuta en el espacio de kernel.
	
**User vs Kernel Mode**:
El "modo usuario" es donde se ejecutan nuestros programas y aplicaciones diarias, como navegadores y procesadores de texto. En este modo, estos programas tienen un acceso limitado y seguro al hardware de la computadora, evitando que puedan causar daños graves al sistema. Por otro lado, el "modo kernel" es un nivel más privilegiado donde funciona el corazón del sistema operativo. Aquí, el kernel tiene acceso completo al hardware y realiza tareas esenciales como administrar la memoria y controlar los dispositivos. Esta separación garantiza que el sistema sea estable y seguro, ya que el kernel protege los recursos del hardware y gestiona las solicitudes de los programas en modo usuario.

**Interruptions vs Traps:**
Las interrupciones y las trampas son dos mecanismos utilizados en sistemas informáticos para manejar eventos o excepciones que requieren la atención del sistema operativo o del procesador

**Interrupciones:**

-   Las interrupciones son señales enviadas por dispositivos externos o componentes de hardware al procesador para solicitar su atención.
-   Pueden ocurrir de manera asincrónica y se utilizan típicamente para eventos como entrada de teclado, clics de mouse o errores de hardware.
- **Trampas o traps:**

-   Las trampas, también conocidas como excepciones o interrupciones de software, son eventos o condiciones que ocurren durante la ejecución de un programa y requieren la intervención del sistema operativo.
-   Son sincrónicas y son generadas por el propio programa cuando se cumplen ciertas condiciones predefinidas, como un error de división por cero o una llamada al sistema.
