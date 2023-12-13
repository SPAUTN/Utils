# Utils
Librería de utilidades para la comunicación serial entre microcontrolador ESP32 a través del puerto Serial2 y el módulo LoRaWAN RAK3172.

Incluye funciones desintadas a:
* Manipulación de datos hexadecimales - [HexFunctions](include/HexFunctions.hpp)
* Envió y recepción de datosM - [ATFunctions](include/ATFunctions.hpp)
* Manipulación de tiempo - [Timestamp](include/Timestamp.hpp) 

> [!TIP]
> La publicación de una nueva versión se realiza ejecutando el siguiente comando, luego de haber modificado el archivo `library.json`, donde entre otros parámetros se indica el nombre de la versión a publicar:
> ```
> pio pkg publish [OPTIONS] <source directory, tar.gz or zip>
> 
> Options:
>   --owner TEXT                    PIO Account username (can be organization
>                                   username). Default is set to a username of
>                                   the authorized PIO Account
>   --type [library|platform|tool]  Custom package type
>   --released-at TEXT              Custom release date and time in the next
>                                   format (UTC): 2014-06-13 17:08:52
>   --private                       Restricted access (not a public)
>   --notify / --no-notify          Notify by email when package is processed
>   --no-interactive                Do not show interactive prompt
>   -h, --help                      Show this message and exit.
> ``` 
